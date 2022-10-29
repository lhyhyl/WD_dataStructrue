///*
//	已知两个链表A、B分别表示两个集合，其元素递增排列，编制函数，求A与B的交集，并存放于A链表中。
//	分析：
//		与上题类似，因为链表本身递增排序，我们可以设置两个指针，同时遍历A、B链表，同则保留，异则删除
//*/
//#include <stdlib.h>
//#include <stdio.h>
//#include "linkStruct.h"//通过自创建头文件引入结构体，ctrl+鼠标左键点击即可查看
//void listCommon(Link *a,Link *b) {
//	Link *pA = a->next, *pB = b->next,*r,*la=a;//用la指向a，便可直接链在a后面
//	la->next = NULL;
//	while (pA&&pB) {
//		if (pA->data==pB->data) {
//			la->next = pA;
//			la = pA;
//			pA = pA->next;
//			pB = pB->next;
//		}
//		else {
//			pA->data < pB->data ? pA = pA->next : pB = pB->next;
//		}
//	}
//	la->next = NULL;
//}
//int main() {
//	Link *a, *b;
//	Link *createLink(int);
//	void printfNowLink(Link *);
//	a = createLink(0);
//	b = createLink(0);
//	listCommon(a,b);
//	printfNowLink(a);
//	return 0;
//}
/*

B站：北街lhy
配套视频链接：
https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
*/