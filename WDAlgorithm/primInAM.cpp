///*
//	prim�㷨�����ڽӾ���ʽ�洢��ͼ�е�ʵ��
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#define MAXSIZE 100 //�������ֵ
//#include <stdio.h>
//#include <stdlib.h>
//struct AMGraph {
//	int Vertex[MAXSIZE];
//	int Edge[MAXSIZE][MAXSIZE];
//	int numV, numE;//���㡢������
//};
//
//int getSum(AMGraph *G, int *prims) {//�����С��������Ȩֵ
//	int sum = 0;
//	for (int i = 1; i < G->numV; i++) {
//		int min = 32767;
//		for (int j = 0; j < i; j++) {
//			if (G->Edge[prims[j]][prims[i]] < min) {
//				min = G->Edge[prims[j]][prims[i]];//���ˣ���prims[j]д����j�����ҵ����˺þã�����
//			}
//		}
//		sum += min;
//	}
//	return sum;
//}
//void prim(AMGraph *G, int start) {
//	int prims[MAXSIZE];//�洢��С�������������
//	int lowCost[MAXSIZE];//��ǰ�Ѽ�����С���������ڽӶ���ıߵ�Ȩֵ
//	int min, record, index = 0;//������Сֵ������
//	lowCost[start] = 0;//�Լ����Լ��ľ���Ϊ0
//	prims[index++] = start;
//	int m = 0;
//	while (m<G->numV) {
//		lowCost[m] = G->Edge[start][m];
//		m++;
//	}
//    //	for (int i = 0; i < G->numV; i++) {
//	//	  lowCost[i] = G->Edge[start][i];//�ѵ�ǰ���붥����������Ӷ���ıߵ�Ȩֵ����
//	//}
//	for (int i = 1; i < G->numV; i++) {//���б���������һ�μ���һ������
//		min = 32767;
//		for (int j = 0; j < G->numV; j++) {
//			if (lowCost[j] != 0 && lowCost[j] < min) {//�����ǰ����δ��������С������С��Ŀǰ��Сֵ������
//				min = lowCost[j];
//				record = j;//��¼������Ϣ
//			}
//
//		}
//		//���ҵ���Сֵ,����prims����
//		prims[index++] = record;
//		lowCost[record] = 0;//����record��������Ϊ�ѷ��ʣ����������Ѽ�����С������
//		//���ж���δ��������������lowCost����
//		for (int j = 0; j < G->numV; j++) {
//			if (lowCost[j] && G->Edge[record][j] < lowCost[j]) {
//				lowCost[j] = G->Edge[record][j];
//				/*
//					�����������⣬ΪʲôҪ�滻��Ȼ��Ϊʲô���������滻��
//					���Ȼش��һ������Ϊ����ķ�㷨��ÿ�θ������Ǽ���ĵ�ȥѰ��Ŀǰ���������С�ߣ�
//									��������ÿ����һ�����㶼Ҫ�����жϣ�����Ķ����Ƿ���ĳЩ�����
//									�ɴ������
//					�ڶ������⣺    ����ÿ��ȷ��һ�����㣬Ҳ����ζ��һ����Ҳȷ�������������Դ�ʱ�¼��붥��
//									�����ඥ��ľ�����С��֮ǰ�ľ��룬����Ҫ���и���
//									��������� 1 2 3����1 3 ȷ����1 3 �ߵ�ȨֵΪ1�����ǵ�Ŀ����������Ȩֵ
//									��С������֪��֮ǰ1��2ȨֵΪ6����Ȩֵ��Ϊ1 + 6 = 7������ʱ3 �� 2��Ϊ5 
//									С�� 6������Ҫ���и����滻��
//				*/
//			}
//		}
//
//	}
//	printf("%d ", getSum(G, prims));
//	for (int i = 0; i < G->numV; i++) {
//		printf("%c ", G->Vertex[prims[i]]);
//	}
//}
//void prim2(AMGraph* G, int start) {
//	int flag[MAXSIZE];//�������
//	int lowCost[MAXSIZE];//��ǰ�Ѽ�����С���������ڽӶ���ıߵ�Ȩֵ
//	int prims[MAXSIZE];//�洢��С�������������
//	int record,index=0;
//	for (int i = 0; i < G->numV; i++) {
//		lowCost[i] = G->Edge[start][i];//��ʼ��start��������ľ���
//		prims[i] = 0;//��ʼ��
//		flag[i] = 0;
//	}
//	flag[start] = 1;//����Ķ�����Ϊ�ѷ���
//	prims[index++] = start;
//	for (int i = 1; i < G->numV; i++) {//��ΪԴ���Ѽ��뼯�ϣ��򹲽���G->numV-1��ѭ��
//		int min = 32767;
//		//��Ŀǰ�ܵ����Ȩֵ��С����
//		for (int j = 0; j < G->numV; j++) {
//			if (!flag[j] && lowCost[j] < min) {//lowCost��Ϊ0����δ���ʹ�
//				min = lowCost[j];
//				record = j;
//			}
//		}
//		flag[record] = 1;
//		prims[index++] = record;//һ������������m����ֵ��Ϊrecord��������record���Ķ���ָ��m���Ķ���Ŀǰ�������record��m��ǰ��
//		//�����Ǽ����¶���ʱ������Ҫ�жϼ����¶�����Ƿ�·�������̣�����������������Ҫ����lowCost
//		for (int m = 0; m < G->numV; m++) {
//			if (!flag[m] && lowCost[m] > G->Edge[record][m]) {//��ǰ ��¼�Ĵ�Դ�㵽record�ľ��� ���� ����record��ľ��룬���и��£���
//				lowCost[m] = G->Edge[record][m] ;
//			}
//		}
//	}
//	printf("%d ", getSum(G, prims));
//	for (int i = 0; i < G->numV; i++) {
//		printf("%c ", G->Vertex[prims[i]]);
//	}
//}
//int main() {
//	void createGraphFromFile(AMGraph *);
//	void dispGraph(AMGraph *G);
//	//AMGraph *G=(AMGraph*)malloc(sizeof(AMGraph));
//	AMGraph G;
//	createGraphFromFile(&G);
//	dispGraph(&G);
//	prim2(&G, 0);
//	return 0;
//}