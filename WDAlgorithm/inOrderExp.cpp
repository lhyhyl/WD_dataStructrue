///*
//	�����һ���㷨���������ı��ʽ����ת���ɵȼ۵���׺���ʽ�������
//	������
//		��Ŀ��Ȼ˵������Ҫ��ȡ�����������������ñ��ʽ����ô��Ҫע��ĵ�������ǵ�����������ӣ����и��ڵ㴦��Ҷ�ӽ��
//		������Ҫ������ţ���������ڷ���������ǰ�������ţ����������������������
//*/
//struct biTree {
//	char data;
//	biTree *lchild, *rchild;
//};
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//
//void putInExp(biTree*T,int deep) {
//	if (T==NULL) {
//		return;
//	}
//	if (!T->lchild &&!T->rchild) {//��ΪҶ�ڵ㣬ֱ�����������
//		printf("%c",T->data);
//	}
//	else {
//		if (deep > 1) printf("(");//�Ǹ��ڵ㣬���������
//		putInExp(T->lchild,deep+1);
//		printf("%c",T->data);
//		putInExp(T->rchild, deep + 1);
//		if (deep > 1) printf(")");
//
//	}
//}
//int main() {
//	biTree* create(biTree*,int);
//	biTree *T = (biTree *)malloc(sizeof(biTree));
//	T = create(T,1);
//	printf("��׺���ʽΪ��");
//	putInExp(T,1);
//	return 0;
//}