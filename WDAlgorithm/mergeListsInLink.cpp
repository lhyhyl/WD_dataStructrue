///*
//	������������Ԫ��ֵ�����������е����Ա����Ե�������ʽ�洢�����д�㷨��������������鲢Ϊһ����Ԫ�صݼ��ĵ�����
//	��Ҫ������ԭ������������Ľڵ��Ź鲢��ĵ�����
//	������
//		��Ϊ����������������ǿ��Բ���ͷ�巨���д�����a��Ϊ��ʼ�������й鲢
//*/
//
//#include <stdio.h>
//#include "linkStruct.h"//ͨ���Դ���ͷ�ļ�����ṹ�壬ctrl+������������ɲ鿴
//
//void merge(Link *ha,Link *hb) {
//	Link *l = ha, *pa = ha->next, *pb = hb->next, *ra, *rb;
//	l->next = NULL;
//	while (pa&&pb) {
//		if (pa->data<pb->data) {
//			ra = pa->next;
//			pa->next = l->next;
//			l->next = pa;
//			pa = ra;
//		}
//		else {
//			rb = pb->next;
//			pb->next = l->next;
//			l->next = pb;
//			pb = rb;
//		}
//	}
//	while (pa) {
//		ra = pa->next;
//		pa->next = l->next;
//		l->next = pa;
//		pa = ra;
//	}
//	while (pb) {
//		rb = pb->next;
//		pb->next = l->next;
//		l->next = pb;
//		pb = rb;
//	}
//}
//int main() {
//	Link *ha,*hb;
//	Link *createLink(int);
//	void printfNowLink(Link *);
//	ha = createLink(0);
//	hb = createLink(0);
//	merge(ha,hb);
//	printfNowLink(ha);
//	return 0;
//}
/*

Bվ������lhy
������Ƶ���ӣ�
https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
*/