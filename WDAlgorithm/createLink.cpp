
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linkStruct.h"//ͨ��ͷ�ļ�����ṹ�壬���ٴ�����
Link* createLink(int num) {
	int n, data;
	char letter;
	printf("�����봴������Ľڵ������");
	scanf("%d", &n);
	Link *q;
	Link *head = (Link*) malloc(sizeof(Link));
	head->next = NULL;
	q = head;
	for (int i = 0; i < n; i++) {
		Link *newP = (Link*) malloc(sizeof(Link));
		num ? printf("�������%d���ڵ��ֵ(char)��",i+1): printf("�������%d���ڵ��ֵ(int)��", i + 1);
		if (num==0) {//0�����������ͽڵ�
			scanf("%d", &data);
			newP->data = data;
		}
		else {//1�������ַ��ͽڵ�
			getchar();
			scanf("%c", &letter);
			newP->data = letter;
		}
		newP->next = NULL;
		head->next = newP;
		head = head->next;//headҪʼ��ָ�����½ڵ�
	}
	head->next = NULL;
	head = q;//���headҪָ��ͷ���
	printf("��ӡ����");
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

Bվ������lhy
������Ƶ���ӣ�
https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
*/