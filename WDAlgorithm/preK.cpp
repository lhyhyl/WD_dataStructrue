///*
//	������������ö��������洢�������һ���㷨,����������е�k��1<=k<=�������Ľڵ���������ڵ��ֵ
//	������
//		�ܼ򵥣�ÿ����һ���ڵ㣬���������һ��ֱ������k
//*/
//struct biTree {
//	char data;
//	biTree *lchild;
//	biTree *rchild;
//};
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//biTree *preK(biTree *T, int k) {
//	static int num = 0;
//	static biTree *r;
//	if (!T) return NULL;
//	if (++num == k) {//�ҵ��󣬼�¼����
//		r = T;
//	}
//	else {
//		preK(T->lchild, k);
//		preK(T->rchild, k);
//	}
//
//	return r;
//}
//int main() {
//	int k, count = 0;
//	biTree *T = (biTree*)malloc(sizeof(biTree));
//	T->lchild = NULL;
//	T->rchild = NULL;
//	T->data = NULL;
//	biTree *r;
//	biTree *create(biTree *,int);
//	void inOrder(biTree *);
//	void nodeNum(biTree *, int *);
//	T = create(T,1);//����һ�Ŷ�����
//	nodeNum(T, &count);
//	if (!count) {
//		printf("�ö������ǿ���");
//	}
//	else {
//		printf("������ҪѰ�ҵ�kֵ��1<=k<=%d����k=", count);
//		scanf("%d", &k);
//		while (k<1 || k>count) {
//			printf("�������������� k=");
//			scanf("%d", &k);
//		}
//		r = preK(T, k);
//		printf("��%d���ڵ�ֵΪ%c", k, r->data);
//	}
//
//	return 0;
//}