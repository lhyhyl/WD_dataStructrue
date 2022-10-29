///*
//	写出从图的邻接表表示转换成邻接矩阵表示的算法
//	分析：
//		我们之前也写过邻接矩阵的存储方式，在这里我们就只需要去遍历邻接表中的每一个顶点，
//		并根据边的信息，将数据填入邻接矩阵中即可
//*/
//#include <stdio.h>
//#include <stdlib.h>
//#include "ALGraphStruct.h"//通过头文件加载邻接表结构体
//#include "AMGraphStruct.h"//通过头文件加载邻接矩阵结构体
//void edgeIput(ALGraph *alG, AMGraph *amG, int index, int *visited) {
//	visited[index] = 1;//标记为已访问
//	for (EdgeNode *p = alG->adjlist[index].firstEdge; p; p = p->next) {
//		amG->Edge[index][p->index] = p->weight;//边信息存入邻接矩阵
//		if (!visited[p->index])
//			edgeIput(alG, amG, p->index, visited);
//	}
//}
//void transform(ALGraph *alG, AMGraph *amG) {//开始进行转换
//	
//	amG->numE = alG->numE;
//	amG->numV = alG->numV;
//	for (int v = 0; v < amG->numV; v++) {
//		amG->Vertex[v] = alG->adjlist[v].info;//顶点信息存入邻接矩阵
//	}
//	//初始化图
//	for (int i = 0; i < amG->numV; i++) {
//		for (int j = 0; j < amG->numV; j++) {
//			i == j ? amG->Edge[i][j] = 0 : amG->Edge[i][j] = 32767;
//		}
//	}
//	for (int v = 0; v < amG->numV; v++) {
//		//存入边信息
//		EdgeNode *p = alG->adjlist[v].firstEdge;
//		while (p) {
//			amG->Edge[v][p->index] = p->weight;
//			p = p->next;
//		}
//	}
//}
//int main() {
//	ALGraph alG;
//	AMGraph amG;
//	void createGraphInFile(ALGraph*);//声明方法
//	void dispGraph(AMGraph *);
//	createGraphInFile(&alG);//创建图G
//	transform(&alG, &amG);
//	dispGraph(&amG);
//	return 0;
//}
/*

B站：北街lhy
配套视频链接：
https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
*/