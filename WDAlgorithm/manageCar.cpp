///*
//	栈和队列应用最后一题：汽车轮渡，要求：每次10辆，客车优先于货车，每上4辆客车才能上1辆货车，客车不足4辆时，货车代替
//	货车不足时，允许客车都上
//	分析：
//		这仍然是一类排序的问题，王道书上的解答可以，核心意思就是客车和货车分为两个队列，客车队列出4辆，紧接着货车
//		队列出一辆；当出现客车不足时，出货车队列代替，当货车不足时，继续出客车队列。代码也不难实现，
//		这里我想分享一下自己的想法，我们上一题做过货车车厢调整的算法，利用栈将软座调整到硬座的前面，这里我们可以仿造
//		相当于我们要将客车调整到货车的前面，只是有限制，每4辆客车就需要插入一辆货车，而面对特殊情况，我们也可以很好
//		地处理，直接将剩余车辆（无论客车还是货车）直接连接到队列后面。
//		之后我们从队列中取10辆车即可
//*/
//#include <stdio.h>
//#include <stdlib.h>
//#include "queueStruct.h"//通过头文件加载队列结构体
//#define MAXSIZE 20
//void manageCar(int* arrCar, int* arrArrange, Squeue* sq) {//这里用栈会有问题，所有车辆应该是遵循先到先上的原则，而栈的特性是先进后出，所以应该用队列更合适
//	int i = 0, passengerCar = 0, j = 0;
//	int c;//接收出队车
//	bool enQueue(Squeue*, int, int);
//	bool isEmpty(Squeue*);
//	bool deQueue(Squeue*, int*, int);
//	for (; arrCar[i] == 1 || arrCar[i] == 2; i++) {
//		if (arrCar[i] == 2 && passengerCar < 4) {//如果是货车且之前还没有4辆客车，入栈
//			enQueue(sq, arrCar[i],MAXSIZE);
//		}
//		else {//若是客车，直接入arrArrange
//			if (passengerCar == 4) {//若之前已有连续4辆客车，出队入货车
//				if (!isEmpty(sq)) {
//					deQueue(sq,&c,MAXSIZE);
//					arrArrange[j++] = c;
//					passengerCar = 0;//重新计数
//				}
//			}
//			arrArrange[j++] = arrCar[i];
//			passengerCar++;//连续客车数加一
//		}
//	}
//	while (!isEmpty(sq)) {//队内元素不空，加入到arrArrange
//		deQueue(sq, &c, MAXSIZE);
//		arrArrange[j++] = c;
//	}
//}
//int main() {
//	int arrCar[] = { 2,1,2,1,1,1,1,2,2,2,1,1 };//我们用1代表客车，用2发表货车,arrCar代表当前的车序列，然后我们需要重排
//	int arrArrange[20] = { 0 };//初始化为0，接收重排的车队
//	Squeue* sq = (Squeue*)malloc(sizeof(Squeue));
//	Squeue* createQueue(int);
//	sq = createQueue(MAXSIZE);
//	manageCar(arrCar, arrArrange, sq);
//	for (int i = 0; i < 10; i++) {//取10辆车出来
//		printf("%d ", *(arrArrange + i));
//	}
//	return 0;
//}
/*

B站：北街lhy
配套视频链接：
https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
*/