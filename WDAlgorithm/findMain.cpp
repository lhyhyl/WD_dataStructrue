///*
//	Ѱ����Ԫ��
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
//int findMain2(int *arr,int len) {//���ø�������
//	int* arrB = (int *)malloc(sizeof(int )*100);//��������
//	for (int i = 0; i < len;i++) {//��ʼ��
//		arrB[i]=0;
//	}
//	for (int i = 0; i < len; i++) {//��arr��Ԫ����ΪarrB���±꣬��������
//		arrB[arr[i]]++;
//	}
//	int mainNum = 0;
//	for (int i = 0; i < 100;i++) {//Ѱ�ҳ��ִ�������Ԫ��,ֻ�г�������Ԫ�زſ�������Ԫ��
//		if (arrB[i]>mainNum) {
//			mainNum = i;
//		}
//	}
//	int count = 0;//����ͳ��mainNum�ĳ��ִ���
//	for (int i = 0; i < len;i++) {//ͳ��mainNum�ĳ��ִ���
//		if (arr[i] == mainNum)
//			count++;
//	}
//	if (count > len / 2)//���ִ������ڳ��ȵ�һ�룬��Ϊ��Ԫ��
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

Bվ������lhy
������Ƶ���ӣ�
https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
*/