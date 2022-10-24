/*
	���ļ����ڴ���һ�����������.
*/
#define _CRT_SECURE_NO_WARNINGS
//#define TYPE char
#define TYPE int
#define TYPEQ biTree*
#define  N 100
#define  MAXSIZE 100
struct biTree {
	TYPE data;
	biTree* lchild;
	biTree* rchild;
	int ltag, rtag;
};
struct Squeue {
	TYPEQ* arr;
	int front, rear;
};
#include <stdio.h>
#include <stdlib.h>

biTree* create(biTree* T, int type) {//�������ǲ������򴴽�һ�Ŷ�������typeΪ�ڵ����ͣ�0����int 1����char
	TYPE data;
	printf("�����뵱ǰ�ڵ�ֵ��data=");
	type ? scanf("%rNode", &data) : scanf("%d", &data);
	getchar();//��ȡ�ո��
	if (data != '#' && data != -1) {
		T = (biTree*)malloc(sizeof(biTree));
		T->data = data;
		T->lchild = NULL;
		T->rchild = NULL;
		T->ltag = 0;
		T->rtag = 0;
		T->lchild = create(T->lchild, type);
		T->rchild = create(T->rchild, type);
	}
	return T;
}
biTree* createInFile() {//���ļ��ж�ȡ���������ݣ�ע���ļ����ݴ洢Ϊ ÿһ�� �� ���� �Һ���
	FILE* fp;
	int root, lNode, rNode;//���߷ֱ��Ӧ�ĵ���һ���е�ֵ�����������Һ���
	biTree* T = (biTree*)malloc(sizeof(biTree));
	T->lchild = NULL;
	T->rchild = NULL;
	Squeue* createQueue(int);
	bool isEmpty(Squeue * );
	bool enQueue(Squeue*, TYPEQ, int);
	bool isEmpty(Squeue*);
	bool deQueue(Squeue*, TYPEQ*, int);
	biTree* p = T;//����ָ��
	Squeue* sq = createQueue(MAXSIZE);
	fp = fopen("biTree.txt", "r");//���ļ�
	int flag = 0;//�ж��Ƿ��ǵ�һ�β���
	while (3 == fscanf(fp, "%d %d %d", &root, &lNode, &rNode))
	{
		!flag++ ? p->data = root : deQueue(sq, &p, MAXSIZE);//����flag�������ж��Ƿ��Ƕ�ȡ��һ�У���Ϊ��ʱ����������
		biTree* left = (biTree*)malloc(sizeof(biTree));//�������ӽڵ�ָ��
		biTree* right = (biTree*)malloc(sizeof(biTree));//�����Һ��ӽڵ�ָ��
		if (lNode) {//���ֵ��Ϊ��(0����û�к���)���������Ӳ���ֵ
			left->data = lNode;
			p->lchild = left;//���Ӻ���
		}
		else {//����ֱ�ӽ�������Ϊ��
			p->lchild = NULL;
		}
		if (rNode) {//���ֵ��Ϊ�㣬�����Һ��Ӻ��Ӳ���ֵ
			right->data = rNode;
			p->rchild = right;
		}
		else {//����ֱ�ӽ��Һ�����Ϊ��
			p->rchild = NULL;
		}
		//�����Һ�����ӣ������´β���
		if (p->lchild)enQueue(sq, p->lchild, MAXSIZE);//�������
		if (p->rchild)enQueue(sq, p->rchild, MAXSIZE);//�������
	}
	while (!isEmpty(sq)) {//��ʣ��ڵ�����Һ�����Ϊ��
		deQueue(sq, &p, MAXSIZE);//ȡ�����׽ڵ�
		p->lchild = NULL;
		p->rchild = NULL;
	}
	fclose(fp);
	return T;
}
//����ݹ����
void inOrder(biTree* T) {
	if (T != NULL) {
		inOrder(T->lchild);
		printf("%d ", T->data);
		inOrder(T->rchild);
	}
}
//����ݹ����
void preOrder(biTree* T) {
	if (T != NULL) {
		printf("%d ", T->data);
		preOrder(T->lchild);
		preOrder(T->rchild);
	}
}
//����ݹ����
void postOrder(biTree* T) {
	if (T != NULL) {
		postOrder(T->lchild);
		postOrder(T->rchild);
		printf("%d ", T->data);
	}
}
//ͳ�ƽڵ����
void nodeNum(biTree* T, int* num) {
	if (T != NULL) {
		(*num)++;//ע������++�����ȼ�����*��Ҫ��������
		nodeNum(T->lchild, num);
		nodeNum(T->rchild, num);
	}
}
//int main() {
//	biTree* T;
//	T = createInFile();
//	preOrder(T);
//	return 0;
//}