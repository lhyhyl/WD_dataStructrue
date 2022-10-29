///*
//	假设二叉树采用二叉链表存储结构，设计一个非递归算法求二叉树的高度
//	分析：
//		若要采用非递归的方式来求得二叉树的高度，我们采用层次遍历是最合适的，因为这一层一层的不就很好数吗哈哈。具体实现：
//		这里唯一的难点就在于我们如何得知高度该加一了；我们可以设置一个标志num用来记录每一层入栈的节点个数，当我们出栈数
//		达到该数值时也就意味着我们的高度该加一了
//*/
//#include <stdio.h>
//#include <stdlib.h>
//#include "biTreeStruct.h"//通过头文件加载二叉树结构体
//#include "queueStruct.h"//通过头文件加载队列结构体
//int getHigh(biTree *T,Squeue *sq,int maxSize) {
//	int curNum=0,nextNum=0,high=0;//记录一层有多少节点
//	biTree *p = T;
//	biTree *r=(biTree *)malloc(sizeof(biTree));
//	bool enQueue(Squeue *, biTree *, int );
//	bool isEmpty(Squeue *);
//	bool deQueue(Squeue *, biTree **, int);
//
//	enQueue(sq,p,maxSize);//将根节点入队
//	curNum++;//此时队列中只有一个节点
//
//	while (!isEmpty(sq)) {
//		deQueue(sq,&r,maxSize);//取出队首元素
//		if (r->lchild) {
//			nextNum++;//下一层的节点数+1
//			enQueue(sq, r->lchild, maxSize);//将节点入队
//		}
//		if (r->rchild) {
//			nextNum++;//下一层的节点数+1
//			enQueue(sq, r->rchild, maxSize);//将节点入队
//		}
//		if (!--curNum) {//如果一层的元素已取完，高度+1
//			high++;
//			curNum = nextNum;//当curNum=0时，将下一层的节点数赋给它
//			nextNum = 0;//下一层节点归零
//		}
//		
//	}
//	return high;
//}
//int main() {
//	int count=0;
//	//创建二叉树、队列
//	biTree *T=(biTree *)malloc(sizeof(biTree));
//	Squeue *sq;
//	biTree *create(biTree *,int);
//	void nodeNum(biTree *,int *);
//	Squeue *createQueue(int);
//	T = create(T,1);
//	nodeNum(T,&count);
//	sq = createQueue(count);//创建一个大小为树节点个数的队列
//
//	printf("该二叉树的高度为：%d",getHigh(T, sq, count));
//	return 0;
//}
/*

B站：北街lhy
配套视频链接：
https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
*/