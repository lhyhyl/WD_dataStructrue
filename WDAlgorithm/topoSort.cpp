///*
//	拓扑排序：
//			每次将入度为0的顶点输出，输出的同时将出边删除，直至所有顶点输出
//*/
//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//#include <stdlib.h>
//#include "ALGraphStruct.h"//通过头文件加载邻接表结构体
//#include "stackStruct.h"//通过头文件加载栈结构体
//void inDegree(ALGraph *G,int *indegree) {//统计每个顶点的入度，用数组保存
//	int k;
//	for (int i = 0; i < G->numV;i++) {
//		k = 0;
//		for (int j = 0; j < G->numV;j++) {
//			/*if (i==j) {
//				continue;
//			}*/
//			for (EdgeNode *p = G->adjlist[j].firstEdge; p;p=p->next) {
//				if (p->index == i)
//					indegree[i] = ++k;
//			}
//		}
//
//	}
//}
//void topoSort(ALGraph *G) {
//	Stack *s = (Stack*)malloc(sizeof(Stack));
//	Stack *createStack(int );
//	bool push(Stack *, int data);
//	bool empty(Stack *);
//	int top(Stack *);
//	bool pop(Stack *);
//	int *indegree = (int *)malloc(sizeof(int )*G->numV);
//	for (int i = 0; i < G->numV;i++) {
//		indegree[i] = 0;
//	}
//	int index;
//	inDegree(G,indegree);
//	s=createStack(G->numV);
//	for (int i = 0; i < G->numV;i++) {//将入度为0的顶点入栈
//		if (indegree[i]==0) {
//			push(s,i);
//		}
//	}
//	while (!empty(s)) {//栈不空，输出栈顶
//		index = top(s);//查看栈顶元素
//		printf("%c ", G->adjlist[index].info);//打印
//		pop(s);//出栈
//		for (EdgeNode *p = G->adjlist[index].firstEdge; p; p = p->next) {//将当前出栈的顶点所指向的顶点的入度均-1
//			indegree[p->index]--;
//			if (!indegree[p->index]) {//出现了入度为0，入栈
//				push(s,p->index);
//			}
//		}
//
//	}
//}
//int main() {
//	ALGraph *G = (ALGraph *)malloc(sizeof(ALGraph));
//	void createGraphInFile(ALGraph *);
//	void dispGraph(ALGraph *);
//	createGraphInFile(G);//创建图
//	dispGraph(G);
//	topoSort(G);
//	return 0;
//}
/*

B站：北街lhy
配套视频链接：
https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
*/