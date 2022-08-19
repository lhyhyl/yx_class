// struct Tree {
//	int data;
//	Tree* left, * right;
//};
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//Tree* create(Tree* T) {//先序创建一颗二叉树
//	int data;
//	printf("请输入当前节点值：data=");
//	scanf("%d", &data);
//	getchar();
//	if (data != -1) {
//		T = (Tree*)malloc(sizeof(Tree));
//		T->data = data;
//		T->left = NULL;
//		T->right = NULL;
//		T->left = create(T->left);
//		T->right = create(T->right);
//	}
//	return T;
//}
//void findLevel(Tree* T, int p, int& depth) {
//	/*while (T) {
//		if (T->data > p) {
//			T = T->left;
//			depth++;
//		}
//		else if (T->data < p) {
//			T = T->right;
//			depth++;
//		}
//		else
//			break;
//	}*/
//	if (T) {
//		if (T->data > p) {
//			depth++;
//			findLevel(T->left,p,depth);
//		}
//		else if (T->data < p) {
//			depth++;
//			findLevel(T->right, p, depth);
//		}
//	}
//}
//int main() {
//	//创建一颗二叉排序树
//	Tree* T = (Tree*)malloc(sizeof(Tree*));
//	T = create(T);
//	int p = 3, depth = 1;//手动指定节点值
//	findLevel(T, p, depth);
//	printf("该节点所在的层次为第%d层", depth);
//	return 0;
//}