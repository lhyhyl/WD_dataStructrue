#define MAXSIZE 100
//�ڽӾ���ڵ����� ������Ҫ����Ϊ���ͻ��ַ���
//#define AMTYPE char
#define AMTYPE int
//�ڽӾ���
struct AMGraph {
	AMTYPE Vertex[MAXSIZE];
	int Edge[MAXSIZE][MAXSIZE];
	int numV, numE;//���㡢������
};