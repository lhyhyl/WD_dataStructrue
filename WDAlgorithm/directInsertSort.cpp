///*
//	ֱ�Ӳ�������
//				�ӵڶ�������ʼ�����뵽��ǰ��Ӧ���ڵ�λ�ã�ע��Ԫ�ص�������ƣ����ǹؼ�
//*/
//#include <stdio.h>
//#include <stdlib.h>
//void directInsertSort(int *arr,int len) {
//	for (int i = 1; i < len;i++) {//����len-1��ѭ�� 
//		int nowN = arr[i];//���������ֵ�ݴ�
//		int j = i - 1;//��i-1λ�ý��бȽ�
//		for (; arr[j] > nowN && j >= 0; j--) //�Ӻ���ǰ�Ҵ�����λ��,ע�ⲻҪ��nonNд��arr[i],��Ϊ�ƶ�����ͻ��
//			arr[j + 1] = arr[j];//����ƶ�
//		//���ݴ�ֵ������ȷλ�ã���Ϊ������жϻ���ֹ��j������j��Ԫ��С�ڵ���i��Ԫ�أ���������λ��Ӧ��j+1��
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
//Bվ������lhy
//������Ƶ���ӣ�
//https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
//*/