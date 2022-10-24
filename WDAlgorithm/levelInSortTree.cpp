///*
//	设计一个算法，求出指定节点在给定二叉排序树中的层次
//	分析：
//		我们可以根据二叉排序树的性质，从根节点一直向下查找，每查找一次，层次便加一
//*/
// struct biTree {//树的结构体
//	 char data;
//	 biTree* lchild;
//	 biTree* rchild;
// };
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//
//void findLevel(biTree *T, int p,int &depth) {
//	if (T) {
//		if (T->data < p) {
//			depth++;
//			findLevel(T->rchild, p,depth);
//		}
//		else if(T->data > p){
//			depth++;
//			findLevel(T->lchild, p,depth);
//		}
//	}
//}
//int main() {
//	//创建一颗二叉排序树
//	biTree* create(biTree*,int);
//	biTree *T = (biTree *)malloc(sizeof(biTree));
//	T = create(T,1);
//	int p = 7,depth=0;//手动指定节点值
//	findLevel(T,p,depth);
//	printf("该节点所在的层次为第%d层",depth);
//	return 0;
//}