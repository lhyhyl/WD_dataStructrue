//#define MAXSIZE 100
//#include <stdio.h>
//#include <stdlib.h>
// #include "biTreeStruct.h"//ͨ��ͷ�ļ����ض������ṹ��
//bool judge(biTree* root1, biTree* root2) {
//    if (root2 == NULL)   //��root2�����꣬����true
//        return true;
//    if (root1 == NULL)   //��root1�����꣬root2ȷ��û�б����꣬�򷵻�false
//        return false;
//
//    if (root1->data != root2->data)   //��������һ����㲻��ȣ�����false
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
//    if (pRoot1->data == pRoot2->data) {   //�����ڵ����Ŀ���㣬�������ж�
//        res = judge(pRoot1, pRoot2);
//    }
//
//    if (!res) {     //������������Ŀ�����ж�
//        res = HasSubtree(pRoot1->lchild, pRoot2);
//    }
//
//    if (!res) {    //������������Ŀ�����ж�
//        res = HasSubtree(pRoot1->rchild, pRoot2);
//    }
//
//    return res;  //�������ս��
//}
////������:����֪������������Ψһȷ��һ�Ŷ����������Ƿֱ��������������������������л���������
////KMP�㷨����ƥ���㷨���ж������������������Ƿ�������������м����жϣ���������:
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
//    //�����ĸ��������ڴ洢���������л�����
//    int KMP(char* S, char* T);
//    int preIndex = 0, inIndex = 0;
//    char* mainPreArr = (char*)malloc(sizeof(char) * len1);
//    char* mainInArr = (char*)malloc(sizeof(char) * len1);
//    char* subPreArr = (char*)malloc(sizeof(char) * len2);
//    char* subInArr = (char*)malloc(sizeof(char)* len2);
//
//    preOrder(pRoot1, mainPreArr,preIndex);//��������
//    preIndex = 0;
//    preOrder(pRoot2, subPreArr,preIndex);//��������
//    inOrder(pRoot1, mainInArr,inIndex);//��������
//    inIndex = 0;
//    inOrder(pRoot2,subInArr,inIndex);//��������
//
//	return KMP(mainPreArr, subPreArr) != -1 && KMP(mainInArr, subInArr) != -1;//������������Ϊ�����У���Ϊ����
//
//
//}
//int main() {
//    biTree* T1 = (biTree*)malloc(sizeof(biTree));
//    biTree *T2 = (biTree *)malloc(sizeof(biTree));
//	biTree *create(biTree *,int);
//    void nodeNum(biTree * T, int* num);
//    printf("�������������ݣ�\n");
//    T1 = create(T1, 1);
//    printf("�������������ݣ�\n");
//    T2 = create(T2, 1);
//    
//    int num1 = 0;//T1�ڵ����
//    int num2 = 0;//T2�ڵ����
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
//Bվ������lhy
//������Ƶ���ӣ�
//https://www.bilibili.com/video/BV1mh411Y75c?spm_id_from=333.999.0.0
//*/