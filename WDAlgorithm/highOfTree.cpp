///*
//	以孩子兄弟链表为存储结构，请设计递归算法求树的高度
//	分析：
//		如果只有根节点，那么高度为1，如果有左孩子，那么高度由左孩子的左子树和右子树决定，取其大者。
//*/
//typedef struct node {
//	char data;
//	node *fch, *nsib;
//}Tree;
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//Tree *create(Tree *T) {//先序创建一颗二叉树
//	char data;
//	printf("请输入当前节点值：data=");
//	scanf("%c", &data);
//	getchar();
//	if (data != '#') {
//		T = (Tree *)malloc(sizeof(Tree));
//		T->data = data;
//		T->fch = NULL;
//		T->nsib = NULL;
//		T->fch = create(T->fch);
//		T->nsib = create(T->nsib);
//	}
//	return T;
//}
//int getHigh(Tree *T) {
//	int lhigh, rhigh;
//	if (!T) {//空返回当前高度，这是递归的出口
//		return 0;
//	}
//	else {
//		lhigh = getHigh(T->fch);//记录左子树高度
//		rhigh = getHigh(T->nsib);//记录右兄弟的高度，注意这里high不能再加一，因为他们是兄弟，平级
//		if (lhigh + 1 > rhigh) {
//			return lhigh + 1;
//		}
//		else {
//			return rhigh;
//		}
//	}
//}
//int main() {
//	Tree *T = (Tree *)malloc(sizeof(Tree *));
//	T = create(T);
//	int high = 0;
//	high = getHigh(T);
//	printf("树的高度为：%d", high);
//	return 0;
//}
/*

B站：北街lhy
配套视频链接：
https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
*/