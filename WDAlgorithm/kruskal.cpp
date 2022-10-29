///*
//	kruskal 算法：每次选择最短的一条边加入集合，直至所有顶点被包含，而且会用到并查集
//*/
//#include<stdio.h>
//#include <stdlib.h>
//#include "ALGraphStruct.h"//通过头文件加载邻接表结构体
//
//void outPut(ALGraph *G, int **weights) {//输出最小生成树
//	for (int i = 0; i < G->numV; i++) {
//		for (int j = i; j < G->numV; j++) {
//			if (weights[i][j] != 0) {
//				printf("%c->%c(%d)\n", G->adjlist[i].info, G->adjlist[j].info, weights[i][j]);
//			}
//		}
//	}
//}
//int findAnster(int *fa, int i) {
//	if (fa[i] == i)return i;//找到返回
//	else {
//		fa[i] = findAnster(fa, fa[i]);//进行路径压缩,即将i处的元素设置为最终的祖先
//		return fa[i];//未找到继续
//	}
//}
//void unionn(int *fa, int i, int j) {
//	int i_a = findAnster(fa, i);
//	int j_a = findAnster(fa, j);
//	fa[i_a] = j_a;//i的祖先指向j的祖先
//}
//void kruskal(ALGraph *G) {
//	int **weights = (int **)malloc(sizeof(int *)*G->numV);//两点间的权值数据
//	int *fa = (int *)malloc(sizeof(int)*G->numV);//并查集数组
//	for (int i = 0; i < G->numV; i++) {
//		fa[i] = i;//最开始将每个节点的祖先设置为自己
//	}
//	for (int i = 0; i < G->numV; i++) {
//		weights[i] = (int *)malloc(sizeof(int)*G->numV);
//	}
//	for (int i = 0; i < G->numV; i++) {
//		for (int j = 0; j < G->numV; j++) {
//			weights[i][j] = 0;//初始化该二位数组
//		}
//	}
//	int edges = 0;
//	while (edges < G->numV - 1) {
//		int weight = 32767;
//		int start, end;
//		for (int i = 0; i < G->numV; i++) {//遍历每一个顶点的所有边
//			for (EdgeNode *p = G->adjlist[i].firstEdge; p; p = p->next) {
//				//寻找最短边
//				if (p->weight < weight && findAnster(fa, i) != findAnster(fa, p->index)) {
//					weight = p->weight;
//					start = i;
//					end = p->index;
//				}
//			}
//		}
//		unionn(fa, start, end);
//		weights[start][end] = weight;
//		weights[end][start] = weight;
//		edges++;
//	}
//	outPut(G, weights);
//
//}
//int main() {
//	ALGraph *G = (ALGraph *)malloc(sizeof(ALGraph));
//	void createGraphInFile(ALGraph *);
//	void dispGraph(ALGraph *);
//	createGraphInFile(G);//创建图
//	dispGraph(G);
//	kruskal(G);
//	return 0;
//}
/*

B站：北街lhy
配套视频链接：
https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
*/