#pragma once
#include "nodeType.h"//节点类型
//栈
struct Stack{
	NODETYPE* arr;	//内存首地址
	int  len;	//栈的容量
	int top; 	//栈的下标
};
