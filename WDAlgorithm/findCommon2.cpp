///*
//	��֪��������A��B�ֱ��ʾ�������ϣ���Ԫ�ص������У����ƺ�������A��B�Ľ������������A�����С�
//	������
//		���������ƣ���Ϊ����������������ǿ�����������ָ�룬ͬʱ����A��B����ͬ����������ɾ��
//*/
//#include <stdlib.h>
//#include <stdio.h>
//#include "linkStruct.h"//ͨ���Դ���ͷ�ļ�����ṹ�壬ctrl+������������ɲ鿴
//void listCommon(Link *a,Link *b) {
//	Link *pA = a->next, *pB = b->next,*r,*la=a;//��laָ��a�����ֱ������a����
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

Bվ������lhy
������Ƶ���ӣ�
https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
*/