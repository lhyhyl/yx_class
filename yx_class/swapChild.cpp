///*
//	试编写一个算法将一颗二叉树的所有节点的左右子树进行交换。
//	分析：
//		我们仍然可以采用递归的方式进行交换
//*/
//struct biTree {
//	char data;
//	biTree *lchild;
//	biTree *rchild;
//};
//#include <stdio.h>
//#include <stdlib.h>
//void swapTree(biTree *T) {//其本质就是从叶子节点开始进行交换，一路推进到根节点
//	biTree *temp;
//	if (T) {
//		swapTree(T->lchild);
//		if (T->lchild != NULL || T->rchild != NULL) {
//			temp = T->lchild;
//			T->lchild = T->rchild;
//			T->rchild = temp;
//		}
//		swapTree(T->rchild);
//	}
//}
//int main() {
//	int num;
//	biTree *T = (biTree*)malloc(sizeof(biTree));
//	biTree *create(biTree *);
//	void inOrder(biTree *);
//	T = create(T);//创建一颗二叉树
//	inOrder(T);
//	printf("\n");
//	swapTree(T);
//	inOrder(T);
//	return 0;
//}