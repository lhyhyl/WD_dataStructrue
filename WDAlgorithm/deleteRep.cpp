///*
//	在一个递增有序的线性表中，有数值相同的元素存在，若存储方式为单链表，设计算法去掉数值相同的元素，使表中不再有重复的元素。
//	分析：
//		对于这类去重，我们肯定需要进行遍历，而这道题给我们的是递增有序的序列，我们便可以进行一一比较，后一个元素与当前元素相同
//		时便删除当前元素
//*/
//#include <stdio.h>
//#include <stdlib.h>
//#include "linkStruct.h"//通过自创建头文件引入结构体，ctrl+鼠标左键点击即可查看
//void deleteRep(Link *h) {
//	Link *pre = h, *p = h->next, *r;//删除节点必备三剑客
//	while (p->next) {
//		if (p->data==p->next->data) {//当前节点与后续节点值相同，则删除并释放空间
//			r = p->next;//必须先保存后续节点，防止断链
//			pre->next = p->next;
//			free(p);
//			p = r;
//			continue;
//		}
//		pre = p;
//		p = p->next;
//	}
//}
//int main() {
//	Link * head;
//	Link *createLink(int);
//	void printfNowLink(Link *);
//	head = createLink(0);
//	deleteRep(head);
//	printfNowLink(head);
//	return 0;
//}
/*

B站：北街lhy
配套视频链接：
https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
*/