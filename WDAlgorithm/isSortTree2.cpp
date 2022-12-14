///*
//	编写一个算法判断给定的二叉树是否是二叉排序树
//	分析：
//		二叉排序树的中序序列是升序序列，我们可以根据这一特性来进行判定
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include "biTreeStruct.h"//通过头文件加载二叉树结构体
//
//bool isSortTree(biTree *T) {
//	static int min = -32768;//最开始设定min为最小值，确保第一个节点能够进行下去
//	static bool flag = true;//作为是否是升序的标记，采用静态变量，不然每次都会初始化
//	if (T) {
//		isSortTree(T->lchild);
//		if (T->data < min)
//			flag = false;
//		else
//			min = T->data;//min 1
//		isSortTree(T->rchild);
//	}
//	return flag;
//}
//int main() {
//	//先创建一颗二叉树
//	biTree* create(biTree*,int);
//	biTree *T = (biTree *)malloc(sizeof(biTree));
//	T = create(T,0);
//	isSortTree(T) ? printf("是二叉排序树") : printf("不是二叉排序树");
//	return 0;
//}
/*

B站：北街lhy
配套视频链接：
https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
*/