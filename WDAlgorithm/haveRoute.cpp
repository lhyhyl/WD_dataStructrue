///*
//	分别采用深度优先遍历和广度优先遍历判断是否存在由vi到vj的路径，图用邻接表存储
//	分析：
//		采用深度优先：我们从vi顶点开始进行深度遍历，若若存在路径则必然可以走到vj顶点处；
//		采用广度优先：同样从vi顶点开始进行广度遍历，若存在则必然可以走到vj顶点处。
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include "queueStruct.h"//通过头文件加载队列结构体
//#include "ALGraphStruct.h"//通过头文件加载邻接表结构体
//void DFS(ALGraph *G, int vi, int vj, int *visited, int &flag) {
//	for (EdgeNode *p = G->adjlist[vi].firstEdge; p; p = p->next) {
//		if (!visited[p->index]) {
//			visited[p->index] = 1;
//			if (p->index == vj) {//此时找到终止顶点
//				flag = 1;
//			}
//			DFS(G, p->index, vj, visited, flag);
//		}
//	}
//
//}
//bool judgeRouteInDFS(ALGraph *G, int vi, int vj) {//传入图G，路线端点vi vj
//	int *visited = (int *)malloc(sizeof(int)*G->numV);
//	int flag = 0;//进入递归，路径存在标志
//	for (int i = 0; i < G->numV; i++) {
//		visited[i] = 0;//初始化
//	}
//	if (!visited[vi]) {
//		visited[vi] = 1;
//		DFS(G, vi, vj, visited, flag);
//	}
//	if (flag) {
//		return 1;
//
//	}
//	else {
//		return 0;
//	}
//
//}
//
//bool judgeRouteInBFS(ALGraph *G, int vi, int vj) {
//	int *visited = (int *)malloc(sizeof(int)*G->numV);
//	int flag = 0;//进入递归，路径存在标志
//	int index;//进行判断用
//	for (int i = 0; i < G->numV; i++) {
//		visited[i] = 0;//初始化
//	}
//	bool isEmpty(LinkQueue *lq);
//	bool enQueue(LinkQueue *, int);
//	bool deQueue(LinkQueue *, int*);
//	LinkQueue *create();//声明创建队列的方法。广度优先遍历需要用到队列
//	LinkQueue *lq;
//	lq = create();
//	if (!visited[vi]) {
//		visited[vi] = 1;
//		enQueue(lq, vi);//入队
//	}
//	while (!isEmpty(lq)) {//当队列不空，取出队首元素进行判断
//		deQueue(lq, &index);
//		if (!visited[index]) {//若未曾访问过，进行判断
//			visited[index] = 1;
//			if (vj == index) {
//				flag = 1;
//			}
//		}
//		for (EdgeNode *p = G->adjlist[index].firstEdge; p; p = p->next) {
//			if (!visited[p->index]) {
//				enQueue(lq, p->index);//把所有的未访问过得邻接顶点入队
//
//			}
//		}
//	}
//	return flag;
//}
//int main() {
//	int haveRoute;
//	void createGraphInFile(ALGraph *);
//	ALGraph *G = (ALGraph *)malloc(sizeof(ALGraph *));
//	createGraphInFile(G);//创建图
//	int vi, vj;
//	printf("请输入vi，vj\n");
//	printf("vi= ");
//	scanf("%d", &vi);
//	printf("vj= ");
//	scanf("%d", &vj);
//	while (vi > G->numV || vj > G->numV) {
//		printf("输入有误，不存在该顶点，请重新输入！");
//		printf("vi= ");
//		scanf("%d", &vi);
//		printf("vj= ");
//		scanf("%d", &vj);
//	}
//	//haveRoute = judgeRouteInBFS(G, vi - 1, vj - 1);
//	haveRoute = judgeRouteInDFS(G, vi - 1, vj - 1);
//	if (haveRoute) {
//		printf("顶点%d到顶点%d存在路径", vi, vj);
//	}
//	else {
//		printf("%d到%d不存在路径", vi, vj);
//	}
//	return 0;
//}
///*
//
//B站：北街lhy
//配套视频链接：
//https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
//*/