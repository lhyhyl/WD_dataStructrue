///*
//	��д����α������㷨
//	������
//		�������������ֵ�������Ҫһ��һ��ı������������Ǿ���Ҫ�õ������������ݽṹ�ˣ����������ǣ�
//		�Ƚ����ڵ���ӣ�Ȼ����ڵ���ӣ������ν����ڵ�����ӡ��Һ�����ӡ��������ѭ����ֱ���ӿ�
//*/
//#include <stdio.h>
//#include <stdlib.h>
//#include "biTreeStruct.h"//ͨ��ͷ�ļ����ض������ṹ��
//#include "queueStruct.h"//ͨ��ͷ�ļ����ض��нṹ��
//void levelOrder(biTree *T,Squeue *sq,int maxSize) {
//	biTree *p = T;//����ָ��
//	biTree *r = ( biTree *)malloc(sizeof( biTree));//�ݴ�ָ��
//	bool enQueue(Squeue *, biTree *, int);
//	bool isEmpty(Squeue *);
//	bool deQueue(Squeue *, biTree **,int);
//	enQueue(sq,p,maxSize);//���ڵ����
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
//	T = create(T,1);//����һ�Ŷ�����
//	nodeNum(T,&count);//ͳ�ƶ������ڵ����
//	sq = createQueue(count);
//
//	levelOrder(T,sq,count);
//	return 0;
//}
/*

Bվ������lhy
������Ƶ���ӣ�
https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
*/