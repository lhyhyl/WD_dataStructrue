/*
	此文件用于创建一个链式队列
	分析：
		我们需要创建一个链表，然后设置front、rear指针，用来模拟入队出队的过程
*/


#include <stdio.h>
#include <stdlib.h>
#include "linkStruct.h"//通过自创建头文件引入结构体，ctrl+鼠标左键点击即可查看
#include "biTreeStruct.h"//通过头文件加载二叉树结构体
#include "queueStruct.h"//通过头文件加载队列结构体
//创建一个空链表
Link* createLink() {
	Link *q;
	Link *head = (Link*) malloc(sizeof(Link));
	head->next = NULL;
	q = head;
	return head;
}
//创建链队
LinkQueue *create() {
	Link *h,*p;
	LinkQueue *lq=(LinkQueue *)malloc(sizeof(LinkQueue));
	h = createLink();
	p = h->next;
	lq->front = lq->rear = h;
	return lq;
}
//判断空
bool isEmpty(LinkQueue *lq) {
	return lq->front == lq->rear;
}
//入队
bool enQueue(LinkQueue *lq, NODETYPE data) {//队尾插入
	Link *newd = (Link *)malloc(sizeof(Link));
	 newd->data = data;
	
	lq->rear->next = newd;
	lq->rear = newd;
	lq->rear->next = NULL;
	return true;
}
//出队
bool deQueue(LinkQueue *lq, NODETYPE*data) {
	if (isEmpty(lq))return false;
	Link *p = lq->front->next;//保存下一个节点
	*data = lq->front->next->data;//取出队首节点值
	lq->front->next = p->next;//删除队首节点
	if (lq->rear==p) {
		lq->rear = lq->front;
	}
	free(p);
	return true;
}
//打印队列中元素
void printQ(LinkQueue *lq) {
	Link *p = lq->front->next;
	while (p!=NULL) {
		printf("%c",p->data);
		p = p->next;
	}
};
/*

B站：北街lhy
配套视频链接：
https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
*/