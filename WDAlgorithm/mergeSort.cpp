///*
//	�鲢����
//
//*/
//#include <stdio.h>
//#include <stdlib.h>
//static int *arrB = (int *)malloc(sizeof(int)*20);
//void merge(int *arr, int low, int mid, int high) {//һ�ι鲢����
//	int k, m, n;
//	for (int i = low; i <= high; i++) {
//		arrB[i] = arr[i];
//	}
//
//	for (m = low, n = mid + 1, k = m; m <= mid && n <= high;) {
//		if (arrB[m] <= arrB[n]) {
//			arr[k++] = arrB[m++];
//		}
//		else {
//			arr[k++] = arrB[n++];
//		}
//	}
//	while (n <= high)arr[k++] = arrB[n++];
//	while (m <= mid)arr[k++] = arrB[m++];
//}
//void mergeSort(int *arr, int low, int high) {
// 	if (low < high) {
//		int mid = (low + high) / 2;
//		mergeSort(arr, low, mid);
//		mergeSort(arr, mid + 1, high);
//		merge(arr, low, mid, high);
//		for (int i = 0; i < 10;i++) {
//			printf("%d ",arr[i]);
//		}
//		printf("\n");
//	}
//}
//int main() {
//	//int arr[] = { 38,49,65,97,76,13,27 };
//	int arr[] = { 25,50,15,35,80,85,20,40,36,70 };
//	mergeSort(arr, 0, 9);
//	return 0;
//}
///*
//
//Bվ������lhy
//������Ƶ���ӣ�
//https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
//*/