
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
//#include "biTreeStruct.h"//通过头文件加载二叉树结构体
#include "stackStruct.h"//通过头文件加载二叉树结构体

/* --------------以下为实现函数--------------------*/
//创建一个栈
Stack *createStack(int size) {
	Stack *stack = (Stack*)malloc(sizeof(Stack));//给栈分配空间
	stack->arr = (STYPE *)malloc(sizeof(STYPE)*size);//给内存首地址分配空间，大小用户指定
	stack->len = size;//栈容量
	stack->top = -1;//栈顶下标，当前无元素，故为-1
	return stack;
}
//判断栈满
bool full(Stack *stack) {
	return stack->top + 1 >= stack->len;
}
//判断栈空
bool empty(Stack *stack) {
	return stack->top == -1;
}
//入栈
bool push(Stack *stack, STYPE p) {
	if (full(stack)) return false;
	*(stack->arr + ++stack->top) = p;
	return true;
}

//出栈
bool pop(Stack *stack) {
	if (empty(stack)) return false;
	stack->top--;
	return true;

}

//查看栈顶元素
STYPE top(Stack *stack) {
	if (empty(stack)) return NULL;
	return *(stack->arr + stack->top);
}

//销毁
void destory(Stack *stack) {
	free(stack->arr);
	free(stack);

}
//判断是否含有某个元素
bool contain(Stack *stack, STYPE r) {
	if (empty(stack)) return false;
	for (int i = stack->top; i >= 0; i--) {
		if (r == *(stack->arr + i) ){//疯了，我居然把==写成了=
			return true;
		}
	}
	return false;
}
//打印栈中元素
void print(Stack *stack) {
	if (empty(stack)) return;
	for (int i = stack->top; i >= 0; i--) {
		printf("%c",stack->arr[i]);
	}
}

/*

B站：北街lhy
配套视频链接：
https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
*/
