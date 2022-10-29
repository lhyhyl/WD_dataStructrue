//
///*
//	判断是否存在EL路径
//*/
//
//#include <stdio.h>
//#include <stdlib.h>
//#include "AMGraphStruct.h"//通过头文件加载邻接矩阵结构体
//
//int judgeEL(AMGraph* g) {
//	int degree, i, j, count = 0;
//	for (i = 0; i < g->numV; i++) {
//		degree = 0;
//		for (j = 0; j < g->numV; j++) {
//			degree += g->Edge[i][j] >=1 && g->Edge[i][j]<32767 ? 1 : 0;//这里进行判断有没有边
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
//	judgeEL(G) ? printf("存在EL路径") : printf("不存在EL路径");
//	return 0;
//}
/*

B站：北街lhy
配套视频链接：
https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
*/