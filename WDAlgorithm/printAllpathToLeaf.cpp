///*
//	编写算法打印从根节点到所有叶子结点的路径
//	算法思想：利用递归和栈，采取深度优先遍历，遇到叶子结点时就打印栈中元素
//*/
//
//
//#include <stdio.h>
//#include <stdlib.h>
//#include "biTreeStruct.h"//通过头文件加载二叉树结构体
//void printAllpath(biTree *T, char *path, int len) {
//	path[len] = T->data;
//	if (!T->lchild && !T->rchild) {
//		for (int i = 0; i <= len; i++) {
//			printf("%c ", path[i]);//打印路径
//		}
//		printf("\n");
//	}
//	else {
//		if (T->lchild) {
//			printAllpath(T->lchild, path, len + 1);
//		}
//		if (T->rchild) {
//			printAllpath(T->rchild, path, len + 1);
//		}
//
//	}
//}
//int main() {
//	int count = 0;
//	biTree *T = (biTree*)malloc(sizeof(biTree));
//	biTree *create(biTree *,int);
//	T = create(T,1);//创建一颗二叉树
//	char *path = (char*)malloc(sizeof(char) * 10);
//	printAllpath(T, path, 0);
//	return 0;
//}
/*

B站：北街lhy
配套视频链接：
https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
*/