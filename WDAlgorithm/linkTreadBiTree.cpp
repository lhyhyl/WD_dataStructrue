/*
	���ļ����ڴ�������������������������������������������������������������������
*/

#include <stdio.h>
#include "biTreeStruct.h"
extern biTree* pre = NULL;
void inThread(biTree *p ) {//��������������
	if (p!=NULL) {
		inThread(p->lchild);
		if (p->lchild==NULL) {//���������Ϊ�գ�����ǰ������
			p->lchild = pre;
			p->ltag = 1;
		}
		if (pre!=NULL && pre->rchild==NULL) {//����ǰ�����ĺ������
			pre->rchild = p;
			pre->rtag = 1;
		}
		pre = p;
		inThread(p->rchild);
	}
}
void preThread(biTree *p) {//��������������
	if (p != NULL) {

		if (p->lchild == NULL) {//���������Ϊ�գ�����ǰ������
			p->lchild = pre;
			p->ltag = 1;
		}
		if (pre != NULL && pre->rchild == NULL) {//����ǰ�����ĺ������
			pre->rchild = p;
			pre->rtag = 1;
		}
		pre = p;
		inThread(p->lchild);
		inThread(p->rchild);
	}
}
void postThread(biTree *p) {//��������������
	if (p != NULL) {
		inThread(p->lchild);
		inThread(p->rchild);
		if (p->lchild == NULL) {//���������Ϊ�գ�����ǰ������
			p->lchild = pre;
			p->ltag = 1;
		}
		if (pre != NULL && pre->rchild == NULL) {//����ǰ�����ĺ������
			pre->rchild = p;
			pre->rtag = 1;
		}
		pre = p;
		
	}
}
//pre->rtag = 1;
/*

Bվ������lhy
������Ƶ���ӣ�
https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
*/