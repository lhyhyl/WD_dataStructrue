#pragma once
#include "nodeType.h"//�ڵ�����
#include "linkStruct.h"
//����
struct LinkQueue {
	Link* front, * rear;
};


//˳�����
struct Squeue {
	NODETYPE* arr;
	int front, rear;
};
