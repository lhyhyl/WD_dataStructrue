/*
	���һ���㷨�ж�һ�������Ƿ��л�
	���������ǿ�������һ�£���һ���л��������ϣ����������ܲ���һ�����ܵÿ죬һ�����ܵ��������룬ʱ����������£��ܵÿ�
	���Ǹ����ǲ��ǻ��ٴ������ܵ��������أ����Զ�������⣬����Ҳ����ͨ������ָ��������pָ��һ���ƶ������ڵ㣬qָ��һ���ƶ�
	һ���ڵ㣬��������ٴ������ˣ�˵�������л������pָ��ΪNULL�ˣ�˵���޻���ͬʱ������Ҫ��¼p��q���ߵĲ���������ȷ��
	������ڵ�
*/
//#include <stdio.h>
//#include "linkStruct.h"//ͨ���Դ���ͷ�ļ�����ṹ�壬ctrl+������������ɲ鿴
//Link *isLoop(Link *h) {
//	Link *fast = h, *slow = h;
//	while (slow&&fast&&fast->next) {
//		slow = slow->next;
//		fast = fast->next->next;
//		if (slow == fast) {//�ٴ�������˵���л�
//			break;
//		}
//	}
//	if (slow==NULL||fast==NULL||fast->next==NULL) {
//		return NULL;
//	}
//	fast = h;
//	while (fast != slow) {
//		fast = fast->next;
//		slow = slow->next;
//	}
//	return fast;
//}
//int main() {
//	Link *head,*l,*s;
//	int count = 0;
//	Link *createLink(int);
//	head = createLink(0);
//	l = head;
//	while (l->next) {
//		l = l->next;
//	}
//	l->next = head->next->next->next;//�ֶ�����һ����
//	s=isLoop(head);
//	if (s) {
//		printf("������ʼ�ڵ�ֵΪ��%d",s->data);
//	}
//	else {
//		printf("�������޻�");
//	}
//	return 0;
//}
/*

Bվ������lhy
������Ƶ���ӣ�
https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
*/