///*
//	���һ���㷨�жϴ�ͷ����ѭ��˫�����Ƿ�Գ�
//	������
//		�򵥷��������ǿ�����������ָ�룬pre��next����ͷ�����������бȽϣ���pre��next��ֵָ��ͬ���򲻶Գƣ���pre��nextָ����ͬһ���ڵ�
//		���ѭ��˫����Գ�
//*/
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdlib.h>
//#include <stdio.h>
//#include "linkStruct.h"//ͨ���Դ���ͷ�ļ�����ṹ�壬ctrl+������������ɲ鿴
//bool isSymmetry(DLink *h) {
//	DLink *pre = h->pre,*next=h->next;
//	while (pre != next) {
//		if (pre->data != next->data)
//			return false;
//		else if (pre->pre != next) {
//			pre = pre->pre;
//			next = next->next;
//		}
//		else {
//			break;
//		}
//	}
//	if(pre == next||pre->pre->data == next->data)
//		return true;
//}
//int main() {
//	DLink *head;
//	DLink *createDouLoopLink();
//	head = createDouLoopLink();
//	isSymmetry(head) ? printf("��ѭ��˫����") : printf("����ѭ��������");
//	return 0;
//}
/*

Bվ������lhy
������Ƶ���ӣ�
https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
*/