///*
//	prim算法(采用邻接表)：
//		算法核心：
//				我们设立一个prim数组，用于存储依次加入的顶点，加入的规则便是从已有顶点中寻找权值
//				最小的邻接点，再设立一个二位数组用于存储两顶点间的权值信息
//*/
//#include <stdio.h>
//#include <stdlib.h>
//#include "ALGraphStruct.h"//通过头文件加载邻接表结构体
//
//void outPut(ALGraph *G,int **weights) {//输出最小生成树
//	for (int i = 0; i < G->numV; i++) {
//		for (int j = i; j < G->numV; j++) {
//			if (weights[i][j]!=0) {
//				printf("%c->%c(%d)\n",G->adjlist[i].info, G->adjlist[j].info,weights[i][j]);
//			}
//		}
//	}
//}
//void prim(ALGraph *G,int start) {
//	int *prims = (int *)malloc(sizeof(int )*G->numV);//创建大小为图顶点个数的数组，用于存储依次加入的顶点
//	int **weights = (int **)malloc(sizeof(int *)*G->numV);//两点间的权值数据
//	for (int i = 0; i < G->numV; i++) {
//		prims[i]=-1;//初始化为-1，代表没有顶点目前加入
//	}
//	for (int i = 0; i < G->numV; i++) {
//		weights[i] = (int *)malloc(sizeof(int)*G->numV);
//	}
//	for (int i = 0; i < G->numV;i++) {
//		for (int j = 0; j < G->numV;j++) {
//			weights[i][j] = 0;//初始化该二位数组
//		}
//	}
//	int weight= 32767;//权值数据
//	int index = 0;
//	int s;//记录当前找到的最小边的起始顶点
//	EdgeNode *r=(EdgeNode *)malloc(sizeof(EdgeNode));//记录当前找到的最小边的终点
//	prims[index++] = start;//先将start加入prims数组
//	while (index != G->numV) {//顶点未全部加入prims数组，继续遍历
//		for (int i = 0; i < index; i++) {//以prims数组中的值为起点找最小边
//			for (EdgeNode *p = G->adjlist[i].firstEdge; p;p=p->next) {
//				if (weight > p->weight && !weights[i][p->index]&&prims[p->index]==-1) {//权值更小，未加入，终点未访问，则符合条件
//					weight = p->weight;
//					r = p;
//					s = i;
//				}
//			}
//		}
//		//找到最短边后，加入prims数组，更新weights数组
//		prims[index++] = r->index;
//		weights[s][r->index] = r->weight;
//		weights[r->index][s] = r->weight;
//		weight = 32767;//重新置为最大值
//	}
//	outPut(G,weights);
//}
//int main() {
//	ALGraph *G = (ALGraph *)malloc(sizeof(ALGraph));
//	void createGraphInFile(ALGraph *);
//	void dispGraph(ALGraph *);
//	createGraphInFile(G);//创建图
//	dispGraph(G);
//	prim(G,0);
//	return 0;
//}
/*

B站：北街lhy
配套视频链接：
https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
*/