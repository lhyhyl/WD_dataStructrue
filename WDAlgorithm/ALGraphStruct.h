#pragma once
#define MAXSIZE 100
#include "basicnodeType.h"
//邻接表
struct EdgeNode {//边表结点
	int index;//该边所指向的顶点的位置,在顶点数组里面的位置信息
	int weight;//权值
	EdgeNode* next;//下一个邻接边
};

struct VertexNode {//顶点表节点
	BNODETYPE info;//顶点信息
	EdgeNode* firstEdge;//指向第一条依附该顶点的边的指针
};

struct ALGraph {
	VertexNode adjlist[MAXSIZE];//顶点数组
	int numE, numV;//边数、顶点数
};