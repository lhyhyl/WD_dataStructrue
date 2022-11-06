///*
//	设单链表的表头指针为h，节点结构由data和next两个域构成，其中data域为字符型。
//	试设计算法判断该链表的全部n个字符是否是中心对称，例如xyx，xyyx都是中心对称。
//
//	分析：
//		我们可以利用栈的先进后出的特性来搞定这道题，我们设置两个快慢指针，fast和slow
//		之前我们就用过这种方法，用以找到中间节点，之后将slow节点之后的节点依次入栈，
//		fast指针重新指向首节点，然后fast和栈内元素一一比较，若存在不同，则不对称。
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include "linkStruct.h"//通过自创建头文件引入结构体，ctrl+鼠标左键点击即可查看
//#include "stackStruct.h"//通过头文件加载栈结构体
//void isSymmetry(Link *h) {
//	int size;
//	struct Stack *s;
//	Stack *createStack(int);
//	bool push(Stack * , char);
//	bool empty(Stack *);
//	char top(Stack *);
//	bool pop(Stack *);
//	void destory(Stack *);
//	printf("请输入要创建的栈的大小：size=");
//	scanf("%d",&size);
//	s = createStack(size);
//	Link *fast = h->next, *slow = h->next;
//	while (fast->next&&fast->next->next) {
//		fast = fast->next->next;
//		slow = slow->next;
//	}
//	fast = h->next;
//	while (slow->next) {//将中间元素的后面节点依次入栈
//		push(s,slow->next->data);
//		slow = slow->next;//我总是忘记往下走
//	}
//	while (!empty(s)) {
//		if (fast->data != top(s) ) {
//			printf("该链表非中心对称");
//			break;
//		}
//		fast = fast->next;
//		pop(s);
//	}
//	if(empty(s))printf("该链表是中心对称的");
//	destory(s);//最后销毁栈
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
//B站：北街lhy
//配套视频链接：
//https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
//*/