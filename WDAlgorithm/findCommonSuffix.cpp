///*
//	存在这样一种情况，如果两个单词有相同的后缀，那我们可以将后缀作为公共部分存储，比如being和loading，其中ing就可以作为
//	公共部分，现在存在两个链表，含有公共部分，设计一个高效算法找到其公共后缀真实位置。
//	分析：
//		我们可以这样想，如果我们单纯的让两条链表的指针同步移动，那么只有两条链表长度相同时才可能在公共部分的起始位置相遇，
//		所以我们应该让他们处于同一起跑线上，故而我们应该让较长的链表先走，具体走多少，应该是走过两条链表的长度之差。
//
//*/
//
//
//#include <stdio.h>
//#include <stdlib.h>
//#include "linkStruct.h"//通过自创建头文件引入结构体，ctrl+鼠标左键点击即可查看
//Link *findCommonSuffix(Link *h1,Link *h2) {
//	Link *p = h1->next, *q = h2->next;
//	int countP =0, countQ = 0,gap;
//	while (p) {//遍历，获取链表长度
//		countP++;
//		p = p->next;
//	}
//	while (q) {
//		countQ++;
//		q = q->next;
//	}
//	if (countQ>countP) {//让p指针始终指向较长的那条链表
//		p = h2->next;
//		q = h1->next;
//		gap = countQ - countP;
//	}
//	else {
//		p = h1->next;
//		q = h2->next;
//		gap = countP - countQ;
//	}
//	while (gap--) p = p->next;//长链表指针先行移动gap位
//	while (q != p && q != NULL) {//当两指针不同或不为NULL时继续向后移动
//		q = q->next;
//		p = p->next;
//	}
//	return p;
//	
//}
//int main() {
//	Link *h1,*h2,*com,*p1,*p2,*start;
//	Link *createLink(int);
//	h1 = createLink(1);
//	h2 = createLink(1);
//	com = createLink(1);//公共部分
//	p1 = h1->next;
//	p2 = h2->next;
//	while (p1->next)p1 = p1->next;//到达链尾
//	while (p2->next)p2 = p2->next;
//	p1->next = com->next;//链接公共部分
//	p2->next = com->next;
//	p1 = h1->next;
//	p2 = h2->next;
//	while (p1) {//打印链表
//		printf("%c",p1->data);
//		p1 = p1->next;
//
//	}
//	printf("\n");
//	while (p2) {//打印链表
//		printf("%c",p2->data);
//		p2 = p2->next;
//
//	}
//	printf("\n");
//	start=findCommonSuffix(h1,h2);//寻找公共后缀
//	printf("%c",start->data);//打印公共后缀起始节点值
//	return  0;
//}
/*

B站：北街lhy
配套视频链接：
https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
*/