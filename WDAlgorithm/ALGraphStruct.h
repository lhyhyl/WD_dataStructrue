#pragma once
#define MAXSIZE 100
#include "basicnodeType.h"
//�ڽӱ�
struct EdgeNode {//�߱���
	int index;//�ñ���ָ��Ķ����λ��,�ڶ������������λ����Ϣ
	int weight;//Ȩֵ
	EdgeNode* next;//��һ���ڽӱ�
};

struct VertexNode {//�����ڵ�
	BNODETYPE info;//������Ϣ
	EdgeNode* firstEdge;//ָ���һ�������ö���ıߵ�ָ��
};

struct ALGraph {
	VertexNode adjlist[MAXSIZE];//��������
	int numE, numV;//������������
};