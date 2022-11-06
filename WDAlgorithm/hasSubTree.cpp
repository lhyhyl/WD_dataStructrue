//#define MAXSIZE 100
//#include <stdio.h>
//#include <stdlib.h>
// #include "biTreeStruct.h"//通过头文件加载二叉树结构体
//bool judge(biTree* root1, biTree* root2) {
//    if (root2 == NULL)   //若root2遍历完，返回true
//        return true;
//    if (root1 == NULL)   //若root1遍历完，root2确还没有遍历完，则返回false
//        return false;
//
//    if (root1->data != root2->data)   //若其中有一个结点不相等，返回false
//        return false;
//
//    return judge(root1->lchild, root2->lchild) && judge(root1->rchild, root2->rchild);
//}
//bool HasSubtree(biTree* pRoot1, biTree* pRoot2)
//{
//    if (pRoot2 == NULL || pRoot1 == NULL)
//        return false;
//
//    bool res = false;
//
//    if (pRoot1->data == pRoot2->data) {   //若根节点等于目标结点，则向下判断
//        res = judge(pRoot1, pRoot2);
//    }
//
//    if (!res) {     //利用左子树于目标树判断
//        res = HasSubtree(pRoot1->lchild, pRoot2);
//    }
//
//    if (!res) {    //利用右子树于目标树判断
//        res = HasSubtree(pRoot1->rchild, pRoot2);
//    }
//
//    return res;  //返回最终结果
//}
////方法二:我们知道先序加中序可唯一确定一颗二叉树，我们分别将主树与子树做先序与中序序列化，再利用
////KMP算法或暴力匹配算法来判断子树的先序与中序是否均存在与主树中即可判断，代码如下:
//
//void preOrder(biTree*T,char *arr,int &index) {
//    if (T) {
//        arr[index++] = T->data;
//        preOrder(T->lchild, arr,index);
//        preOrder(T->rchild,arr,index);
//    }
//}
//void inOrder(biTree* T, char* arr, int& index) {
//    if (T) {
//        inOrder(T->lchild, arr,index);
//        arr[index++] = T->data;
//        inOrder(T->rchild, arr, index);
//    }
//}
//bool hasSubTree1(biTree* pRoot1, biTree* pRoot2,int len1,int len2) {
//    //创建四个数组用于存储二叉树序列化数据
//    int KMP(char* S, char* T);
//    int preIndex = 0, inIndex = 0;
//    char* mainPreArr = (char*)malloc(sizeof(char) * len1);
//    char* mainInArr = (char*)malloc(sizeof(char) * len1);
//    char* subPreArr = (char*)malloc(sizeof(char) * len2);
//    char* subInArr = (char*)malloc(sizeof(char)* len2);
//
//    preOrder(pRoot1, mainPreArr,preIndex);//主树先序
//    preIndex = 0;
//    preOrder(pRoot2, subPreArr,preIndex);//子树先序
//    inOrder(pRoot1, mainInArr,inIndex);//主树中序
//    inIndex = 0;
//    inOrder(pRoot2,subInArr,inIndex);//子树中序
//
//	return KMP(mainPreArr, subPreArr) != -1 && KMP(mainInArr, subInArr) != -1;//当先序与后序均为子序列，则为子树
//
//
//}
//int main() {
//    biTree* T1 = (biTree*)malloc(sizeof(biTree));
//    biTree *T2 = (biTree *)malloc(sizeof(biTree));
//	biTree *create(biTree *,int);
//    void nodeNum(biTree * T, int* num);
//    printf("请输入主树数据：\n");
//    T1 = create(T1, 1);
//    printf("请输入子树数据：\n");
//    T2 = create(T2, 1);
//    
//    int num1 = 0;//T1节点个数
//    int num2 = 0;//T2节点个数
//    nodeNum(T1,&num1);
//    nodeNum(T2,&num2);
//
//
//    //printf("%d",HasSubtree(T1,T2));
//    printf("%d", hasSubTree1(T1,T2,num1,num2));
//
//	return 0;
//}
///*
//
//B站：北街lhy
//配套视频链接：
//https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
//*/