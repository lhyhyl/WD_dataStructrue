///*
//	ϣ������
//			ֱ�Ӳ�������ĸĽ��汾����ʼʱ����һ������������ͨ��Ϊ���鳤�ȵ�һ�룬������������ֱ�Ӳ�������
//			ÿ�ֲ���������/2��
//			ֱ������Ϊһ����ʱ�൱�ڽ���һ��ԭʼֱ�Ӳ�������
//*/
//#include <stdio.h>
//#include <stdlib.h>
//
//void shellSort(int* arr, int len) {
//	int d = len / 2;
//	while (d >= 1) {//��������һ�����ѭ��
//		for (int m = 0; m < d; m++) {//��������d�ڵ�ÿһ��Ԫ��ֱ�Ӳ�������
//			for (int i = m + d; i < len; i += d) {//ֱͬ�Ӳ�����̣���ͬ����Ԫ��λ�����d��Ϊһ��
//				int j = i - d;
//				int temp = arr[i];
//				for (; arr[j] > temp && j >= 0; j -= d) //�Ӻ���ǰѰ�Ҵ�����λ��
//					arr[j + d] = arr[j];//����ƶ�
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
//Bվ������lhy
//������Ƶ���ӣ�
//https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
//*/