///*
//	���ö�����������˼���дһ���ж϶������Ƿ��Ƕ���ƽ�������㷨
//	������
//		���ǿ��Բ�ȡ�����������ɸ��㷨����Ϊ����������Ậ���ظ����㡣
//		���Ƕ�ÿһ���ڵ�����жϣ��������������ƽ�������������߶Ȳ�С�ڵ���1����ýڵ�ƽ��
//
//*/
//struct biTree {
//	int data;
//	biTree*left, *right;
//};
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//bool isAVL(biTree*T, int *depth) {
//	if (!T) {//�սڵ㣬Ϊƽ�������
//		*depth = 0;
//		return true;
//	}
//	int left = 0, right = 0;
//	if (isAVL(T->left, &left) && isAVL(T->right, &right)) {//�ж����������Ƿ�Ϊƽ�������
//		int diff = left - right;//���������ĸ߶Ȳ�
//		if (abs(diff) <= 1) {//����С�ڵ���1,�Ǿ���ƽ�������
//			*depth	= (1 + (left > right ? left : right));
//			return true;
//		}
//	}
//	return false;//ǰ��һֱδ����true���ǾͲ���ƽ�������
//}
//int main() {
//	biTree* create(biTree*,int);
//	biTree*T = (biTree*)malloc(sizeof(biTree));
//	T = create(T,1);//����һ�Ŷ�����
//	int depth = 0;
//	isAVL(T, &depth) ? printf("�Ƕ���ƽ����"):printf("���Ƕ���ƽ����");
//	return 0;
//}