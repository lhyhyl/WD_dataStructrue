///*
//	ջ�Ͷ���Ӧ�����һ�⣺�����ֶɣ�Ҫ��ÿ��10�����ͳ������ڻ�����ÿ��4���ͳ�������1���������ͳ�����4��ʱ����������
//	��������ʱ������ͳ�����
//	������
//		����Ȼ��һ����������⣬�������ϵĽ����ԣ�������˼���ǿͳ��ͻ�����Ϊ�������У��ͳ����г�4���������Ż���
//		���г�һ���������ֿͳ�����ʱ�����������д��棬����������ʱ���������ͳ����С�����Ҳ����ʵ�֣�
//		�����������һ���Լ����뷨��������һ��������������������㷨������ջ������������Ӳ����ǰ�棬�������ǿ��Է���
//		�൱������Ҫ���ͳ�������������ǰ�棬ֻ�������ƣ�ÿ4���ͳ�����Ҫ����һ��������������������������Ҳ���Ժܺ�
//		�ش���ֱ�ӽ�ʣ�೵�������ۿͳ����ǻ�����ֱ�����ӵ����к��档
//		֮�����ǴӶ�����ȡ10��������
//*/
//#include <stdio.h>
//#include <stdlib.h>
//#include "queueStruct.h"//ͨ��ͷ�ļ����ض��нṹ��
//#define MAXSIZE 20
//void manageCar(int* arrCar, int* arrArrange, Squeue* sq) {//������ջ�������⣬���г���Ӧ������ѭ�ȵ����ϵ�ԭ�򣬶�ջ���������Ƚ����������Ӧ���ö��и�����
//	int i = 0, passengerCar = 0, j = 0;
//	int c;//���ճ��ӳ�
//	bool enQueue(Squeue*, int, int);
//	bool isEmpty(Squeue*);
//	bool deQueue(Squeue*, int*, int);
//	for (; arrCar[i] == 1 || arrCar[i] == 2; i++) {
//		if (arrCar[i] == 2 && passengerCar < 4) {//����ǻ�����֮ǰ��û��4���ͳ�����ջ
//			enQueue(sq, arrCar[i],MAXSIZE);
//		}
//		else {//���ǿͳ���ֱ����arrArrange
//			if (passengerCar == 4) {//��֮ǰ��������4���ͳ������������
//				if (!isEmpty(sq)) {
//					deQueue(sq,&c,MAXSIZE);
//					arrArrange[j++] = c;
//					passengerCar = 0;//���¼���
//				}
//			}
//			arrArrange[j++] = arrCar[i];
//			passengerCar++;//�����ͳ�����һ
//		}
//	}
//	while (!isEmpty(sq)) {//����Ԫ�ز��գ����뵽arrArrange
//		deQueue(sq, &c, MAXSIZE);
//		arrArrange[j++] = c;
//	}
//}
//int main() {
//	int arrCar[] = { 2,1,2,1,1,1,1,2,2,2,1,1 };//������1����ͳ�����2�������,arrCar����ǰ�ĳ����У�Ȼ��������Ҫ����
//	int arrArrange[20] = { 0 };//��ʼ��Ϊ0���������ŵĳ���
//	Squeue* sq = (Squeue*)malloc(sizeof(Squeue));
//	Squeue* createQueue(int);
//	sq = createQueue(MAXSIZE);
//	manageCar(arrCar, arrArrange, sq);
//	for (int i = 0; i < 10; i++) {//ȡ10��������
//		printf("%d ", *(arrArrange + i));
//	}
//	return 0;
//}
/*

Bվ������lhy
������Ƶ���ӣ�
https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
*/