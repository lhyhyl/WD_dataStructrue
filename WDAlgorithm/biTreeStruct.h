#pragma once
//�������ڵ����� ������Ҫ����Ϊ���ͻ��ַ���
//#define BTYPE int
#define BTYPE char //�������ڵ�����������
//������
struct biTree {
	BTYPE data;
	biTree* lchild;
	biTree* rchild;
	int ltag, rtag;
};
