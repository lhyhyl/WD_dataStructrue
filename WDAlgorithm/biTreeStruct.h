#pragma once
//二叉树节点类型 根据需要可设为整型或字符型
#include "basicNodeType.h"
//二叉树
struct biTree {
	BNODETYPE data;
	biTree* lchild;
	biTree* rchild;
	int ltag, rtag;
};
