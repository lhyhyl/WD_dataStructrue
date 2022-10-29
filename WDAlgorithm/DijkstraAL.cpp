///*
//	Dijkstra 算法(图用邻接表实现)：
//				其实该算法和prim算法相似，不同的仅仅是更新那一块
//				我们这里仍然需要用到一个标记数组flag,用于记录顶点是否已被访问，一个路径数组dist，用于记录
//				目前到达各顶点的距离，此外我们还需要一个前置顶点数组prevs，用于存储路径
//
//*/
//#define MAXSIZE 100 //数组最大值
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include "ALGraphStruct.h"//通过头文件加载邻接表结构体
//int getWeiFromAtoB(ALGraph *G, int a, int b) {//在图中获取a 到 b的距离（权值）
//	for (EdgeNode *p = G->adjlist[a].firstEdge; p; p = p->next) {
//		if (p->index == b) {//有直接连接，返回权值
//			return p->weight;
//		}
//	}
//	return 32767;//若没有直接连接，返回最大值
//}
//void dijkstra(ALGraph *G, int start) {
//	int flag[100];//标记数组
//	int dist[100];//可到达顶点的距离数据
//	int prevs[100];//存储每个顶点的前驱，也就是存储路径
//	int k = start;
//	for (int i = 0; i < G->numV; i++) {
//		dist[i] = 32767;//把所有值设为无穷
//	}
//	for (EdgeNode *p = G->adjlist[start].firstEdge; p; p = p->next) {
//		dist[p->index] = p->weight;//把当前传入顶点的所有连接顶点的边的权值存入
//	}
//	for (int i = 0; i < G->numV;i++) {
//		prevs[i] = 0;//初始化
//		flag[i] = 0;
//	}
//	flag[0] = 1;//传入顶点设为已访问
//	for (int i = 1; i < G->numV;i++) {//因为源点已加入集合，则共进行G->numV-1次循环
//		int min = 32767;
//		//找目前能到达的权值最小顶点
//		for (int j = 0; j < G->numV;j++) {
//			if (!flag[j]&&dist[j]<min) {//dist不为0代表未访问过
//				min = dist[j];
//				k = j;
//			}
//		}
//		flag[k]=1;
//		//当我们加入新顶点时，我们要判断加入新顶点后是否路径会缩短，如果有这种情况，就要更新dist
//		for (int m = 0; m < G->numV; m++) {
//			int weight = getWeiFromAtoB(G, k, m);
//			if (!flag[m]&&dist[m]> weight +dist[k]) {//当前 记录的从源点到k的距离 大于 加入k后的距离，进行更新！！
//				dist[m] = weight + dist[k];
//				prevs[m] = k;//一旦发生更换将m处的值设为k，代表由k处的顶点指向m处的顶点目前最近，即k是m的前驱
//			}
//		}
//	}
//	for (int i = 0; i < G->numV;i++) {
//		printf("%c ",G->adjlist[prevs[i]].info);
//	}
//}
//int main() {
//	ALGraph *G = (ALGraph *)malloc(sizeof(ALGraph));
//	void createGraphInFile(ALGraph *);
//	void dispGraph(ALGraph *);
//	createGraphInFile(G);//创建图
//	dispGraph(G);
//	dijkstra(G, 0);
//	return 0;
//}
/*

B站：北街lhy
配套视频链接：
https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
*/