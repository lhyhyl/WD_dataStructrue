///*
//	���õݹ�ķ�ʽ��������ĸ߶�
//*/
//struct biTree {
//	char data;
//	biTree *lchild, *rchild;
//};
//#include <stdio.h>
//#include <stdlib.h>
//int getHigh(biTree *T) {
//	if (!T)return 0;
//	int lDepth = getHigh(T->lchild);
//	int rDepth = getHigh(T->rchild);
//	int depth = lDepth > rDepth ? lDepth+1 : rDepth+1;
//	return depth;
//
//}
//int main() {
//	biTree *T = (biTree *)malloc(sizeof(biTree));
//	biTree *create(biTree *,int);
//	T = create(T,1);
//	printf("%d",getHigh(T));
//
//	return 0;
//}