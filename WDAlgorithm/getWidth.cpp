///*
//	������������ö�������洢�ṹ�����һ���㷨����ǿն������Ŀ�ȣ������нڵ���������һ��Ľڵ������
//	������
//		��������߶��ǵ����ͬС�졣������Ȼ���Բ�ȡ��α�����ͳ��ÿһ��Ľڵ�������ҵ����������һ�㡣
//*/
//#include <stdio.h>
//#include <stdlib.h>
//#include "biTreeStruct.h"//ͨ��ͷ�ļ����ض������ṹ��
//#include "queueStruct.h"//ͨ��ͷ�ļ����ض��нṹ��
//int getWidth(biTree *b, LinkQueue *lq) {
//	int oldNum = 0, curNum = 0, width = 0;
//	bool enQueue(LinkQueue *lq, biTree *node);
//	bool deQueue(LinkQueue *lq, biTree **node);
//	bool isEmpty(LinkQueue *lq);
//	biTree *p = b;
//	biTree *r=(biTree*)malloc(sizeof(biTree));
//	if (p) {
//		enQueue(lq, p);//���
//		oldNum++;
//		width = 1;
//		while (!isEmpty(lq)) {
//			while (oldNum--) {
//				deQueue(lq, &r);//����Ԫ�س���
//				if (r->lchild) {//�������ӣ����������
//					enQueue(lq, r->lchild);
//					curNum++;//��ǰ����Ԫ�ؼ�1
//				}
//				if (r->rchild) {//�����Һ��ӣ����Һ������
//					enQueue(lq, r->rchild);
//					curNum++;//��ǰ����Ԫ�ؼ�1
//				}
//			}
//			curNum > width ? width = curNum : NULL;//�����ǰ����Ԫ�ض���֮ǰ�ģ���ȱ��
//			oldNum = curNum;//�������в���
//			curNum = 0;
//
//		}
//
//	}
//	return width;
//}
//int main() {
//	biTree *b = (biTree*)malloc(sizeof(biTree));
//	LinkQueue *lq;
//
//	biTree *create(biTree *,int);
//	b = create(b,1);//����һ�Ŷ�����
//
//	LinkQueue *create();
//	lq = create();//������ʽ����
//
//	printf("�ö������Ŀ��Ϊ��%d",getWidth(b, lq));
//	return 0;
//}
///*
//
//Bվ������lhy
//������Ƶ���ӣ�
//https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
//*/