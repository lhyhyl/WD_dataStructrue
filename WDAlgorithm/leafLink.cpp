///*
//	设计一个算法将二叉树的叶节点按从左到右的顺序连成一个单链表，表头指针为head。二叉树按二叉链表方式存储，连接时用叶节点的
//	右指针来存放单链表指针。
//	分析：
//		我们要将叶节点连起来，那么我们首先要按从左至右的顺序找出叶节点，要满足这样的出场顺序，可以采用先序，中序，后序，
//		这里我们采用中序遍历。
//*/
//#include <stdio.h>
//#include <stdlib.h>
//#include "biTreeStruct.h"//通过头文件加载二叉树结构体
//biTree *h = (biTree *)malloc(sizeof(biTree));//创建一个头结点
//biTree *preN = h;
//biTree *leafLink(biTree *b) {//将二叉树b中的所有叶子结点连起来
//	if (b) {
//		leafLink(b->lchild);//中序遍历左子树
//		if (!b->lchild && !b->rchild) {//叶节点
//				preN->rchild = b;
//				preN = b;
//			
//		}
//		leafLink(b->rchild);//中序遍历右子树
//		preN->rchild = NULL;//设置链表尾
//	}
//	return h;
//}
//int main() {
//	biTree* create(biTree*, int);
//	biTree* T = (biTree*)malloc(sizeof(biTree));
//	T = create(T,1);//创建一颗二叉树
//	leafLink(T);
//	while (h->rchild) {
//		printf("%c ", h->rchild->data);
//		h = h->rchild;
//	}
//	return 0;
//}
/*

B站：北街lhy
配套视频链接：
https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
*/