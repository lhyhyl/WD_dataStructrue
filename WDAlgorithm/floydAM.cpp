///*
//	floyd算法：
//			我们会设置一个dist数组和path数组，dist数组用于描述i到j的权值，
//			path数组用于描述i到j经过那个顶点
//*/
//#include <stdio.h>
//#include <stdlib.h>
//#include "AMGraphStruct.h"//通过头文件加载邻接矩阵结构体
//
//void floyd(AMGraph *G,int path[][MAXSIZE]) {
//	int i, j, k;
//	int dist[MAXSIZE][MAXSIZE];
//	for (int m = 0; m < G->numV; m++) {
//		for (int n = 0; n < G->numV; n++) {
//			dist[m][n] = G->Edge[m][n];//初始化顶点间距离
//			path[m][n] = -1;//初始化路径
//		}
//	}
//	for (k = 0; k < G->numV; k++) {//依次加入所有的顶点
//		for (i = 0; i < G->numV; i++) {
//			for (j = 0; j < G->numV; j++) {
//				if (dist[i][j] > G->Edge[i][k] + G->Edge[k][j]) {//加入k后有更短的，更新
//					dist[i][j] = G->Edge[i][k] + G->Edge[k][j];//更改dist
//					path[i][j] = k;//path更改
//				}
//			}
//		}
//	}
//	for (int i = 0; i < G->numV; i++)
//	{
//		for (int j = 0; j < G->numV; j++)
//			printf("%2d  ", dist[i][j]);
//		printf("\n");
//	}
//}
//void printPath(int path[][MAXSIZE],int vi,int vj) {
//	if (path[vi][vj]==-1) {//直接输出
//		printf("%d ",vj+1);
//	}
//	else {
//		int mid = path[vi][vj];
//		printPath(path, vi, mid);
//		printPath(path,mid,vj);
//	}
//}
//int main() {
//	void createGraphFromFile(AMGraph *);
//	void dispGraph(AMGraph *);
//	AMGraph *G = (AMGraph *)malloc(sizeof(AMGraph));
//	createGraphFromFile(G);
//	dispGraph(G);
//	int path[MAXSIZE][MAXSIZE];
//	floyd(G,path);
//	printPath(path,0,2);//输入是起点与终点，具体要看你的图是不是从0开始的
//	return 0;
//}
/*

B站：北街lhy
配套视频链接：
https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
*/