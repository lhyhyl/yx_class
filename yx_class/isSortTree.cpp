///*
//	编写一个算法判断给定的二叉树是否是二叉排序树
//	分析：
//		
//*/
//typedef struct node {
//	int data;
//	node *left, *right;
//}Tree;
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//Tree *create(Tree *T) {//先序创建一颗二叉树
//	int data;
//	printf("请输入当前节点值：data=");
//	scanf("%d", &data);
//	getchar();
//	if (data != -1) {
//		T = (Tree *)malloc(sizeof(Tree));
//		T->data = data;
//		T->left = NULL;
//		T->right = NULL;
//		T->left = create(T->left);
//		T->right = create(T->right);
//	}
//	return T;
//}
//bool isSortTree(Tree *T) {
//	static int flag = 1;
//	static int tmp = -999;
//	if (T) {
//		isSortTree(T->left);
//		if (T->data < tmp) {
//			flag = 0;
//		}
//		tmp = T->data;
//		isSortTree(T->right);
//		
//	}
//	return flag;
//}
//int main() {
//	//先创建一颗二叉树
//	Tree *T = (Tree *)malloc(sizeof(Tree *));
//	T = create(T);
//	isSortTree(T) ? printf("是二叉排序树") : printf("不是二叉排序树");
//	return 0;
//}