#pragma once
#include "biTreeStruct.h"

//����ڵ���������  ������Ҫ����Ϊ���͡��ַ��ͻ�������
//#define LINKNODE int
#define LINKNODE char
//#define LINKNODE biTree*
//˫����
struct DLink {
	int data;//˫�����õĽ��٣���Ĭ��Ϊ����
	DLink* next;
	DLink* pre;
};
//������
struct Link {
	LINKNODE data;
	Link* next;
}; 
