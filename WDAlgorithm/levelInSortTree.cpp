///*
//	���һ���㷨�����ָ���ڵ��ڸ��������������еĲ��
//	������
//		���ǿ��Ը��ݶ��������������ʣ��Ӹ��ڵ�һֱ���²��ң�ÿ����һ�Σ���α��һ
//*/
// struct biTree {//���Ľṹ��
//	 char data;
//	 biTree* lchild;
//	 biTree* rchild;
// };
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//
//void findLevel(biTree *T, int p,int &depth) {
//	if (T) {
//		if (T->data < p) {
//			depth++;
//			findLevel(T->rchild, p,depth);
//		}
//		else if(T->data > p){
//			depth++;
//			findLevel(T->lchild, p,depth);
//		}
//	}
//}
//int main() {
//	//����һ�Ŷ���������
//	biTree* create(biTree*,int);
//	biTree *T = (biTree *)malloc(sizeof(biTree));
//	T = create(T,1);
//	int p = 7,depth=0;//�ֶ�ָ���ڵ�ֵ
//	findLevel(T,p,depth);
//	printf("�ýڵ����ڵĲ��Ϊ��%d��",depth);
//	return 0;
//}