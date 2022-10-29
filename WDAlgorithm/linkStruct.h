#pragma once
#include "biTreeStruct.h"

//链表节点数据类型  根据需要可设为整型、字符型或树类型
//#define LINKNODE int
#define LINKNODE char
//#define LINKNODE biTree*
//双链表
struct DLink {
	int data;//双链表用的较少，先默认为整型
	DLink* next;
	DLink* pre;
};
//单链表
struct Link {
	LINKNODE data;
	Link* next;
}; 
