///*
//	��д������������ǵݹ��㷨��
//	������
//		�����������ͬС�죬Ψһ�Ĳ������ÿ���ȷ��ʽڵ㣬���ж���û�����ӣ�������ջ��Ȼ���ջ�������ߡ�ֱ��ջ�ա�
//*/
//#include <stdio.h>
//#include <stdlib.h>
//#include "biTreeStruct.h"//ͨ��ͷ�ļ����ض������ṹ��
//#include "stackStruct.h"//ͨ��ͷ�ļ�����ջ�ṹ��
//void preOrder(biTree *T, Stack *s) {//�������
//	biTree *p = T;
//	bool empty(Stack *);
//	bool push(Stack *, biTree *);
//	biTree *top(Stack *);
//	bool pop(Stack *);
//	while (p || !empty(s)) {
//		if (p) {//һ·����
//			printf("%c ", p->data);//��ӡ��ǰԪ��
//			push(s, p);
//			p = p->lchild;
//		}
//		else {
//			p = top(s);
//			pop(s);//ջ��Ԫ�س�ջ
//			p = p->rchild;//����Ѱ��
//		}
//	}
//}
//int main() {
//	int count = 0;
//	biTree *T = (biTree *)malloc(sizeof(biTree));
//	Stack *s = (Stack*)malloc(sizeof(Stack));
//	biTree *create(biTree*,int);
//	void nodeNum(biTree *, int *);
//	Stack *createStack(int);
//
//	T = create(T,1);
//	nodeNum(T, &count);
//
//	s = createStack(count);//�����������ڵ������С��ջ
//
//	preOrder(T, s);
//	return 0;
//}
/*

Bվ������lhy
������Ƶ���ӣ�
https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
*/