#pragma once
#include "nodeType.h"
//Ë«Á´±í
struct DLink {
	NODETYPE data;
	DLink* next;
	DLink* pre;
};
//µ¥Á´±í
struct Link {
	NODETYPE data;
	Link* next;
}; 