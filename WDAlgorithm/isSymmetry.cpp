///*
//	�赥����ı�ͷָ��Ϊh���ڵ�ṹ��data��next�����򹹳ɣ�����data��Ϊ�ַ��͡�
//	������㷨�жϸ������ȫ��n���ַ��Ƿ������ĶԳƣ�����xyx��xyyx�������ĶԳơ�
//
//	������
//		���ǿ�������ջ���Ƚ�������������㶨����⣬����������������ָ�룬fast��slow
//		֮ǰ���Ǿ��ù����ַ����������ҵ��м�ڵ㣬֮��slow�ڵ�֮��Ľڵ�������ջ��
//		fastָ������ָ���׽ڵ㣬Ȼ��fast��ջ��Ԫ��һһ�Ƚϣ������ڲ�ͬ���򲻶Գơ�
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include "linkStruct.h"//ͨ���Դ���ͷ�ļ�����ṹ�壬ctrl+������������ɲ鿴
//#include "stackStruct.h"//ͨ��ͷ�ļ�����ջ�ṹ��
//void isSymmetry(Link *h) {
//	int size;
//	struct Stack *s;
//	Stack *createStack(int);
//	bool push(Stack * , char);
//	bool empty(Stack *);
//	char top(Stack *);
//	bool pop(Stack *);
//	void destory(Stack *);
//	printf("������Ҫ������ջ�Ĵ�С��size=");
//	scanf("%d",&size);
//	s = createStack(size);
//	Link *fast = h->next, *slow = h->next;
//	while (fast->next&&fast->next->next) {
//		fast = fast->next->next;
//		slow = slow->next;
//	}
//	fast = h->next;
//	while (slow->next) {//���м�Ԫ�صĺ���ڵ�������ջ
//		push(s,slow->next->data);
//		slow = slow->next;//����������������
//	}
//	while (!empty(s)) {
//		if (fast->data != top(s) ) {
//			printf("����������ĶԳ�");
//			break;
//		}
//		fast = fast->next;
//		pop(s);
//	}
//	if(empty(s))printf("�����������ĶԳƵ�");
//	destory(s);//�������ջ
//}
//int main() {
//	Link *head;
//	Link *createLink(int);
//	head = createLink(1);
//	isSymmetry(head);
//	return 0;
//} 
///*
//
//Bվ������lhy
//������Ƶ���ӣ�
//https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
//*/