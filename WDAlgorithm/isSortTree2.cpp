///*
//	��дһ���㷨�жϸ����Ķ������Ƿ��Ƕ���������
//	������
//		�����������������������������У����ǿ��Ը�����һ�����������ж�
//*/
//struct biTree {//���Ľṹ��
//	char data;
//	biTree* lchild;
//	biTree* rchild;
//};
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//bool isSortTree(biTree *T) {
//	static int min = -32768;//�ʼ�趨minΪ��Сֵ��ȷ����һ���ڵ��ܹ�������ȥ
//	static bool flag = true;//��Ϊ�Ƿ�������ı�ǣ����þ�̬��������Ȼÿ�ζ����ʼ��
//	if (T) {
//		isSortTree(T->lchild);
//		if (T->data < min)
//			flag = false;
//		else
//			min = T->data;//min 1
//		isSortTree(T->rchild);
//	}
//	return flag;
//}
//int main() {
//	//�ȴ���һ�Ŷ�����
//	biTree* create(biTree*,int);
//	biTree *T = (biTree *)malloc(sizeof(biTree));
//	T = create(T,1);
//	isSortTree(T) ? printf("�Ƕ���������") : printf("���Ƕ���������");
//	return 0;
//}