///*
//	寻找主元素
//*/
//#include <stdio.h>
//#include <stdlib.h>
//int findMain(int *arr, int len) {
//	int c = *arr, count = 1,mainCount = 0;
//	for (int i = 1; i < len; i++) {
//		if (c == *(arr + i)) {
//			count++;
//		}
//		else {
//			if (count > 0) {
//				count--;
//			}
//			else {
//				c = *(arr + i);
//				count = 1;
//			}
//		}
//	}
//	if (count > 0) {
//		for (int i = 0; i < len; i++) {
//			if (*(arr + i) == c) {
//				mainCount++;
//			}
//		}
//
//	}
//	if (mainCount > len / 2)
//		return c;
//	else
//		return -1;
//
//}
//int findMain2(int *arr,int len) {//利用辅助数组
//	int* arrB = (int *)malloc(sizeof(int )*100);//辅助数组
//	for (int i = 0; i < len;i++) {//初始化
//		arrB[i]=0;
//	}
//	for (int i = 0; i < len; i++) {//把arr中元素作为arrB中下标，令其自增
//		arrB[arr[i]]++;
//	}
//	int mainNum = 0;
//	for (int i = 0; i < 100;i++) {//寻找出现次数最多的元素,只有出现最多的元素才可能是主元素
//		if (arrB[i]>mainNum) {
//			mainNum = i;
//		}
//	}
//	int count = 0;//用于统计mainNum的出现次数
//	for (int i = 0; i < len;i++) {//统计mainNum的出现次数
//		if (arr[i] == mainNum)
//			count++;
//	}
//	if (count > len / 2)//出现次数大于长度的一半，即为主元素
//		return mainNum;
//	else
//		return -1;
//}
//int main() {
//	//int arr[] = { 1,5,5,5,5,5,5,5 };
//	int arr[] = { 0,5,5,3,5,1,5,7 };
//	int mainNum;
//	mainNum = findMain2(arr, 8);
//	printf("%d", mainNum);
//	return 0;
//}
/*

B站：北街lhy
配套视频链接：
https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
*/