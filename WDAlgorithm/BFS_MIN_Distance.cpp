///*
//	���ù�����ȱ�����ⵥԴ���·����
//		������
//			��Ϊ���ڹ�����ȱ�����˵������ÿ�ζ��ǰ��վ����ɽ���Զ������ͼ�е�ÿ�����㣬�������ǿ��Ժ����ɵ�
//			���ĳ���㵽��������ľ���
//*/
//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//#include <stdlib.h>
//#include "ALGraphStruct.h"//ͨ��ͷ�ļ������ڽӱ�ṹ��
//#include "queueStruct.h"//ͨ��ͷ�ļ����ض��нṹ��
//void BFS_MIN_Distance(ALGraph *G, int v) {
//	Squeue *createQueue(int);
//	bool isEmpty(Squeue *);
//	bool enQueue(Squeue *, int, int);
//	bool deQueue(Squeue *sq, int *data, int maxSize);
//	Squeue *sq;
//	sq = createQueue(G->numV);//��������
//	int *d = (int *)malloc(sizeof(int)*G->numV);
//	int tmp;
//	int *visited = (int *)malloc(sizeof(int)*G->numV);//���ñ������
//	for (int i = 0; i < G->numV; i++) {
//		visited[i] = 0;
//	}
//	for (int i = 0; i < G->numV;i++) {
//		d[i] = 32767;
//	}
//	visited[v] = 1;
//	d[v] = 0;//�Լ����Լ��ľ���Ϊ0
//	enQueue(sq,v,G->numV);//��Դ�����
//	while (!isEmpty(sq)) {//�����в���
//		deQueue(sq,&tmp,G->numV);
//		for (EdgeNode *w = G->adjlist[tmp].firstEdge; w;w=w->next) {
//			if (!visited[w->index]) {
//				d[w->index] = d[tmp] + 1;
//				enQueue(sq, w->index,G->numV);
//			}
//		}
//	}
//	for (int i = 0; i < G->numV;i++) {
//		printf("%d ",d[i]);
//	}
//}
//int main() {
//	ALGraph *graph = (ALGraph *)malloc(sizeof(ALGraph ));
//	//��������
//	void createGraphInFile(ALGraph *);
//	void dispGraph(ALGraph *);
//	//����ͼ
//	createGraphInFile(graph);
//	//��ӡͼ
//	dispGraph(graph);
//	BFS_MIN_Distance(graph, 0);
//	return 0;
//}
/*

Bվ������lhy
������Ƶ���ӣ�
https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
*/