///*
//	д����ͼ���ڽӱ��ʾת�����ڽӾ����ʾ���㷨
//	������
//		����֮ǰҲд���ڽӾ���Ĵ洢��ʽ�����������Ǿ�ֻ��Ҫȥ�����ڽӱ��е�ÿһ�����㣬
//		�����ݱߵ���Ϣ�������������ڽӾ����м���
//*/
//#include <stdio.h>
//#include <stdlib.h>
//#include "ALGraphStruct.h"//ͨ��ͷ�ļ������ڽӱ�ṹ��
//#include "AMGraphStruct.h"//ͨ��ͷ�ļ������ڽӾ���ṹ��
//void edgeIput(ALGraph *alG, AMGraph *amG, int index, int *visited) {
//	visited[index] = 1;//���Ϊ�ѷ���
//	for (EdgeNode *p = alG->adjlist[index].firstEdge; p; p = p->next) {
//		amG->Edge[index][p->index] = p->weight;//����Ϣ�����ڽӾ���
//		if (!visited[p->index])
//			edgeIput(alG, amG, p->index, visited);
//	}
//}
//void transform(ALGraph *alG, AMGraph *amG) {//��ʼ����ת��
//	
//	amG->numE = alG->numE;
//	amG->numV = alG->numV;
//	for (int v = 0; v < amG->numV; v++) {
//		amG->Vertex[v] = alG->adjlist[v].info;//������Ϣ�����ڽӾ���
//	}
//	//��ʼ��ͼ
//	for (int i = 0; i < amG->numV; i++) {
//		for (int j = 0; j < amG->numV; j++) {
//			i == j ? amG->Edge[i][j] = 0 : amG->Edge[i][j] = 32767;
//		}
//	}
//	for (int v = 0; v < amG->numV; v++) {
//		//�������Ϣ
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
//	void createGraphInFile(ALGraph*);//��������
//	void dispGraph(AMGraph *);
//	createGraphInFile(&alG);//����ͼG
//	transform(&alG, &amG);
//	dispGraph(&amG);
//	return 0;
//}
/*

Bվ������lhy
������Ƶ���ӣ�
https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
*/