///*
//	编写一个算法判断给定的二叉树是否是二叉排序树
//	分析：
//		二叉排序树的特点就是，根节点的值比左子树大，比右子树小。我们可以每次访问一个节点时，分别找到其左子树的最大值，右子树的
//		最小值，如果小于左子树最大值，大于右子树最小值，则可判断该树不是二叉排序树。
//*/
// struct biTree {//树的结构体
//	 char data;
//	 biTree* lchild;
//	 biTree* rchild;
// };
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//int getMax(biTree *T) {
//	if (T) {
//		static int max = T->data;
//		if (T->lchild&&max < T->lchild->data) {
//			max = T->lchild->data;
//		}
//		if (T->rchild&&max < T->rchild->data) {
//			max = T->rchild->data;
//		}
//		getMax(T->lchild);
//		getMax(T->rchild);
//		return max;
//	}
//	return -1;
//}
//int getMin(biTree *T) {
//	if (T) {
//		static int min = T->data;
//		if (T->lchild&&min > T->lchild->data) {
//			min = T->lchild->data;
//		}
//		if (T->rchild&&min > T->rchild->data) {
//			min = T->rchild->data;
//		}
//		getMin(T->lchild);
//		getMin(T->rchild);
//		return min;
//	}
//	return 9999;
//}
//bool isSort(biTree *T) {
//	if (!T || !T->lchild && !T->rchild) {//空树或只有根节点是二叉排序树
//		return true;
//	}
//	if (T->data < getMax(T->lchild)) {//如果当前节点小于左子树最大节点，不是二叉排序树
//		return false;
//	}
//	if (T->data > getMin(T->rchild)) {//如果当前节点大于右子树最小节点，不是二叉排序树
//		return false;
//	}
//	return isSort(T->lchild)&& isSort(T->rchild);//判断左子树//判断右子树
//}
//int main() {
//	biTree* create(biTree*,int);
//	biTree *T = (biTree*)malloc(sizeof(biTree));
//	T = create(T,0);
//	isSort(T) ? printf("是二叉排序树"): printf("不是二叉排序树");
//	return 0;
//}