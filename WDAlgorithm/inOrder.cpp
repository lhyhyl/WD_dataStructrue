///*
//	��д����������ķǵݹ��㷨
//	������
//		������÷ǵݹ飬���Ǿ���Ҫ�õ�ջ������ݽṹ�ˣ���������Ϊ���Ӹ��ڵ�һ·���������Ӳ�������ջֱ������Ϊ��
//		Ȼ�����γ�ջ�����ж��Ƿ�����Һ��ӣ�����У��Һ�����ջ���������������ӣ�����ظ�ֱ��ջ��
//*/
//#include "biTreeStruct.h"//ͨ��ͷ�ļ����ض������ṹ��
//#include "stackStruct.h"//ͨ��ͷ�ļ�����ջ�ṹ��
//#include <stdio.h>
//#include <stdlib.h>
//void inOrder(biTree *T,Stack *s) {//�������
//	biTree *p = T;
//	bool empty(Stack *);
//	bool push(Stack *,biTree * );
//	biTree *top(Stack *);
//	bool pop(Stack *);
//	while (p||!empty(s)) {
//		if (p) {//һ·����
//			push(s,p);
//			p = p->lchild;
//		}
//		else {
//			p = top(s);
//			printf("%c ",p->data);//��ӡջ��Ԫ��
//			pop(s);//ջ��Ԫ�س�ջ
//			p = p->rchild;//����Ѱ��
//		}
//	}
//}
//int main() {
//	int count=0;//���������������ڵ����
//	biTree *T = (biTree *)malloc(sizeof(biTree));
//	Stack *s = (Stack*)malloc(sizeof(Stack));
//	biTree *create(biTree*,int);
//	void nodeNum(biTree *,int *);
//	Stack *createStack(int);
//
//	T = create(T,1);
//	nodeNum(T,&count);
//
//	s = createStack(count);//�����������ڵ������С��ջ
//
//	inOrder(T,s);
//	return 0;
//}
/*

Bվ������lhy
������Ƶ���ӣ�
https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
*/