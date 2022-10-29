///*
//	存在两个单链表序列A、B，设计函数判断B是否为A的子序列。
//	分析：
//		最直接的方法：循环遍历，从A链的第一个元素开始与B链对比，如遇见不同，从A链下一个又开始，直至到达链尾
//*/
//
//
//#include <stdio.h>
//#include "linkStruct.h"//通过自创建头文件引入结构体，ctrl+鼠标左键点击即可查看
//void subList(Link *a,Link *b) {
//	Link *la = a ,*pA = la->next, *pB = b->next;
//	while (pA&&pB) {
//		if (pA->data==pB->data) {//相等继续对比下一个
//			pA = pA->next;
//			pB = pB->next;
//		}
//		else {
//			pB = b->next;//pb从头开始与pa对比
//			la = la->next;//失败一次，la往后移动一个节点
//			pA = la->next;//pa从下一个节点又开始
//		}
//	}
//	pB == NULL ? printf("true") : printf("false");//如果pb为NULL，说明已比对完成
//	
//}
//int main() {
//	Link *a, *b;
//	Link *createLink(int);
//	a = createLink(0);
//	b = createLink(0);
//	subList(a,b);
//	return 0;
//}
/*

B站：北街lhy
配套视频链接：
https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
*/