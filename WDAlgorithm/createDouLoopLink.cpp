#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include "linkStruct.h"//ͨ���Դ���ͷ�ļ�����ṹ�壬ctrl+������������ɲ鿴

DLink *createDouLoopLink() {
	int n, data;
	DLink*head = (DLink*)malloc(sizeof(DLink));
	head->next = NULL;
	head->pre = NULL;
	DLink*p = head;
	printf("������ڵ������n=");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		printf("�������%d���ڵ�ֵ:", i + 1);
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

Bվ������lhy
������Ƶ���ӣ�
https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
*/