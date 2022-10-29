#define MAXSIZE 100
//邻接矩阵节点类型 根据需要可设为整型或字符型
//#define AMTYPE char
#define AMTYPE int
//邻接矩阵
struct AMGraph {
	AMTYPE Vertex[MAXSIZE];
	int Edge[MAXSIZE][MAXSIZE];
	int numV, numE;//顶点、边数量
};