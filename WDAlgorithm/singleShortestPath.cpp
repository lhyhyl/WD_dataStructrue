///*
//	使用BFS（广度优先）寻找单源最短路径，仅适用于无权图
//	算法思想：
//			我们从所给顶点出发，每遍历一次便会知道离起始顶点距离为加1的顶点，直至找到终末顶点
//*/
//#include <stdio.h>
//#include <stdlib.h>
// #include "queueStruct.h"//通过头文件加载队列结构体
//#include "ALGraphStruct.h"//通过头文件加载邻接表结构体
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
//		result[i] = 32767;//设为无穷
//		visited[i] = 0;
//	}
//	singleShortestPath(G, result, visited, 0);//计算顶点A到各顶点的单源最短路径
//	for (int i = 1; i < G->numV; i++) {
//		printf("%d ", *(result + i));
//	}
//	return 0;
//}
/*

B站：北街lhy
配套视频链接：
https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
*/