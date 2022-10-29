///*
//	试编写一个算法将一颗二叉树的所有节点的左右子树进行交换。
//	分析：
//		我们仍然可以采用递归的方式进行交换
//*/
//
//#include <stdio.h>
//#include <stdlib.h>
// #include "biTreeStruct.h"//通过头文件加载二叉树结构体
//void swapTree(biTree *T) {//其本质就是从叶子节点开始进行交换，一路推进到根节点
//	biTree *p = T,*t;
//	if (!p) return;
//	if (!p->lchild&&!p->rchild) {//如果没有左右孩子，就不需要交换了，直接返回
//		return;
//	}
//	else {
//		swapTree(p->lchild);//交换左子树
//		swapTree(p->rchild);//交换右子树   这里不能采取中序遍历
//		t = p->lchild;
//		p->lchild = p->rchild;
//		p->rchild = t;
//	}
//}
//int main() {
//	int num;
//	biTree *T = (biTree*)malloc(sizeof(biTree));
//	biTree *create(biTree *,int);
//	void inOrder(biTree *);
//	T = create(T,1);//创建一颗二叉树
//	inOrder(T);
//	printf("\n");
//	swapTree(T);
//	inOrder(T);
//	return 0;
//}
/*

B站：北街lhy
配套视频链接：
https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
*/