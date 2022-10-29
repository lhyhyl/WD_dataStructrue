///*
//	利用广度优先遍历求解单源最短路径：
//		分析：
//			因为对于广度优先遍历来说，我们每次都是按照距离由近到远来遍历图中的每个顶点，所以我们可以很轻松的
//			求得某顶点到其他顶点的距离
//*/
//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//#include <stdlib.h>
//#include "ALGraphStruct.h"//通过头文件加载邻接表结构体
//#include "queueStruct.h"//通过头文件加载队列结构体
//void BFS_MIN_Distance(ALGraph *G, int v) {
//	Squeue *createQueue(int);
//	bool isEmpty(Squeue *);
//	bool enQueue(Squeue *, int, int);
//	bool deQueue(Squeue *sq, int *data, int maxSize);
//	Squeue *sq;
//	sq = createQueue(G->numV);//创建队列
//	int *d = (int *)malloc(sizeof(int)*G->numV);
//	int tmp;
//	int *visited = (int *)malloc(sizeof(int)*G->numV);//设置标记数组
//	for (int i = 0; i < G->numV; i++) {
//		visited[i] = 0;
//	}
//	for (int i = 0; i < G->numV;i++) {
//		d[i] = 32767;
//	}
//	visited[v] = 1;
//	d[v] = 0;//自己到自己的距离为0
//	enQueue(sq,v,G->numV);//将源点入队
//	while (!isEmpty(sq)) {//若队列不空
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
//	//声明函数
//	void createGraphInFile(ALGraph *);
//	void dispGraph(ALGraph *);
//	//创建图
//	createGraphInFile(graph);
//	//打印图
//	dispGraph(graph);
//	BFS_MIN_Distance(graph, 0);
//	return 0;
//}
/*

B站：北街lhy
配套视频链接：
https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
*/