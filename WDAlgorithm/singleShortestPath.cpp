///*
//	ʹ��BFS��������ȣ�Ѱ�ҵ�Դ���·��������������Ȩͼ
//	�㷨˼�룺
//			���Ǵ��������������ÿ����һ�α��֪������ʼ�������Ϊ��1�Ķ��㣬ֱ���ҵ���ĩ����
//*/
//#include <stdio.h>
//#include <stdlib.h>
// #include "queueStruct.h"//ͨ��ͷ�ļ����ض��нṹ��
//#include "ALGraphStruct.h"//ͨ��ͷ�ļ������ڽӱ�ṹ��
//void singleShortestPath(ALGraph *G, int *result, int *visited, int start) {
//	int  data;
//	Squeue *sq;
//	Squeue *createQueue(int);
//	bool enQueue(Squeue *, int, int);
//	bool deQueue(Squeue *, int *, int);
//	bool isEmpty(Squeue *sq);
//	sq = createQueue(G->numV);
//	enQueue(sq, start, G->numV);
//	visited[start] = 1;
//	result[start] = 0;
//	while (!isEmpty(sq)) {
//		deQueue(sq, &data, G->numV);
//		for (EdgeNode *p = G->adjlist[data].firstEdge; p; p = p->next) {
//			if (!visited[p->index]) {
//				result[p->index] = result[data]+1;
//				visited[p->index] = 1;
//				enQueue(sq, p->index, G->numV);
//			}
//		}
//
//	}
//}
//int main() {
//	ALGraph *G = (ALGraph *)malloc(sizeof(ALGraph ));
//
//	void createGraphInFile(ALGraph*);
//	createGraphInFile(G);
//	int *result = (int *)malloc(sizeof(int)*G->numV);
//	int *visited = (int *)malloc(sizeof(int)*G->numV);
//	for (int i = 0; i < G->numV; i++) {
//		result[i] = 32767;//��Ϊ����
//		visited[i] = 0;
//	}
//	singleShortestPath(G, result, visited, 0);//���㶥��A��������ĵ�Դ���·��
//	for (int i = 1; i < G->numV; i++) {
//		printf("%d ", *(result + i));
//	}
//	return 0;
//}
/*

Bվ������lhy
������Ƶ���ӣ�
https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
*/