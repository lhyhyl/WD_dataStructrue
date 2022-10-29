#pragma once
//栈内节点类型 根据需要设定
#define STYPE int //栈中节点类型
//#define STYPE char //栈中节点类型
//#define STYPE biTree* //栈中节点类型
#include "biTreeStruct.h"
//栈
struct Stack{
	STYPE* arr;	//内存首地址
	int  len;	//栈的容量
	int top; 	//栈的下标
};
