///*
//	floyd�㷨��
//			���ǻ�����һ��dist�����path���飬dist������������i��j��Ȩֵ��
//			path������������i��j�����Ǹ�����
//*/
//#include <stdio.h>
//#include <stdlib.h>
//#include "AMGraphStruct.h"//ͨ��ͷ�ļ������ڽӾ���ṹ��
//
//void floyd(AMGraph *G,int path[][MAXSIZE]) {
//	int i, j, k;
//	int dist[MAXSIZE][MAXSIZE];
//	for (int m = 0; m < G->numV; m++) {
//		for (int n = 0; n < G->numV; n++) {
//			dist[m][n] = G->Edge[m][n];//��ʼ����������
//			path[m][n] = -1;//��ʼ��·��
//		}
//	}
//	for (k = 0; k < G->numV; k++) {//���μ������еĶ���
//		for (i = 0; i < G->numV; i++) {
//			for (j = 0; j < G->numV; j++) {
//				if (dist[i][j] > G->Edge[i][k] + G->Edge[k][j]) {//����k���и��̵ģ�����
//					dist[i][j] = G->Edge[i][k] + G->Edge[k][j];//����dist
//					path[i][j] = k;//path����
//				}
//			}
//		}
//	}
//	for (int i = 0; i < G->numV; i++)
//	{
//		for (int j = 0; j < G->numV; j++)
//			printf("%2d  ", dist[i][j]);
//		printf("\n");
//	}
//}
//void printPath(int path[][MAXSIZE],int vi,int vj) {
//	if (path[vi][vj]==-1) {//ֱ�����
//		printf("%d ",vj+1);
//	}
//	else {
//		int mid = path[vi][vj];
//		printPath(path, vi, mid);
//		printPath(path,mid,vj);
//	}
//}
//int main() {
//	void createGraphFromFile(AMGraph *);
//	void dispGraph(AMGraph *);
//	AMGraph *G = (AMGraph *)malloc(sizeof(AMGraph));
//	createGraphFromFile(G);
//	dispGraph(G);
//	int path[MAXSIZE][MAXSIZE];
//	floyd(G,path);
//	printPath(path,0,2);//������������յ㣬����Ҫ�����ͼ�ǲ��Ǵ�0��ʼ��
//	return 0;
//}
/*

Bվ������lhy
������Ƶ���ӣ�
https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
*/