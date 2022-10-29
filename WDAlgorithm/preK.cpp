///*
//	假设二叉树是用二叉链表存储，试设计一个算法,求先序遍历中第k（1<=k<=二叉树的节点个数）个节点的值
//	分析：
//		很简单，每遍历一个节点，计数器便加一，直至等于k
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include "biTreeStruct.h"//通过头文件加载二叉树结构体
//biTree *preK(biTree *T, int k) {
//	static int num = 0;
//	static biTree *r;
//	if (!T) return NULL;
//	if (++num == k) {//找到后，记录下来
//		r = T;
//	}
//	else {
//		preK(T->lchild, k);
//		preK(T->rchild, k);
//	}
//
//	return r;
//}
//int main() {
//	int k, count = 0;
//	biTree *T = (biTree*)malloc(sizeof(biTree));
//	T->lchild = NULL;
//	T->rchild = NULL;
//	T->data = NULL;
//	biTree *r;
//	biTree *create(biTree *,int);
//	void inOrder(biTree *);
//	void nodeNum(biTree *, int *);
//	T = create(T,1);//创建一颗二叉树
//	nodeNum(T, &count);
//	if (!count) {
//		printf("该二叉树是空树");
//	}
//	else {
//		printf("请输入要寻找的k值（1<=k<=%d）：k=", count);
//		scanf("%d", &k);
//		while (k<1 || k>count) {
//			printf("输入有误，请重输 k=");
//			scanf("%d", &k);
//		}
//		r = preK(T, k);
//		printf("第%d个节点值为%c", k, r->data);
//	}
//
//	return 0;
//}
/*

B站：北街lhy
配套视频链接：
https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
*/