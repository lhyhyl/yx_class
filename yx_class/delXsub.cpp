///*
//	已知二叉树以二叉链表存储，编写算法完成：对于树中每一个元素值为x的结点，删除以它为根的子树，并释放相应的空间
//	分析：
//		因为我们要删除以寻找到的元素为根的子树，所以我们删除时应采用递归后序遍历进行删除释放，寻找x采用先序遍历
//*/
//struct biTree {
//	char data;
//	biTree* lchild;
//	biTree* rchild;
//};
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//void del(biTree* T) {//释放结点函数
//	if (T) {
//		del(T->lchild);
//		del(T->rchild);
//		free(T);
//	}
//}
//void delXsub(biTree* T, int x) {
//	if (T->lchild&&T->lchild->data == x) {
//		del(T->lchild);//删除左子树
//		T->lchild = NULL;
//	}
//	if (T->rchild && T->rchild->data == x) {
//		del(T->rchild);//删除右子树
//		T->rchild = NULL;
//	}
//	if (T->lchild)
//		delXsub(T->lchild, x);
//	if (T->rchild)
//		delXsub(T->rchild, x);
//
//}
//int main() {
//	char x;
//	biTree* T = (biTree*)malloc(sizeof(biTree));
//	biTree* create(biTree*);
//	void inOrder(biTree*);
//	T = create(T);//创建一颗二叉树
//	printf("请输入要寻找的x值：x=");
//	scanf("%c", &x);
//	if (T->data == x) {
//		del(T);
//	}
//	else {
//		delXsub(T, x);
//	}
//	inOrder(T);
//	return 0;
//}