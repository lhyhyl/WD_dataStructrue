///*
//	������������ö��������洢�ṹ�����һ���ǵݹ��㷨��������ĸ߶�
//	������
//		��Ҫ���÷ǵݹ�ķ�ʽ����ö������ĸ߶ȣ����ǲ��ò�α���������ʵģ���Ϊ��һ��һ��Ĳ��ͺܺ��������������ʵ�֣�
//		����Ψһ���ѵ������������ε�֪�߶ȸü�һ�ˣ����ǿ�������һ����־num������¼ÿһ����ջ�Ľڵ�����������ǳ�ջ��
//		�ﵽ����ֵʱҲ����ζ�����ǵĸ߶ȸü�һ��
//*/
//struct biTree {
//	char data;
//	biTree *lchild;
//	biTree *rchild;
//};
//struct Squeue {
//	biTree *arr;
//	int front, rear;
//};
//
//#include <stdio.h>
//#include <stdlib.h>
//
//int getHigh(biTree *T,Squeue *sq,int maxSize) {
//	int curNum=0,nextNum=0,high=0;//��¼һ���ж��ٽڵ�
//	biTree *p = T;
//	biTree *r=(biTree *)malloc(sizeof(biTree));
//	bool enQueue(Squeue *, biTree *, int );
//	bool isEmpty(Squeue *);
//	bool deQueue(Squeue *, biTree **, int);
//
//	enQueue(sq,p,maxSize);//�����ڵ����
//	curNum++;//��ʱ������ֻ��һ���ڵ�
//
//	while (!isEmpty(sq)) {
//		deQueue(sq,&r,maxSize);//ȡ������Ԫ��
//		if (r->lchild) {
//			nextNum++;//��һ��Ľڵ���+1
//			enQueue(sq, r->lchild, maxSize);//���ڵ����
//		}
//		if (r->rchild) {
//			nextNum++;//��һ��Ľڵ���+1
//			enQueue(sq, r->rchild, maxSize);//���ڵ����
//		}
//		if (!--curNum) {//���һ���Ԫ����ȡ�꣬�߶�+1
//			high++;
//			curNum = nextNum;//��curNum=0ʱ������һ��Ľڵ���������
//			nextNum = 0;//��һ��ڵ����
//		}
//		
//	}
//	return high;
//}
//int main() {
//	int count=0;
//	//����������������
//	biTree *T=(biTree *)malloc(sizeof(biTree));
//	Squeue *sq;
//	biTree *create(biTree *,int);
//	void nodeNum(biTree *,int *);
//	Squeue *createQueue(int);
//	T = create(T,1);
//	nodeNum(T,&count);
//	sq = createQueue(count);//����һ����СΪ���ڵ�����Ķ���
//
//	printf("�ö������ĸ߶�Ϊ��%d",getHigh(T, sq, count));
//	return 0;
//}