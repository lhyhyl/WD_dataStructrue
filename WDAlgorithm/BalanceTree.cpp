//#include <stdio.h>
//#include <stdlib.h>
//#define TRUE 1
//#define FALSE 0
//typedef int Status;
//#define LH +1
//#define EH 0
//#define RH -1
//
///* �������Ķ���������ṹ���� */
//typedef struct BiTNode {
//	int data;
//	int bf;	//ƽ������
//	struct BiTNode* lchild, * rchild;	//���Һ��� 
//}BiTNode, * BiTree;
//
///* ����pΪ���Ķ�������������������
//	����֮��pָ���µ������ڵ㣬����ת����֮ǰ���������ĸ��ڵ� */
//void R_Rotate(BiTree* p) {
//	BiTree L;
//	L = (*p)->lchild;	//Lָ��P�����������ڵ� 
//	(*p)->lchild = L->rchild;
//	L->rchild = (*p);
//	*p = L;	//Pָ���µĸ��ڵ� 
//}
//
///* ���� */
//void L_Rotate(BiTree* p) {
//	BiTree R;
//	R = (*p)->rchild;	//ָ��p�������������
//	(*p)->rchild = R->lchild;
//	R->lchild = (*p);
//	*p = R;
//}
//
///* ��ƽ�⴦�� */
//void LeftBalance(BiTree* T) {
//	BiTree L, Lr;
//	L = (*T)->lchild;	//Lָ��T������������㣬Ҳ�����²�����ĸ��ڵ� 
//	switch (L->bf) {	//���T����������ƽ��ȣ�������Ӧƽ�⴦��
//	case LH:	//�½�������T�����ӵ��������ϣ�Ҫ�������������������Ľ�����ǣ�ƽ��ȱ�Ϊ0,0,0
//		(*T)->bf = L->bf = EH;
//		R_Rotate(T);
//		break;
//	case RH:		//�½�������T�����ӵ��������ϣ�Ҫ��˫������
//		Lr = L->rchild;	//Lrָ��T�����ӵ���������
//		switch (Lr->bf) {	//�޸�T�������ӵ�ƽ������
//		case LH:
//			(*T)->bf = RH;
//			L->bf = EH;
//			break;
//		case EH:
//			(*T)->bf = L->bf = EH;
//			break;
//		case RH:
//			(*T)->bf = EH;
//			L->bf = LH;
//			break;
//		}
//		Lr->bf = EH;	//ƽ��������Ϊ0 
//		L_Rotate(&(*T)->lchild);	//��T��������������ƽ�⴦���ⲽ��Ϊ��ƽ������bf�ķ���ͳһ 
//		R_Rotate(T);	//��T������ƽ�⴦��
//	}
//}
//
///* ��ƽ�⴦�� */
//void RightBalance(BiTree* T) {
//	BiTree R, Rl;
//	R = (*T)->rchild;	//Lָ��T�������������
//	switch (R->bf) {	//���T����������ƽ��ȣ�������Ӧƽ�⴦��
//	case RH:		//�½�������T�����ӵ��������ϣ�Ҫ����������
//		(*T)->bf = R->bf = EH;
//		L_Rotate(T);
//		break;
//	case LH:	//�½�������T�����ӵ��������ϣ�Ҫ������������
//		Rl = R->lchild;	//Lrָ��T�����ӵ���������
//		switch (Rl->bf) {	//�޸�T�������ӵ�ƽ������
//		case LH:
//			(*T)->bf = RH;
//			R->bf = EH;
//			break;
//		case EH:
//			(*T)->bf = R->bf = EH;
//			break;
//		case RH:
//			(*T)->bf = EH;
//			R->bf = LH;
//			break;
//		}
//		Rl->bf = EH;	//ƽ��������Ϊ0 
//		R_Rotate(&(*T)->rchild);	//��T��������������ƽ�⴦��
//		L_Rotate(T);	//��T������ƽ�⴦��
//	}
//}
//
///* ����ƽ��Ķ���������T�в����ں�e����ͬ�ؼ��ֵĽ�㣬�����һ�� */
///* ����Ԫ��Ϊe���½�㲢����1�����򷵻�0����������ʹ����������ʧȥƽ�⣬����ƽ����ת������������taller��ӳT������� */
//Status InsertAVL(BiTree* T, int e, Status* taller) {
//	if (!*T) {	//�����½�㣬��"����"����tallerΪTRUE
//		*T = (BiTree)malloc(sizeof(BiTNode));
//		(*T)->data = e;
//		(*T)->lchild = (*T)->rchild = NULL;	//�½�����Һ���Ϊ�� 
//		(*T)->bf = EH;	//�½��ƽ������Ϊ0 
//		*taller = TRUE;	//������������� 
//	}
//	else {
//		if (e == (*T)->data) {	//�����Ѵ��ں�e����ͬ�ؼ��ֵĽ�����ٲ���
//			*taller = FALSE;	//����ͬ�Ľ�㣬����û�в��룬��û�г��� 
//			return FALSE;
//		}
//		if (e < (*T)->data) {	//Ӧ������T���������н�������
//			if (!InsertAVL(&(*T)->lchild, e, taller))	//δ������ 
//				return FALSE;
//			//�Ѳ��뵽T������������������"����"������Ѿ������˽�㣬������û�г��ߣ������������Ѿ�������ƽ��� 
//			if (taller) {
//				switch ((*T)->bf) {	//���T��ƽ���
//				case LH:
//					//ԭ�����������������ߣ���Ҫ����ƽ�⴦����ô����һ��������������
//					//�������߶ȱ�Ϊ2����Ҫ���� 
//					LeftBalance(T);		//��ƽ����� 
//					*taller = FALSE;	//��������û�г��� 
//					break;
//				case EH:	//ԭ�����������ȸߣ��������������߶�������
//					(*T)->bf = LH;
//					*taller = TRUE;	//����������һ�����ӣ��϶������ˣ�����ƽ���Ϊ1������С��ƽ������������� 
//					break;
//				case RH:	//ԭ�����������������ߣ��������������ȸ�
//					(*T)->bf = EH;
//					*taller = FALSE;
//					break;
//				}
//			}
//		}
//		else {	//������T���������н�������
//			if (!InsertAVL(&(*T)->rchild, e, taller))	//δ����
//				return FALSE;
//			if (*taller) {	//�Ѳ��뵽T����������������"����"
//				switch ((*T)->bf) {	//���T��ƽ���
//				case LH:	//ԭ������������������
//					(*T)->bf = EH;
//					*taller = FALSE;
//					break;
//				case EH:	//ԭ�����������ȸߣ��������������߶�������
//					(*T)->bf = RH;
//					*taller = TRUE;
//					break;
//				case RH:	//ԭ�����������������ߣ���Ҫ����ƽ�⴦��
//					RightBalance(T);
//					*taller = FALSE;
//					break;
//				}
//			}
//		}
//	}
//	return TRUE;
//}
//
//int main() {
//	int i;
//	int a[10] = { 1,2,3,4,5,6,7,10,9,8 };
//	BiTree T = NULL;	//ָ��BiTNode��ָ���ÿ� 
//	Status taller;	//���Ƿ񳤸߱�־ 
//	for (i = 0; i < 10; i++)
//		InsertAVL(&T, a[i], &taller);	//�����㵽AVL�� 
//	return 0;
//}
