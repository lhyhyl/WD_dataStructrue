#pragma once
//�������ڵ����� ������Ҫ����Ϊ���ͻ��ַ���
#include "basicNodeType.h"
//������
struct biTree {
	BNODETYPE data;
	biTree* lchild;
	biTree* rchild;
	int ltag, rtag;
};
