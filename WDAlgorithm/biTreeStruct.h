#pragma once
//二叉树节点类型 根据需要可设为整型或字符型
//#define BTYPE int
#define BTYPE char //二叉树节点数据域类型
//二叉树
struct biTree {
	BTYPE data;
	biTree* lchild;
	biTree* rchild;
	int ltag, rtag;
};
