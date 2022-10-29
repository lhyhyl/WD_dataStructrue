///*
//	寻找序列中未曾出现的最小正整数
//*/
//#include <stdio.h>
//#include <stdlib.h>
//
//int findMinZ(int *arr,int n) {//传入数组首元素和最大值
//	int* arrB = (int*)malloc(sizeof(int) * n);
//	for (int i = 0; i < n;i++) {
//		arr[i] > 0 ? arrB[arr[i] - 1] = 1 : arrB[i] = 0;
//	}
//	for (int k = 0; k < n;k++) {
//		if (arrB[k] == 0)return k + 1;
//	}
//	return n + 1;
//}
//int main() {
//	int arr[] = { 1,2,3 };
//	int min = findMinZ(arr,3);
//	return 0;
//}
/*

B站：北街lhy
配套视频链接：
https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
*/