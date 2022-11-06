///*
//	试写出非递归的后序遍历算法
//	分析：
//		非递归的后续遍历较中序和先序而言，稍微复杂一点，首先我们需要一直从根节点往下寻找左孩子并入栈，之后访问栈顶元素，
//		并判断是否有右孩子，如果有右孩子入栈，并继续往左孩子找，直到某节点为单节点，出栈并访问。需要注意的是因为有可能一个节点我们
//		会访问多次，所以我们设置一个指针r用来表示上一次被访问过得节点
//
//
//
//*/
//#include <stdio.h>
//#include <stdlib.h>
//#include "biTreeStruct.h"//通过头文件加载二叉树结构体
//#include "stackStruct.h"//通过头文件加载栈结构体
//void postOrder(biTree *T, Stack *s) {//后序遍历
//	biTree *p = T;
//	biTree *r = (biTree*)malloc(sizeof(biTree));
//	bool empty(Stack *);
//	bool push(Stack *, biTree *);
//	biTree *top(Stack *);
//	bool pop(Stack *);
//	while (p || !empty(s)) {
//		if (p) {//一路向左
//			push(s, p);
//			p = p->lchild;
//		}
//		else {
//			p = top(s);
//			if (p->rchild&&r != p->rchild) {
//				p = p->rchild;
//			}
//			else {
//				printf("%c ", p->data);//打印栈顶元素
//				r = p;
//				pop(s);//栈顶元素出栈
//				p = NULL;//这里一定要将p设为NULL，因为p的孩子已经遍历过了，不设置为NUll的话，又会将左孩子压入栈
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
//	s = createStack(count);//创建二叉树节点个数大小的栈
//
//	postOrder(T, s);
//	return 0;
//}
///*
//
//B站：北街lhy
//配套视频链接：
//https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
//*/