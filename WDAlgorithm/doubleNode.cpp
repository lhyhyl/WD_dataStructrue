///*
//	�����������ȡ��������洢�ṹ�洢�������һ���㷨������һ�Ÿ����Ķ��������е�˫��֧�ڵ����
//	������
//		��ʵ���������������ʮ���ʺϵݹ飬��������ͬ�����Բ�ȡ�ݹ������������ͳ��˫��֧�ڵ�ĸ�������������������
//		�ʼ�㶨��һ����̬�������ݹ���ڼ��������Һ��ӡ�
//*/
//#include <stdio.h>
//#include <stdlib.h>
// #include "biTreeStruct.h"//ͨ��ͷ�ļ����ض������ṹ��
//int doubleNode(biTree *T) {
//	static int num = 0;//ע������һ��Ҫʹ�þ�̬��������Ȼÿһ�ν���ݹ鶼���ʼ��num
//	if (!T)num = 0;
//	if (T->lchild&&T->rchild) {
//		num++;
//		doubleNode(T->lchild);
//		doubleNode(T->rchild);
//	}
//	else {
//		if (T->lchild)doubleNode(T->lchild);
//		if (T->rchild)doubleNode(T->rchild);
//	}
//	return num;
//}
//int main() {
//	int num;
//	biTree *T = (biTree*)malloc(sizeof(biTree));
//	biTree *create(biTree *,int);
//	T = create(T,1);//����һ�Ŷ�������1����ڵ�����Ϊchar
//	num = doubleNode(T);
//	printf("�ö������е�˫��֧�ڵ�����У�%d",num);
//	return 0;
//}
/*

Bվ������lhy
������Ƶ���ӣ�
https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
*/