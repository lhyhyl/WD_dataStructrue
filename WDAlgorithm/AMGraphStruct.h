#define MAXSIZE 100
//�ڽӾ���ڵ����� ������Ҫ����Ϊ���ͻ��ַ���
#include "basicnodeType.h"

//�ڽӾ���
struct AMGraph {
	BNODETYPE Vertex[MAXSIZE];
	int Edge[MAXSIZE][MAXSIZE];
	int numV, numE;//���㡢������
};