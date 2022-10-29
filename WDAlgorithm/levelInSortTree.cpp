///*
//	设计一个算法，求出指定节点在给定二叉排序树中的层次
//	分析：
//		我们可以根据二叉排序树的性质，从根节点一直向下查找，每查找一次，层次便加一
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include "biTreeStruct.h"//通过头文件加载二叉树结构体
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
/*

B站：北街lhy
配套视频链接：
https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
*/