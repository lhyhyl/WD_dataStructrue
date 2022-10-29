
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linkStruct.h"//通过头文件引入结构体，减少代码量
Link* createLink(int num) {
	int n, data;
	char letter;
	printf("请输入创建链表的节点个数：");
	scanf("%d", &n);
	Link *q;
	Link *head = (Link*) malloc(sizeof(Link));
	head->next = NULL;
	q = head;
	for (int i = 0; i < n; i++) {
		Link *newP = (Link*) malloc(sizeof(Link));
		num ? printf("请输入第%d个节点的值(char)：",i+1): printf("请输入第%d个节点的值(int)：", i + 1);
		if (num==0) {//0代表创建整数型节点
			scanf("%d", &data);
			newP->data = data;
		}
		else {//1代表创建字符型节点
			getchar();
			scanf("%c", &letter);
			newP->data = letter;
		}
		newP->next = NULL;
		head->next = newP;
		head = head->next;//head要始终指向最新节点
	}
	head->next = NULL;
	head = q;//最后head要指向头结点
	printf("打印链表：");
	printf("\n");
	while (head->next) {
		if (num==0) {
			printf("%d ", head->next->data);
		}
		else {
			printf("%c", head->next->data);
		}
		
		head = head->next;
	}
	printf("\n");
	head = q;
	return head;
}
//int main() {
//	Link* h = createLink(0);
//	return 0;
//}
/*

B站：北街lhy
配套视频链接：
https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
*/