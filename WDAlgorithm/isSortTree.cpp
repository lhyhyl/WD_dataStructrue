///*
//	��дһ���㷨�жϸ����Ķ������Ƿ��Ƕ���������
//	������
//		�������������ص���ǣ����ڵ��ֵ���������󣬱�������С�����ǿ���ÿ�η���һ���ڵ�ʱ���ֱ��ҵ��������������ֵ����������
//		��Сֵ�����С�����������ֵ��������������Сֵ������жϸ������Ƕ�����������
//*/
// struct biTree {//���Ľṹ��
//	 char data;
//	 biTree* lchild;
//	 biTree* rchild;
// };
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//int getMax(biTree *T) {
//	if (T) {
//		static int max = T->data;
//		if (T->lchild&&max < T->lchild->data) {
//			max = T->lchild->data;
//		}
//		if (T->rchild&&max < T->rchild->data) {
//			max = T->rchild->data;
//		}
//		getMax(T->lchild);
//		getMax(T->rchild);
//		return max;
//	}
//	return -1;
//}
//int getMin(biTree *T) {
//	if (T) {
//		static int min = T->data;
//		if (T->lchild&&min > T->lchild->data) {
//			min = T->lchild->data;
//		}
//		if (T->rchild&&min > T->rchild->data) {
//			min = T->rchild->data;
//		}
//		getMin(T->lchild);
//		getMin(T->rchild);
//		return min;
//	}
//	return 9999;
//}
//bool isSort(biTree *T) {
//	if (!T || !T->lchild && !T->rchild) {//������ֻ�и��ڵ��Ƕ���������
//		return true;
//	}
//	if (T->data < getMax(T->lchild)) {//�����ǰ�ڵ�С�����������ڵ㣬���Ƕ���������
//		return false;
//	}
//	if (T->data > getMin(T->rchild)) {//�����ǰ�ڵ������������С�ڵ㣬���Ƕ���������
//		return false;
//	}
//	return isSort(T->lchild)&& isSort(T->rchild);//�ж�������//�ж�������
//}
//int main() {
//	biTree* create(biTree*,int);
//	biTree *T = (biTree*)malloc(sizeof(biTree));
//	T = create(T,0);
//	isSort(T) ? printf("�Ƕ���������"): printf("���Ƕ���������");
//	return 0;
//}