///*
//	��֪�������Զ�������洢����д�㷨��ɣ���������ÿһ��Ԫ��ֵΪx�Ľ�㣬ɾ������Ϊ�������������ͷ���Ӧ�Ŀռ�
//	������
//		��Ϊ����Ҫɾ����Ѱ�ҵ���Ԫ��Ϊ������������������ɾ��ʱӦ���õݹ�����������ɾ���ͷţ�Ѱ��x�����������
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include "biTreeStruct.h"//ͨ��ͷ�ļ����ض������ṹ��
//
//void del(biTree *T) {//�ͷŽ�㺯��
//	if (T) {
//		if (T->lchild)del(T->lchild);
//		if (T->rchild)del(T->rchild);
//		free(T);
//	}
//
//}
//void delXsub(biTree *T, int x) {
//	biTree *p = T;//��������һ�����ڵ�ָ�룬��Ϊfreeֻ���ͷ����ڽڵ���������ݣ��������ÿ�
//	if (p->lchild && p->lchild->data == x) {
//		del(p->lchild);//ɾ��������
//		p->lchild = NULL;//�ڵ���Ϊ��
//	}
//	if (p->rchild && p->rchild->data == x) {
//		del(p->rchild);//ɾ��������
//		p->rchild = NULL;//�ڵ���Ϊ��
//	}
//	if (p->lchild) delXsub(p->lchild, x);
//	if (p->rchild) delXsub(p->rchild, x);
//
//
//}
//int main() {
//	char x;
//	biTree *T = (biTree*)malloc(sizeof(biTree));
//	biTree *create(biTree *,int);
//	void inOrder(biTree *);
//	T = create(T,1);//����һ�Ŷ�����
//	printf("������Ҫɾ����xֵ��x=");
//	scanf("%c", &x);
//	if (T->data == x) {
//		del(T);
//	}
//	else {
//		delXsub(T, x);
//	}
//	inOrder(T);
//	return 0;
//}
/*

Bվ������lhy
������Ƶ���ӣ�
https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
*/