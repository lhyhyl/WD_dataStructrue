///*
//	��дһ���㷨�жϸ����Ķ������Ƿ��Ƕ���������
//	������
//		�����������������������������У����ǿ��Ը�����һ�����������ж�
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include "biTreeStruct.h"//ͨ��ͷ�ļ����ض������ṹ��
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
//	T = create(T,0);
//	isSortTree(T) ? printf("�Ƕ���������") : printf("���Ƕ���������");
//	return 0;
//}
/*

Bվ������lhy
������Ƶ���ӣ�
https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
*/