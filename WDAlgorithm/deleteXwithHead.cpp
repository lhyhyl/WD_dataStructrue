///*
//	在带头结点的单链表L中,删除所有值为X的节点，并释放其空间，假设值为X的节点不唯一
//	分析：
//		和上题相似，只是多了一个头结点。
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
// #include "linkStruct.h"//通过自创建头文件引入结构体，ctrl+鼠标左键点击即可查看
//void deleteX(Link *&p,int delNum) {
//	Link* q;//这是递归方法
//	if (p == NULL) return;
//	if (p->data==delNum) {
//		q = p;
//		p = p->next;
//		free(q);
//		deleteX(p,delNum);
//	}
//	else {
//		deleteX(p->next, delNum);
//	}
//	//不采取递归，直接遍历
//	//Link *pre = p, *q = p->next,*r;
//	//while (q) {
//	//	if (q->data==delNum) {
//	//		r = q;//r指向待删除节点
//	//		q = q->next;//
//	//		pre->next = q;//删除节点
//	//		free(r);//释放节点
//	//	}
//	//	else {
//	//		pre = q;
//	//		q = q->next;
//	//		
//	//	}
//	//}
//}
//
//int main() {
//	//创建链表
//	Link* head = (Link*)malloc(sizeof(Link));
//	Link* createLink(int);
//	void printfNowLink(Link * );
//	head = createLink(0);
//	int n, data, delNum;
//	printfNowLink(head);
//	printf("\n");
//	printf("请输入要删除的值：");
//	scanf("%d",&delNum);
//	deleteX(head,delNum);
//	printfNowLink(head);
//	return 0;
//}
/*

B站：北街lhy
配套视频链接：
https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
*/