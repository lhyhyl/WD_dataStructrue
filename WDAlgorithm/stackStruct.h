#pragma once
//ջ�ڽڵ����� ������Ҫ�趨
#define STYPE int //ջ�нڵ�����
//#define STYPE char //ջ�нڵ�����
//#define STYPE biTree* //ջ�нڵ�����
#include "biTreeStruct.h"
//ջ
struct Stack{
	STYPE* arr;	//�ڴ��׵�ַ
	int  len;	//ջ������
	int top; 	//ջ���±�
};
