///*
//	�͵���������
//	������
//		���ǲ���ͷ�巨�������á�
//*/
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
// #include "linkStruct.h"//ͨ���Դ���ͷ�ļ�����ṹ�壬ctrl+������������ɲ鿴
//
//void reverse(Link *h) {
//	//Link *pre = h, *p = h->next, *q = h->next,*r;
//	////pre��¼�����ڵ�p��һ���ڵ㣬q��¼��һ���ڵ㣬֮����Ҫָ��NULL,r����ָ��ÿһ�β���ʱp�ĺ�һ���ڵ㣬��ֹ����
//	//while (p) {//�����������޸�ָ��ָ��
//	//	r = p->next;
//	//	p->next = pre;
//	//	pre = p;
//	//	p = r;
//	//}
//	//h->next = pre;//ͷָ��ָ�����һ���ڵ�
//	//q->next = NULL;//��һ���ڵ�ָ��NULL����Ȼ����ѭ����������
//	
//
//	//����Ҳ���Բ���ͷ�巨��������,����������ʱ�临�ӶȾ�ΪO(N)
//	Link *l = h, *p = h->next,*r;
//	l->next = NULL;
//	while (p) {
//		r = p->next;
//		p->next = l->next;
//		l->next = p;
//		p = r;
//	}
//	h = l;
//}
//int main() {
//	Link *head = (Link*) malloc(sizeof(Link));
//	Link *createLink(int);
//	head = createLink(0);
//	reverse(head);
//	printf("���ú�����ֵΪ��");
//	while (head->next) {
//		printf("%d ", head->next->data);
//		head = head->next;
//	}
//	return 0;
//}
/*

Bվ������lhy
������Ƶ���ӣ�
https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
*/