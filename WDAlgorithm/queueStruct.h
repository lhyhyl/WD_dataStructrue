
//顺序队内节点类型 根据需要设定
#define SQTYPE int //顺序队列队内节点类型
//#define SQTYPE char //顺序队列队内节点类型
//#define SQTYPE biTree*

//链队内节点类型 根据需要设定
//#define LQTYPE biTree*
//#define LQTYPE char
#define LQTYPE int
#include "linkStruct.h"
#include "biTreeStruct.h"
//链队
struct LinkQueue {
	Link* front, * rear;
};
//顺序队列
struct Squeue {
	SQTYPE* arr;
	int front, rear;
};
