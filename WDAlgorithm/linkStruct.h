#pragma once
#include "nodeType.h"
//˫����
struct DLink {
	NODETYPE data;
	DLink* next;
	DLink* pre;
};
//������
struct Link {
	NODETYPE data;
	Link* next;
}; 