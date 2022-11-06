///*
//	直接插入排序：
//				从第二个数开始，插入到它前面应该在的位置，注意元素的整体后移，这是关键
//*/
//#include <stdio.h>
//#include <stdlib.h>
//void directInsertSort(int *arr,int len) {
//	for (int i = 1; i < len;i++) {//进行len-1次循环 
//		int nowN = arr[i];//将需调换的值暂存
//		int j = i - 1;//从i-1位置进行比较
//		for (; arr[j] > nowN && j >= 0; j--) //从后往前找待插入位置,注意不要把nonN写成arr[i],因为移动过后就会变
//			arr[j + 1] = arr[j];//向后移动
//		//将暂存值放置正确位置，因为上面的判断会终止与j处，即j处元素小于等于i处元素，所以最终位置应在j+1处
//		arr[j+1] = nowN;
//	}
//}
//int main() {
//	int arr[] = { 9,3,4,10,2,5,7,12,10,15 };
//	//int arr[] = {5,3,4,10,8,9,7,12};
//	directInsertSort(arr,10);
//	for (int i = 0; i < 8;i++) {
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}
///*
//
//B站：北街lhy
//配套视频链接：
//https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
//*/