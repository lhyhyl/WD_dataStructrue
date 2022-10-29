///*
//	设计一个算法判断带头结点的循环双链表是否对称
//	分析：
//		简单分析，我们可以设置两个指针，pre和next，从头结点出发，进行比较，若pre与next所指值不同，则不对称，若pre和next指向了同一个节点
//		则该循环双链表对称
//*/
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdlib.h>
//#include <stdio.h>
//#include "linkStruct.h"//通过自创建头文件引入结构体，ctrl+鼠标左键点击即可查看
//bool isSymmetry(DLink *h) {
//	DLink *pre = h->pre,*next=h->next;
//	while (pre != next) {
//		if (pre->data != next->data)
//			return false;
//		else if (pre->pre != next) {
//			pre = pre->pre;
//			next = next->next;
//		}
//		else {
//			break;
//		}
//	}
//	if(pre == next||pre->pre->data == next->data)
//		return true;
//}
//int main() {
//	DLink *head;
//	DLink *createDouLoopLink();
//	head = createDouLoopLink();
//	isSymmetry(head) ? printf("是循环双链表") : printf("不是循环单链表");
//	return 0;
//}
/*

B站：北街lhy
配套视频链接：
https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
*/