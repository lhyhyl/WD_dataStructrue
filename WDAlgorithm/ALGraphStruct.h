#pragma once
#define MAXSIZE 100
//�ڽӱ�����Ϣ��������Ҫ����Ϊ���ͻ��ַ���
#define ALTYPE int
//#define ALTYPE char
//�ڽӱ�
struct EdgeNode {//�߱���
	int index;//�ñ���ָ��Ķ����λ��,�ڶ������������λ����Ϣ
	int weight;//Ȩֵ
	EdgeNode* next;//��һ���ڽӱ�
};

struct VertexNode {//�����ڵ�
	ALTYPE info;//������Ϣ
	EdgeNode* firstEdge;//ָ���һ�������ö���ıߵ�ָ��
};

struct ALGraph {
	VertexNode adjlist[MAXSIZE];//��������
	int numE, numV;//������������
};