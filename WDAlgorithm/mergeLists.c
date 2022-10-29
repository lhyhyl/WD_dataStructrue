///*
//	将两个有序顺序表合并成一个新的顺序表，并由函数返回新的结果顺序表
//	分析：
//		手动开辟一个数组空间，其大小要大于等于原始两个数组的长度，之后进行遍历，依次取较小值赋给新数组
//*/
//#include <stdio.h>
//#include <stdlib.h>
//int *merge(int* l1,int* l2,int len1,int len2) {
//	int* newArr = (int*)malloc(len1+len2);
//	//if (*newArr == NULL) return;
//	int k = 0,i = 0,j = 0;
//	for (; i < len1&&j < len2;) {
//		if (*(l1+i)<*(l2+j)) {
//			*(newArr + k++) = *(l1 + i++);
//		}
//		else {
//			*(newArr + k++) = *(l2 + j++);
//		}
//	}
//	while (i < len1) {
//		*(newArr + k++) = *(l1 + i++);
//	}
//	while (j < len2) {
//		*(newArr + k++) = *(l2 + j++);
//	}
//	return newArr;
//}
//int main() {
//	int l1[] = {1,3,5,8};
//	int l2[] = {2,4,4,6,7};
//	int len1 = sizeof(l1) / sizeof(int);
//	int len2 = sizeof(l2) / sizeof(int);
//	int *res;
//	res = merge(l1,l2,len1,len2);
//	for (int i = 0; i < len1 + len2; i++) printf("%d ",*(res+i));
//	return 0;
//}
/*

B站：北街lhy
配套视频链接：
https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
*/