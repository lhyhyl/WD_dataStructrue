///*
//	�Ա�дһ���㷨��һ�Ŷ����������нڵ�������������н�����
//	������
//		������Ȼ���Բ��õݹ�ķ�ʽ���н���
//*/
//
//#include <stdio.h>
//#include <stdlib.h>
// #include "biTreeStruct.h"//ͨ��ͷ�ļ����ض������ṹ��
//void swapTree(biTree *T) {//�䱾�ʾ��Ǵ�Ҷ�ӽڵ㿪ʼ���н�����һ·�ƽ������ڵ�
//	biTree *p = T,*t;
//	if (!p) return;
//	if (!p->lchild&&!p->rchild) {//���û�����Һ��ӣ��Ͳ���Ҫ�����ˣ�ֱ�ӷ���
//		return;
//	}
//	else {
//		swapTree(p->lchild);//����������
//		swapTree(p->rchild);//����������   ���ﲻ�ܲ�ȡ�������
//		t = p->lchild;
//		p->lchild = p->rchild;
//		p->rchild = t;
//	}
//}
//int main() {
//	int num;
//	biTree *T = (biTree*)malloc(sizeof(biTree));
//	biTree *create(biTree *,int);
//	void inOrder(biTree *);
//	T = create(T,1);//����һ�Ŷ�����
//	inOrder(T);
//	printf("\n");
//	swapTree(T);
//	inOrder(T);
//	return 0;
//}
/*

Bվ������lhy
������Ƶ���ӣ�
https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
*/