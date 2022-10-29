/*
	该文件用于创建一颗链表二叉树.
*/
#define _CRT_SECURE_NO_WARNINGS
#define  N 100
#define  MAXSIZE 100
//#define  SQTYPE biTree*
#include <stdio.h>
#include <stdlib.h>
#include "biTreeStruct.h"//通过头文件加载二叉树结构体
#include "queueStruct.h"//通过头文件加载队列结构体
biTree* create(biTree* T, int type) {//这里我们采用先序创建一颗二叉树，type为节点类型：0代表int 1代表char
	BTYPE data;
	type ? printf("请输入当前节点值(char)：data="):printf("请输入当前节点值(int)：data=");
	type ? scanf("%c", &data) : scanf("%d", &data);
	getchar();//读取空格键
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
//biTree* createInFile() {//从文件中读取二叉树数据，注：文件数据存储为 每一行 根 左孩子 右孩子
//	FILE* fp;
//	int root, lNode, rNode;//三者分别对应文档中一行中的值，即根和左右孩子
//	biTree* T = (biTree*)malloc(sizeof(biTree));
//	T->lchild = NULL;
//	T->rchild = NULL;
//	Squeue* createQueue(int);
//	bool isEmpty(Squeue * );
//	bool enQueue(Squeue*, biTree*, int);
//	bool isEmpty(Squeue*);
//	bool deQueue(Squeue*, biTree**, int);
//	biTree* p = T;//工作指针
//	Squeue* sq = createQueue(MAXSIZE);
//	fp = fopen("biTree.txt", "r");//打开文件
//	int flag = 0;//判断是否是第一次操作
//	while (3 == fscanf(fp, "%d %d %d", &root, &lNode, &rNode))
//	{
//		!flag++ ? p->data = root : deQueue(sq, &p, MAXSIZE);//利用flag，进而判断是否是读取第一行，因为此时队列无数据
//		biTree* left = (biTree*)malloc(sizeof(biTree));//创建左孩子节点指针
//		biTree* right = (biTree*)malloc(sizeof(biTree));//创建右孩子节点指针
//		if (lNode) {//如果值不为零(0代表没有孩子)，创建左孩子并赋值
//			left->data = lNode;
//			p->lchild = left;//连接孩子
//		}
//		else {//否则直接将左孩子置为空
//			p->lchild = NULL;
//		}
//		if (rNode) {//如果值不为零，创建右孩子孩子并赋值
//			right->data = rNode;
//			p->rchild = right;
//		}
//		else {//否则直接将右孩子置为空
//			p->rchild = NULL;
//		}
//		//把左右孩子入队，方便下次操作
//		if (p->lchild)enQueue(sq, p->lchild, MAXSIZE);//左孩子入队
//		if (p->rchild)enQueue(sq, p->rchild, MAXSIZE);//左孩子入队
//	}
//	while (!isEmpty(sq)) {//将剩余节点的左右孩子置为空
//		deQueue(sq, &p, MAXSIZE);//取出队首节点
//		p->lchild = NULL;
//		p->rchild = NULL;
//	}
//	fclose(fp);
//	return T;
//}
//中序递归遍历
void inOrder(biTree* T) {
	if (T != NULL) {
		inOrder(T->lchild);
		sizeof(BTYPE)==1?printf("%c ", T->data):printf("%d ",T->data);
		inOrder(T->rchild);
	}
}
//先序递归遍历
void preOrder(biTree* T) {
	if (T != NULL) {
		sizeof(BTYPE) == 1 ? printf("%c ", T->data) : printf("%d ", T->data);
		preOrder(T->lchild);
		preOrder(T->rchild);
	}
}
//后序递归遍历
void postOrder(biTree* T) {
	if (T != NULL) {
		postOrder(T->lchild);
		postOrder(T->rchild);
		sizeof(BTYPE) == 1 ? printf("%c ", T->data) : printf("%d ", T->data);
	}
}
//统计节点个数
void nodeNum(biTree* T, int* num) {
	if (T != NULL) {
		(*num)++;//注意这里++的优先级高于*，要加上括号
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
/*

B站：北街lhy
配套视频链接：
https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
*/