///*
//	��д���ǵݹ�ĺ�������㷨
//	������
//		�ǵݹ�ĺ��������������������ԣ���΢����һ�㣬����������Ҫһֱ�Ӹ��ڵ�����Ѱ�����Ӳ���ջ��֮�����ջ��Ԫ�أ�
//		���ж��Ƿ����Һ��ӣ�������Һ�����ջ���������������ң�ֱ��ĳ�ڵ�Ϊ���ڵ㣬��ջ�����ʡ���Ҫע�������Ϊ�п���һ���ڵ�����
//		����ʶ�Σ�������������һ��ָ��r������ʾ��һ�α����ʹ��ýڵ�
//
//
//
//*/
//#include <stdio.h>
//#include <stdlib.h>
//#include "biTreeStruct.h"//ͨ��ͷ�ļ����ض������ṹ��
//#include "stackStruct.h"//ͨ��ͷ�ļ�����ջ�ṹ��
//void postOrder(biTree *T, Stack *s) {//�������
//	biTree *p = T;
//	biTree *r = (biTree*)malloc(sizeof(biTree));
//	bool empty(Stack *);
//	bool push(Stack *, biTree *);
//	biTree *top(Stack *);
//	bool pop(Stack *);
//	while (p || !empty(s)) {
//		if (p) {//һ·����
//			push(s, p);
//			p = p->lchild;
//		}
//		else {
//			p = top(s);
//			if (p->rchild&&r != p->rchild) {
//				p = p->rchild;
//			}
//			else {
//				printf("%c ", p->data);//��ӡջ��Ԫ��
//				r = p;
//				pop(s);//ջ��Ԫ�س�ջ
//				p = NULL;//����һ��Ҫ��p��ΪNULL����Ϊp�ĺ����Ѿ��������ˣ�������ΪNUll�Ļ����ֻὫ����ѹ��ջ
//			}
//
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
//	postOrder(T, s);
//	return 0;
//}
///*
//
//Bվ������lhy
//������Ƶ���ӣ�
//https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
//*/