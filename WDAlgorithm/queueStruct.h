
//˳����ڽڵ����� ������Ҫ�趨
#define SQTYPE int //˳����ж��ڽڵ�����
//#define SQTYPE char //˳����ж��ڽڵ�����
//#define SQTYPE biTree*

//�����ڽڵ����� ������Ҫ�趨
//#define LQTYPE biTree*
//#define LQTYPE char
#define LQTYPE int
#include "linkStruct.h"
#include "biTreeStruct.h"
//����
struct LinkQueue {
	Link* front, * rear;
};
//˳�����
struct Squeue {
	SQTYPE* arr;
	int front, rear;
};
