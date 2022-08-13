///*
//	采用递归的方式求二叉树的高度
//*/
//struct biTree {
//	char data;
//	biTree* lchild, * rchild;
//};
//#include <stdio.h>
//#include <stdlib.h>
//int getHigh(biTree* T) {
//	int l = 0, r = 0;
//	//if (!T->lchild&&!T->rchild)
//	if(!T)
//		return 0;
//	else {
//		if (T->lchild)
//			l = getHigh(T->lchild);
//		if (T->rchild)
//			r = getHigh(T->rchild);
//		/*if (l >= r)
//			return l + 1;
//		if (l < r)
//			return r + 1;*/
//		int depth = l > r ? l + 1 : r + 1;
//		return depth;
//	}
//}
//int main() {
//	biTree* T = (biTree*)malloc(sizeof(biTree));
//	biTree* create(biTree*);
//	T = create(T);
//	printf("%d", getHigh(T));
//
//	return 0;
//}