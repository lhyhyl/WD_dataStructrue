
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
//#include "biTreeStruct.h"//ͨ��ͷ�ļ����ض������ṹ��
#include "stackStruct.h"//ͨ��ͷ�ļ����ض������ṹ��

/* --------------����Ϊʵ�ֺ���--------------------*/
//����һ��ջ
Stack *createStack(int size) {
	Stack *stack = (Stack*)malloc(sizeof(Stack));//��ջ����ռ�
	stack->arr = (STYPE *)malloc(sizeof(STYPE)*size);//���ڴ��׵�ַ����ռ䣬��С�û�ָ��
	stack->len = size;//ջ����
	stack->top = -1;//ջ���±꣬��ǰ��Ԫ�أ���Ϊ-1
	return stack;
}
//�ж�ջ��
bool full(Stack *stack) {
	return stack->top + 1 >= stack->len;
}
//�ж�ջ��
bool empty(Stack *stack) {
	return stack->top == -1;
}
//��ջ
bool push(Stack *stack, STYPE p) {
	if (full(stack)) return false;
	*(stack->arr + ++stack->top) = p;
	return true;
}

//��ջ
bool pop(Stack *stack) {
	if (empty(stack)) return false;
	stack->top--;
	return true;

}

//�鿴ջ��Ԫ��
STYPE top(Stack *stack) {
	if (empty(stack)) return NULL;
	return *(stack->arr + stack->top);
}

//����
void destory(Stack *stack) {
	free(stack->arr);
	free(stack);

}
//�ж��Ƿ���ĳ��Ԫ��
bool contain(Stack *stack, STYPE r) {
	if (empty(stack)) return false;
	for (int i = stack->top; i >= 0; i--) {
		if (r == *(stack->arr + i) ){//���ˣ��Ҿ�Ȼ��==д����=
			return true;
		}
	}
	return false;
}
//��ӡջ��Ԫ��
void print(Stack *stack) {
	if (empty(stack)) return;
	for (int i = stack->top; i >= 0; i--) {
		printf("%c",stack->arr[i]);
	}
}

/*

Bվ������lhy
������Ƶ���ӣ�
https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
*/
