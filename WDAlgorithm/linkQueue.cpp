/*
	���ļ����ڴ���һ����ʽ����
	������
		������Ҫ����һ������Ȼ������front��rearָ�룬����ģ����ӳ��ӵĹ���
*/


#include <stdio.h>
#include <stdlib.h>
#include "linkStruct.h"//ͨ���Դ���ͷ�ļ�����ṹ�壬ctrl+������������ɲ鿴
#include "biTreeStruct.h"//ͨ��ͷ�ļ����ض������ṹ��
#include "queueStruct.h"//ͨ��ͷ�ļ����ض��нṹ��
//����һ��������
Link* createLink() {
	Link *q;
	Link *head = (Link*) malloc(sizeof(Link));
	head->next = NULL;
	q = head;
	return head;
}
//��������
LinkQueue *create() {
	Link *h,*p;
	LinkQueue *lq=(LinkQueue *)malloc(sizeof(LinkQueue));
	h = createLink();
	p = h->next;
	lq->front = lq->rear = h;
	return lq;
}
//�жϿ�
bool isEmpty(LinkQueue *lq) {
	return lq->front == lq->rear;
}
//���
bool enQueue(LinkQueue *lq, NODETYPE data) {//��β����
	Link *newd = (Link *)malloc(sizeof(Link));
	 newd->data = data;
	
	lq->rear->next = newd;
	lq->rear = newd;
	lq->rear->next = NULL;
	return true;
}
//����
bool deQueue(LinkQueue *lq, NODETYPE*data) {
	if (isEmpty(lq))return false;
	Link *p = lq->front->next;//������һ���ڵ�
	*data = lq->front->next->data;//ȡ�����׽ڵ�ֵ
	lq->front->next = p->next;//ɾ�����׽ڵ�
	if (lq->rear==p) {
		lq->rear = lq->front;
	}
	free(p);
	return true;
}
//��ӡ������Ԫ��
void printQ(LinkQueue *lq) {
	Link *p = lq->front->next;
	while (p!=NULL) {
		printf("%c",p->data);
		p = p->next;
	}
};
/*

Bվ������lhy
������Ƶ���ӣ�
https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
*/