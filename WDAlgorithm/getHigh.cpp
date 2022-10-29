///*
//	采用递归的方式求二叉树的高度
//*/
//#include <stdio.h>
//#include <stdlib.h>
// #include "biTreeStruct.h"//通过头文件加载二叉树结构体
//int getHigh(biTree *T) {
//	if (!T)return 0;
//	int lDepth = getHigh(T->lchild);
//	int rDepth = getHigh(T->rchild);
//	int depth = lDepth > rDepth ? lDepth+1 : rDepth+1;
//	return depth;
//
//}
//int main() {
//	biTree *T = (biTree *)malloc(sizeof(biTree));
//	biTree *create(biTree *,int);
//	T = create(T,1);
//	printf("%d",getHigh(T));
//
//	return 0;
//}
/*

B站：北街lhy
配套视频链接：
https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
*/