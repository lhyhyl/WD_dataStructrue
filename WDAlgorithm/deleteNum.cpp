///*
//	��һ����ͷ���ĵ���������Ԫ�ص�����ֵ�����Ա�д����ɾ�����н��ڸ���������ֵ����Ϊ��������������֮���Ԫ�ء�
//	������
//		�ֱ�����pre��p��rָ�룬�������������������ɾ����
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include "linkStruct.h"//ͨ���Դ���ͷ�ļ�����ṹ�壬ctrl+������������ɲ鿴
//void deleteNum(Link *h,int min,int max) {
//	Link *pre = h, *p = h->next, *r;
//	while (p) {
//		if (p->data>min&&p->data<max) {//��������������ɾ��
//			r = p->next;
//			pre->next = p->next;
//			free(p);
//			p = r;
//		}
//		else {
//			pre = p;
//			p = p->next;
//		}
//	}
//}
//int main() {
//	int min, max;
//	Link*head;
//	Link *createLink(int);//��������Ĵ����ҵ�����װ��һ���ļ�
//	void printfNowLink(Link*);
//	head = createLink(0);
//	printf("������Ҫɾ����ֵ���ڵķ�Χ��\n");
//	printf("min=");
//	scanf("%d",&min);
//	printf("max=");
//	scanf("%d", &max);
//	deleteNum(head,min,max);
//	printfNowLink(head);
//	return 0;
//}
/*

Bվ������lhy
������Ƶ���ӣ�
https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
*/