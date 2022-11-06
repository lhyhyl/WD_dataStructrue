#pragma once
#include "nodeType.h"//节点类型
#include "linkStruct.h"
//链队
struct LinkQueue {
	Link* front, * rear;
};


//顺序队列
struct Squeue {
	NODETYPE* arr;
	int front, rear;
};
