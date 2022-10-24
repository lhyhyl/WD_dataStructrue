///*
//	prim算法在用邻接矩阵方式存储的图中的实现
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#define MAXSIZE 100 //数组最大值
//#include <stdio.h>
//#include <stdlib.h>
//struct AMGraph {
//	int Vertex[MAXSIZE];
//	int Edge[MAXSIZE][MAXSIZE];
//	int numV, numE;//顶点、边数量
//};
//
//int getSum(AMGraph *G, int *prims) {//获得最小生成树的权值
//	int sum = 0;
//	for (int i = 1; i < G->numV; i++) {
//		int min = 32767;
//		for (int j = 0; j < i; j++) {
//			if (G->Edge[prims[j]][prims[i]] < min) {
//				min = G->Edge[prims[j]][prims[i]];//疯了，把prims[j]写成了j，害我调试了好久！！！
//			}
//		}
//		sum += min;
//	}
//	return sum;
//}
//void prim(AMGraph *G, int start) {
//	int prims[MAXSIZE];//存储最小生成树结果数组
//	int lowCost[MAXSIZE];//当前已加入最小生成树的邻接顶点的边的权值
//	int min, record, index = 0;//定义最小值变量，
//	lowCost[start] = 0;//自己到自己的距离为0
//	prims[index++] = start;
//	int m = 0;
//	while (m<G->numV) {
//		lowCost[m] = G->Edge[start][m];
//		m++;
//	}
//    //	for (int i = 0; i < G->numV; i++) {
//	//	  lowCost[i] = G->Edge[start][i];//把当前传入顶点的所有连接顶点的边的权值存入
//	//}
//	for (int i = 1; i < G->numV; i++) {//进行遍历，遍历一次加入一个顶点
//		min = 32767;
//		for (int j = 0; j < G->numV; j++) {
//			if (lowCost[j] != 0 && lowCost[j] < min) {//如果当前顶点未曾加入最小树中且小于目前最小值，更新
//				min = lowCost[j];
//				record = j;//记录顶点信息
//			}
//
//		}
//		//已找到最小值,更新prims数组
//		prims[index++] = record;
//		lowCost[record] = 0;//将第record个顶点置为已访问，即代表它已加入最小生成树
//		//如有顶点未处理，则看情况需更新lowCost数组
//		for (int j = 0; j < G->numV; j++) {
//			if (lowCost[j] && G->Edge[record][j] < lowCost[j]) {
//				lowCost[j] = G->Edge[record][j];
//				/*
//					对于这里的理解，为什么要替换？然后为什么可以这样替换？
//					首先回答第一个：因为普里姆算法是每次根据我们加入的点去寻找目前可纳入的最小边，
//									所以我们每加入一个顶点都要进行判断，加入的顶点是否让某些顶点的
//									可达距离变短
//					第二个问题：    我们每次确定一个顶点，也就意味着一条边也确定了下来，所以此时新加入顶点
//									到其余顶点的距离若小于之前的距离，则需要进行更换
//									比如这里的 1 2 3，当1 3 确定，1 3 边的权值为1，我们的目标是让最后的权值
//									最小，我们知道之前1到2权值为6，总权值就为1 + 6 = 7，而此时3 到 2仅为5 
//									小于 6，所以要进行更新替换。
//				*/
//			}
//		}
//
//	}
//	printf("%d ", getSum(G, prims));
//	for (int i = 0; i < G->numV; i++) {
//		printf("%c ", G->Vertex[prims[i]]);
//	}
//}
//void prim2(AMGraph* G, int start) {
//	int flag[MAXSIZE];//标记数组
//	int lowCost[MAXSIZE];//当前已加入最小生成树的邻接顶点的边的权值
//	int prims[MAXSIZE];//存储最小生成树结果数组
//	int record,index=0;
//	for (int i = 0; i < G->numV; i++) {
//		lowCost[i] = G->Edge[start][i];//初始化start到各顶点的距离
//		prims[i] = 0;//初始化
//		flag[i] = 0;
//	}
//	flag[start] = 1;//传入的顶点设为已访问
//	prims[index++] = start;
//	for (int i = 1; i < G->numV; i++) {//因为源点已加入集合，则共进行G->numV-1次循环
//		int min = 32767;
//		//找目前能到达的权值最小顶点
//		for (int j = 0; j < G->numV; j++) {
//			if (!flag[j] && lowCost[j] < min) {//lowCost不为0代表未访问过
//				min = lowCost[j];
//				record = j;
//			}
//		}
//		flag[record] = 1;
//		prims[index++] = record;//一旦发生更换将m处的值设为record，代表由record处的顶点指向m处的顶点目前最近，即record是m的前驱
//		//当我们加入新顶点时，我们要判断加入新顶点后是否路径会缩短，如果有这种情况，就要更新lowCost
//		for (int m = 0; m < G->numV; m++) {
//			if (!flag[m] && lowCost[m] > G->Edge[record][m]) {//当前 记录的从源点到record的距离 大于 加入record后的距离，进行更新！！
//				lowCost[m] = G->Edge[record][m] ;
//			}
//		}
//	}
//	printf("%d ", getSum(G, prims));
//	for (int i = 0; i < G->numV; i++) {
//		printf("%c ", G->Vertex[prims[i]]);
//	}
//}
//int main() {
//	void createGraphFromFile(AMGraph *);
//	void dispGraph(AMGraph *G);
//	//AMGraph *G=(AMGraph*)malloc(sizeof(AMGraph));
//	AMGraph G;
//	createGraphFromFile(&G);
//	dispGraph(&G);
//	prim2(&G, 0);
//	return 0;
//}