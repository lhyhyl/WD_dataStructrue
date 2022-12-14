///*
//	假设二叉树采取二叉链表存储结构存储，试设计一个算法，计算一颗给定的二叉树所有的双分支节点个数
//	分析：
//		其实二叉树各类操作都十分适合递归，这里我们同样可以采取递归的做法来进行统计双分支节点的个数。具体做法，我们
//		最开始便定义一个静态变量，递归出口既是无左右孩子。
//*/
//#include <stdio.h>
//#include <stdlib.h>
// #include "biTreeStruct.h"//通过头文件加载二叉树结构体
//int doubleNode(biTree *T) {
//	static int num = 0;//注意这里一定要使用静态变量，不然每一次进入递归都会初始化num
//	if (!T)num = 0;
//	if (T->lchild&&T->rchild) {
//		num++;
//		doubleNode(T->lchild);
//		doubleNode(T->rchild);
//	}
//	else {
//		if (T->lchild)doubleNode(T->lchild);
//		if (T->rchild)doubleNode(T->rchild);
//	}
//	return num;
//}
//int main() {
//	int num;
//	biTree *T = (biTree*)malloc(sizeof(biTree));
//	biTree *create(biTree *,int);
//	T = create(T,1);//创建一颗二叉树，1代表节点类型为char
//	num = doubleNode(T);
//	printf("该二叉树中的双分支节点个数有：%d",num);
//	return 0;
//}
/*

B站：北街lhy
配套视频链接：
https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
*/