///*
//	�ڶ������в���ֵΪx�Ľڵ㣬�Ա�д�㷨��ӡֵΪx�Ľڵ���������ȣ�����x��ֵ������һ����
//	������
//		�������ǲ��ú���������ǵݹ飩����Ϊ����������x֮ǰ���ǻ���������Ƚڵ�ȫ����ջ���������ҵ�xʱ��������ȡ��ջ��Ԫ��
//*/
//
//#include <stdio.h>
//#include <stdlib.h>
//#include "biTreeStruct.h"//ͨ��ͷ�ļ����ض������ṹ��
//#include "stackStruct.h"//ͨ��ͷ�ļ�����ջ�ṹ��
//
//void findAllAncestor(biTree *T, Stack *s, char x) {
//	biTree *p = T;
//	biTree *r = (biTree *)malloc(sizeof(biTree));
//	biTree *tp = (biTree *)malloc(sizeof(biTree));
//
//	bool push(Stack *, biTree*);
//	bool pop(Stack *);
//	biTree *top(Stack *);//���ص���һ��ָ��
//	bool empty(Stack *);
//	while (p || !empty(s)) {
//		if (p) {//һ·������������ջ
//			push(s, p);
//			p = p->lchild;
//		}
//		else {//û�����ӣ�
//			p = top(s);
//			if (p->rchild && p->rchild != r) {//��������������δ�����ʣ�����������������������ջ
//				p = p->rchild;
//			}
//			else {//����û������Ҳû���Һ���ʱ���ó�ջ��
//				pop(s);//������Ԫ���ȳ�ջ
//				if (p->data == x) {//�ҵ��ˣ���ô���ջ����Ԫ�أ���ȫ������������
//					printf("����Ԫ����:");
//					while (!empty(s)) {
//						tp = top(s);
//						printf("%c ", tp->data);
//						pop(s);
//					}
//
//				}
//				r = p;
//				p = NULL;//һ��Ҫ��p�ÿգ���Ȼ�ֻ��p��������ջ
//			}
//		}
//
//
//	}
//}
//int main() {
//	int count = 0, x;
//	biTree *T = (biTree *)malloc(sizeof(struct biTree));
//	struct Stack *s;
//
//	biTree *create(biTree *,int);
//	void nodeNum(biTree *, int *);
//
//	Stack *createStack(int);
//
//	T = create(T,1);
//	nodeNum(T, &count);
//	s = createStack(count);
//	printf("������Ҫ���ҵ�Ԫ�أ�x=");
//	x = getchar();
//	findAllAncestor(T, s, x);
//	return 0;
//}
/*

Bվ������lhy
������Ƶ���ӣ�
https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
*/