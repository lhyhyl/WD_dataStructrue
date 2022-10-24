//#include <stdio.h>
//#include <stdlib.h>
//#define TRUE 1
//#define FALSE 0
//typedef int Status;
//#define LH +1
//#define EH 0
//#define RH -1
//
///* 二叉树的二叉链表结点结构定义 */
//typedef struct BiTNode {
//	int data;
//	int bf;	//平衡因子
//	struct BiTNode* lchild, * rchild;	//左右孩子 
//}BiTNode, * BiTree;
//
///* 对以p为根的二叉排序树作右旋处理，
//	处理之后p指向新的树根节点，即旋转处理之前的左子树的根节点 */
//void R_Rotate(BiTree* p) {
//	BiTree L;
//	L = (*p)->lchild;	//L指向P的左子树根节点 
//	(*p)->lchild = L->rchild;
//	L->rchild = (*p);
//	*p = L;	//P指向新的根节点 
//}
//
///* 左旋 */
//void L_Rotate(BiTree* p) {
//	BiTree R;
//	R = (*p)->rchild;	//指向p的右子树根结点
//	(*p)->rchild = R->lchild;
//	R->lchild = (*p);
//	*p = R;
//}
//
///* 左平衡处理 */
//void LeftBalance(BiTree* T) {
//	BiTree L, Lr;
//	L = (*T)->lchild;	//L指向T的左子树根结点，也就是新插入结点的父节点 
//	switch (L->bf) {	//检查T的左子树的平衡度，并作相应平衡处理
//	case LH:	//新结点插入在T的左孩子的左子树上，要作单右旋处理，单右旋的结果就是，平衡度变为0,0,0
//		(*T)->bf = L->bf = EH;
//		R_Rotate(T);
//		break;
//	case RH:		//新结点插入在T的左孩子的右子树上，要作双旋处理
//		Lr = L->rchild;	//Lr指向T的左孩子的右子树根
//		switch (Lr->bf) {	//修改T及其左孩子的平衡因子
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
//		Lr->bf = EH;	//平衡因子设为0 
//		L_Rotate(&(*T)->lchild);	//对T的左子树作左旋平衡处理，这步是为了平衡因子bf的符号统一 
//		R_Rotate(T);	//对T作右旋平衡处理
//	}
//}
//
///* 右平衡处理 */
//void RightBalance(BiTree* T) {
//	BiTree R, Rl;
//	R = (*T)->rchild;	//L指向T的左子树根结点
//	switch (R->bf) {	//检查T的左子树的平衡度，并作相应平衡处理
//	case RH:		//新结点插入在T的左孩子的右子树上，要作左旋处理
//		(*T)->bf = R->bf = EH;
//		L_Rotate(T);
//		break;
//	case LH:	//新结点插入在T的左孩子的左子树上，要作单右旋处理
//		Rl = R->lchild;	//Lr指向T的左孩子的右子树根
//		switch (Rl->bf) {	//修改T及其左孩子的平衡因子
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
//		Rl->bf = EH;	//平衡因子设为0 
//		R_Rotate(&(*T)->rchild);	//对T的右子树作右旋平衡处理
//		L_Rotate(T);	//对T作左旋平衡处理
//	}
//}
//
///* 若在平衡的二叉排序树T中不存在和e有相同关键字的结点，则插入一个 */
///* 数据元素为e的新结点并返回1，否则返回0。若因插入而使二叉排序树失去平衡，则作平衡旋转处理，布尔变量taller反映T长高与否 */
//Status InsertAVL(BiTree* T, int e, Status* taller) {
//	if (!*T) {	//插入新结点，树"长高"，置taller为TRUE
//		*T = (BiTree)malloc(sizeof(BiTNode));
//		(*T)->data = e;
//		(*T)->lchild = (*T)->rchild = NULL;	//新结点左右孩子为空 
//		(*T)->bf = EH;	//新结点平衡因子为0 
//		*taller = TRUE;	//插入结点后，树长高 
//	}
//	else {
//		if (e == (*T)->data) {	//树中已存在和e有相同关键字的结点则不再插入
//			*taller = FALSE;	//有相同的结点，所以没有插入，树没有长高 
//			return FALSE;
//		}
//		if (e < (*T)->data) {	//应继续在T的左子树中进行搜索
//			if (!InsertAVL(&(*T)->lchild, e, taller))	//未插入结点 
//				return FALSE;
//			//已插入到T的左子树中且左子树"长高"，如果已经插入了结点，但是树没有长高（即在子树中已经调整了平衡度 
//			if (taller) {
//				switch ((*T)->bf) {	//检查T的平衡度
//				case LH:
//					//原本左子树比右子树高，需要作左平衡处理，那么插入一个结点在左子树里，
//					//左子树高度变为2，需要调整 
//					LeftBalance(T);		//左平衡调整 
//					*taller = FALSE;	//调整后树没有长高 
//					break;
//				case EH:	//原本左右子树等高，现因左子树增高而树增高
//					(*T)->bf = LH;
//					*taller = TRUE;	//左子树多了一个孩子，肯定长高了，但是平衡度为1，是最小不平衡树，无需调整 
//					break;
//				case RH:	//原本右子树比左子树高，现在左右子树等高
//					(*T)->bf = EH;
//					*taller = FALSE;
//					break;
//				}
//			}
//		}
//		else {	//继续在T的右子树中进行搜索
//			if (!InsertAVL(&(*T)->rchild, e, taller))	//未插入
//				return FALSE;
//			if (*taller) {	//已插入到T的右子树且右子树"长高"
//				switch ((*T)->bf) {	//检查T的平衡度
//				case LH:	//原本左子树比右子树高
//					(*T)->bf = EH;
//					*taller = FALSE;
//					break;
//				case EH:	//原本左右子树等高，现因右子树增高而树增高
//					(*T)->bf = RH;
//					*taller = TRUE;
//					break;
//				case RH:	//原本右子树比左子树高，需要作右平衡处理
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
//	BiTree T = NULL;	//指向BiTNode的指向置空 
//	Status taller;	//树是否长高标志 
//	for (i = 0; i < 10; i++)
//		InsertAVL(&T, a[i], &taller);	//插入结点到AVL树 
//	return 0;
//}
