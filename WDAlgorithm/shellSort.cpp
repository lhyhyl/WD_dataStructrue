///*
//	希尔排序：
//			直接插入排序的改进版本，初始时会有一个排序增量，通常为数组长度的一半，按此增量进行直接插入排序，
//			每轮操作后将增量/2，
//			直至增量为一，此时相当于进行一次原始直接插入排序
//*/
//#include <stdio.h>
//#include <stdlib.h>
//
//void shellSort(int* arr, int len) {
//	int d = len / 2;
//	while (d >= 1) {//步长大于一则继续循环
//		for (int m = 0; m < d; m++) {//对于增量d内的每一个元素直接插入排序
//			for (int i = m + d; i < len; i += d) {//同直接插入过程，不同的是元素位置相差d的为一组
//				int j = i - d;
//				int temp = arr[i];
//				for (; arr[j] > temp && j >= 0; j -= d) //从后往前寻找待插入位置
//					arr[j + d] = arr[j];//向后移动
//				arr[j + d] = temp;
//			}
//		}
//		d /= 2;
//	}
//}
//int main() {
//	int arr[] = { 9,3,4,10,2,5,7,12,10,15 };
//
//	shellSort(arr, 10);
//	for (int i = 0; i < 10; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
///*
//
//B站：北街lhy
//配套视频链接：
//https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
//*/