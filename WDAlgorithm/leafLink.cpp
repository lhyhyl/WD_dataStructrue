///*
//	���һ���㷨����������Ҷ�ڵ㰴�����ҵ�˳������һ����������ͷָ��Ϊhead������������������ʽ�洢������ʱ��Ҷ�ڵ��
//	��ָ������ŵ�����ָ�롣
//	������
//		����Ҫ��Ҷ�ڵ�����������ô��������Ҫ���������ҵ�˳���ҳ�Ҷ�ڵ㣬Ҫ���������ĳ���˳�򣬿��Բ����������򣬺���
//		�������ǲ������������
//*/
//struct biTree {
//	char data;
//	biTree *lchild;
//	biTree *rchild;
//};
//struct Stack {
//	biTree *arr;
//	int len;
//	int top;
//};
//#include <stdio.h>
//#include <stdlib.h>
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
//	biTree *b = (biTree *)malloc(sizeof(biTree ));
//	biTree *create(biTree *,int);
//	b = create(b,1);//����һ�Ŷ�����
//	leafLink(b);
//	while (h->rchild) {
//		printf("%c ", h->rchild->data);
//		h = h->rchild;
//	}
//	return 0;
//}