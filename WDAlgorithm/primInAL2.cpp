///*
//	prim算法(采用邻接表)：
//		算法核心：
//				根据邻接矩阵改编！！
//*/
//#include <stdio.h>
//#include <stdlib.h>
//#include "ALGraphStruct.h"//通过头文件加载邻接表结构体
//
//int getWeiFromAtoB(ALGraph *G, int a, int b) {//在图中获取a 到 b的距离（权值）
//	for (EdgeNode *p = G->adjlist[a].firstEdge; p; p = p->next) {
//		if (p->index == b) {//有直接连接，返回权值
//			return p->weight;
//		}
//	}
//	return 32767;//若没有直接连接，返回最大值
//}
//int getSum(ALGraph *G, int *prims) {//获得最小生成树的权值
//	int sum = 0;
//	for (int i = 1; i < G->numV; i++) {
//		int min = 32767;
//		for (int j = 0; j < i; j++) {
//			if (getWeiFromAtoB(G, prims[j], prims[i]) < min) {
//				min = getWeiFromAtoB(G, prims[j], prims[i]);
//			}
//		}
//		sum += min;
//	}
//	return sum;
//}
//void primInAL(ALGraph *G, int start) {
//	int prims[MAXSIZE];//存储最小生成树结果数组
//	int lowCost[MAXSIZE];//当前已加入最小生成树的邻接顶点的权值
//	int min, index, primIndex = 0;// min 寻找最小值  index 记录最小值下标 primIndex prim数组下标 
//	for (int i = 0; i < G->numV; i++) {
//		lowCost[i] = 32767;//把所有值设为无穷
//	}
//	for (EdgeNode *p = G->adjlist[start].firstEdge; p; p = p->next) {
//		lowCost[p->index] = p->weight;//把当前传入顶点的所有连接顶点的边的权值存入
//	}
//	lowCost[start] = 0;//自己到自己的距离为0
//	prims[primIndex++] = start;//将源点加入生成树数组
//	for (int i = 0; i < G->numV-1; i++) {//进行顶点数轮的循环，每次循环加入一个顶点
//		min = 32767;
//		for (int j = 0; j < G->numV; j++) {
//			if (lowCost[j] != 0 && lowCost[j] < min) {//如果当前顶点未曾加入最小树中且小于目前最小值，更新
//				min = lowCost[j];
//				index = j;//记录位置
//			}
//
//		}
//		//已找到最小值,更新prims数组
//		prims[primIndex++] = index;
//		lowCost[index] = 0;//将第index个顶点置为已访问，即代表它已加入最小生成树
//		//如有顶点未处理，则看情况需更新lowCost数组
//		EdgeNode* p = G->adjlist[index].firstEdge;//寻找下标为index的顶点可到达的顶点
//		while (p) {
//			if (lowCost[p->index] && p->weight < lowCost[p->index]) {//在index处的旧值大于我们加入新节点后的
//				lowCost[p->index] = p->weight;
//			}
//			p = p->next;
//		}
//		
//	}
//	printf("%d ", getSum(G, prims));
//	for (int i = 0; i < G->numV; i++) {
//		printf("%c ", G->adjlist[prims[i]].info);
//	}
//
//}
//
//int main() {
//	ALGraph *G = (ALGraph *)malloc(sizeof(ALGraph));
//	void createGraphInFile(ALGraph *);
//	void dispGraph(ALGraph *);
//	createGraphInFile(G);//创建图
//	dispGraph(G);
//	primInAL(G, 0);
//	return 0;
//}
/*

B站：北街lhy
配套视频链接：
https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
*/