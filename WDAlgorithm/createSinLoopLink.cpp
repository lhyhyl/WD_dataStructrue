#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include "linkStruct.h"
//struct Link {
//	int data;
//	Link *next;
//};
Link *createSinLoopLink() {
	int n, data;
	Link *head = (Link *)malloc(sizeof(Link));
	head->next = NULL;
	Link *p = head;
	printf("������ڵ������n=");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		printf("�������%d���ڵ�ֵ:", i + 1);
		scanf("%d", &data);
		Link *newP = (Link*)malloc(sizeof(Link));
		newP->data = data;
		p->next = newP;
		p = newP;
	}
	p->next = head;
	return head;
}
//int main() {
//	Link* h = createSinLoopLink();
//	return 0;
//}
/*

Bվ������lhy
������Ƶ���ӣ�
https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
*/