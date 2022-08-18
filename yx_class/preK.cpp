///*
//	假设二叉树是用二叉链表存储，试设计一个算法,求先序遍历中第k（1<=k<=二叉树的节点个数）个节点的值
//	分析：
//		
//*/
//struct biTree {
//	char data;
//	biTree *lchild;
//	biTree *rchild;
//};
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//biTree *preK(biTree *T, int k) {
//	/*static int count = 1;
//	if (T->lchild != NULL&&T->rchild!=NULL) {
//		if (count == k) {
//			printf("%d", T->data);
//		}
//		preK(T->lchild,k);
//		count++;
//		preK(T->rchild,k);
//		count++;
//	}*/
//	static int count = k;
//	biTree* r = (biTree*)malloc(sizeof(biTree));
//	if (T) {
//		if (!--count) {
//			r = T;
//			printf("%c ",T->data);
//		}
//		if(T->lchild)preK(T->lchild, k);
//		if (T->rchild)preK(T->rchild, k);
//	}
//	return r;
//}
//int main() {
//	int k, count = 0;
//	biTree *T = (biTree*)malloc(sizeof(biTree));
//	T->lchild = NULL;
//	T->rchild = NULL;
//	T->data = NULL;
//	biTree *r;
//	biTree *create(biTree *);
//	void inOrder(biTree *);
//	void nodeNum(biTree *, int *);
//	T = create(T);//创建一颗二叉树
//	nodeNum(T, &count);
//	if (!count) {
//		printf("该二叉树是空树");
//	}
//	else {
//		printf("请输入要寻找的k值（1<=k<=%d）：k=", count);
//		scanf("%d", &k);
//		while (k<1 || k>count) {
//			printf("输入有误，请重输 k=");
//			scanf("%d", &k);
//		}
//		r = preK(T, k);
//		printf("第%d个节点值为%c", k, r->data);
//	}
//
//	return 0;
//}