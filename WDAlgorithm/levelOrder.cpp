///*
//	试写出层次遍历的算法
//	分析：
//		正如名字所表现的那样，要一层一层的遍历，这里我们就需要用到队列这种数据结构了，具体做法是：
//		先将根节点入队，然后根节点出队，并依次将根节点的左孩子、右孩子入队。后续如此循环，直至队空
//*/
//#include <stdio.h>
//#include <stdlib.h>
//#include "biTreeStruct.h"//通过头文件加载二叉树结构体
//#include "queueStruct.h"//通过头文件加载队列结构体
//void levelOrder(biTree *T,Squeue *sq,int maxSize) {
//	biTree *p = T;//工作指针
//	biTree *r = ( biTree *)malloc(sizeof( biTree));//暂存指针
//	bool enQueue(Squeue *, biTree *, int);
//	bool isEmpty(Squeue *);
//	bool deQueue(Squeue *, biTree **,int);
//	enQueue(sq,p,maxSize);//根节点入队
//	while (!isEmpty(sq)) {
//		deQueue(sq,&r,maxSize);
//		printf("%c ",r->data);
//		if(r->lchild)enQueue(sq, r->lchild, maxSize);
//		if (r->rchild)enQueue(sq, r->rchild, maxSize);
//	}
//}
//int main() {
//	int count = 0;
//	biTree *T = ( biTree *)malloc(sizeof( biTree));
//	Squeue *sq = ( Squeue *)malloc(sizeof( Squeue));
//	biTree *create(biTree *,int);
//	void nodeNum(biTree *,int *);
//
//	Squeue *createQueue(int);
//	T = create(T,1);//创建一颗二叉树
//	nodeNum(T,&count);//统计二叉树节点个数
//	sq = createQueue(count);
//
//	levelOrder(T,sq,count);
//	return 0;
//}
/*

B站：北街lhy
配套视频链接：
https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
*/