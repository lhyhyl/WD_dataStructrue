///*
//	���һ���㷨����������Ҷ�ڵ㰴�����ҵ�˳������һ����������ͷָ��Ϊhead������������������ʽ�洢������ʱ��Ҷ�ڵ��
//	��ָ������ŵ�����ָ�롣
//	������
//		����Ҫ��Ҷ�ڵ�����������ô��������Ҫ���������ҵ�˳���ҳ�Ҷ�ڵ㣬Ҫ���������ĳ���˳�򣬿��Բ����������򣬺���
//		�������ǲ������������
//*/
//#include <stdio.h>
//#include <stdlib.h>
//#include "biTreeStruct.h"//ͨ��ͷ�ļ����ض������ṹ��
//biTree *h = (biTree *)malloc(sizeof(biTree));//����һ��ͷ���
//biTree *preN = h;
//biTree *leafLink(biTree *b) {//��������b�е�����Ҷ�ӽ��������
//	if (b) {
//		leafLink(b->lchild);//�������������
//		if (!b->lchild && !b->rchild) {//Ҷ�ڵ�
//				preN->rchild = b;
//				preN = b;
//			
//		}
//		leafLink(b->rchild);//�������������
//		preN->rchild = NULL;//��������β
//	}
//	return h;
//}
//int main() {
//	biTree* create(biTree*, int);
//	biTree* T = (biTree*)malloc(sizeof(biTree));
//	T = create(T,1);//����һ�Ŷ�����
//	leafLink(T);
//	while (h->rchild) {
//		printf("%c ", h->rchild->data);
//		h = h->rchild;
//	}
//	return 0;
//}
/*

Bվ������lhy
������Ƶ���ӣ�
https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
*/