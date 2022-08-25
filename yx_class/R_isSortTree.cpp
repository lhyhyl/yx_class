////判断二叉树是否是二叉排序树
//#include <stdio.h>
//struct biTree{
//	int data;
//	biTree* lchild, * rchild;
//};
//bool isSortTree(biTree* T) {
//	static int tmp=-999;
//	static int flag = 1;
//	if (T) {
//		isSortTree(T->lchild);
//		if (T->data > tmp) {
//			tmp = T->data;
//		}
//		else
//			flag = 0;
//		isSortTree(T->rchild);
//		
//	}
//	return flag;
//}
//
//
//
//
//
//
//int main() {
//	biTree* T = NULL;
//	biTree* create(biTree*);
//	T = create(T);//创建一颗二叉树
//	isSortTree(T) ? printf("是二叉排序树"): printf("不是二叉排序树");
//	return 0;
//}