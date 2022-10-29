///*
//	请设计一个算法，将给定的表达式树，转换成等价的中缀表达式并输出。
//	分析：
//		题目已然说明我们要采取中序遍历，进而输出该表达式，那么需要注意的点便是我们的括号在哪里加，其中根节点处和叶子结点
//		处不需要添加括号，其余情况在访问左子树前加左括号，访问右子树后添加右括号
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include "biTreeStruct.h"//通过头文件加载二叉树结构体
//void putInExp(biTree*T,int deep) {
//	if (T==NULL) {
//		return;
//	}
//	if (!T->lchild &&!T->rchild) {//若为叶节点，直接输出操作数
//		printf("%c",T->data);
//	}
//	else {
//		if (deep > 1) printf("(");//非根节点，添加左括号
//		putInExp(T->lchild,deep+1);
//		printf("%c",T->data);
//		putInExp(T->rchild, deep + 1);
//		if (deep > 1) printf(")");
//
//	}
//}
//int main() {
//	biTree* create(biTree*,int);
//	biTree *T = (biTree *)malloc(sizeof(biTree));
//	T = create(T,1);
//	printf("中缀表达式为：");
//	putInExp(T,1);
//	return 0;
//}
/*

B站：北街lhy
配套视频链接：
https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
*/