//
///*
//	�ж��Ƿ����EL·��
//*/
//
//#include <stdio.h>
//#include <stdlib.h>
//#include "AMGraphStruct.h"//ͨ��ͷ�ļ������ڽӾ���ṹ��
//
//int judgeEL(AMGraph* g) {
//	int degree, i, j, count = 0;
//	for (i = 0; i < g->numV; i++) {
//		degree = 0;
//		for (j = 0; j < g->numV; j++) {
//			degree += g->Edge[i][j] >=1 && g->Edge[i][j]<32767 ? 1 : 0;//��������ж���û�б�
//
//		}
//		if (degree % 2 != 0) count++;
//	}
//	if (count == 0 || count == 2) return 1;
//	else return 0;
//}
//int  main() {
//
//	void createGraphFromFile(AMGraph*);
//	void dispGraph(AMGraph*);
//	AMGraph* G = (AMGraph*)malloc(sizeof(AMGraph));
//	createGraphFromFile(G);
//	dispGraph(G);
//	judgeEL(G) ? printf("����EL·��") : printf("������EL·��");
//	return 0;
//}
/*

Bվ������lhy
������Ƶ���ӣ�
https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
*/