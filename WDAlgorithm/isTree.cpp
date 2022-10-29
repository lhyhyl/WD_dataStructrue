///*
//	设计一个算法，判断一个无向图是否是一棵树
//	分析：
//		我们知道，是树的前提，首先该无向图必须是连通的，且边数不能过多，只能是n-1条边。
//		那么我们可以通过深度优先遍历来统计该无向图的边数与顶点数，符合条件则为一棵树
//*/
//#include <stdio.h>
//#include <stdlib.h>
//#include "ALGraphStruct.h"//通过头文件加载邻接表结构体
//
//void DFS(ALGraph *G, int *visited, int &numV, int &numE, int index) {
//	visited[index] = 1;//标记为已访问
//	numV++;//顶点数加一
//	for (EdgeNode* p = G->adjlist[index].firstEdge; p; p = p->next) {
//		numE++;
//		if (!visited[p->index]) {
//			DFS(G, visited, numV, numE, p->index);
//		}
//	}
//}
//bool isTree(ALGraph *G) {
//	int numV = 0, numE = 0;//统计边和顶点
//	int *visited = (int*)malloc(sizeof(int)*G->numV);
//	for (int i = 0; i < G->numV; i++) {
//		*(visited + i) = 0;//标记数组初始化
//	}
//	DFS(G, visited, numV, numE, 0);//只进行一次遍历
//	if (numV == G->numV&&numE == 2*(G->numV - 1)) {
//		return true;
//	}
//	else {
//		return false;
//	}
//}
//int main() {
//	ALGraph *G = (ALGraph *)malloc(sizeof(ALGraph));
//	bool Tree;
//	void createGraphInFile(ALGraph *);
//	//void createGraph(ALGraph *);
//	//createGraph(G);
//	createGraphInFile(G);//创建图
//
//	void dispGraph(ALGraph *G);
//	dispGraph(G);
//	Tree = isTree(G);
//	if (Tree) {
//		printf("这是一棵树");
//	}
//	else {
//		printf("这不是一棵树");
//
//	}
//	return 0;
//}
/*

B站：北街lhy
配套视频链接：
https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
*/