#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include "linkStruct.h"//通过自创建头文件引入结构体，ctrl+鼠标左键点击即可查看

DLink *createDouLoopLink() {
	int n, data;
	DLink*head = (DLink*)malloc(sizeof(DLink));
	head->next = NULL;
	head->pre = NULL;
	DLink*p = head;
	printf("请输入节点个数：n=");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		printf("请输入第%d个节点值:", i + 1);
		scanf("%d", &data);
		DLink*newP = (DLink*)malloc(sizeof(DLink));
		newP->data = data;
		newP->pre = p;
		p->next = newP;
		p = newP;
	}
	p->next = head;
	head->pre = p;
	return head;
}
//int main() {
//	DLink* h = createDouLoopLink();
//	return 0;
//}
/*

B站：北街lhy
配套视频链接：
https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
*/