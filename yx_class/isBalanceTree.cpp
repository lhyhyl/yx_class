///*
//	利用二叉树遍历的思想编写一个判断二叉树是否是二叉平衡树的算法
//	分析：
//		我们可以采取后序遍历来完成该算法，因为后序遍历不会含有重复计算。
//		我们对每一个节点进行判断，如果左右子树均平衡且左右子树高度差小于等于1，则该节点平衡
//
//*/
//struct Tree {
//	int data;
//	Tree* left, * right;
//};
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
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
//int getHigh(Tree* T) {
//	int l = 0, r = 0;
//	if (T == NULL)
//		return 0;
//	else {
//		l = getHigh(T->left);
//		r = getHigh(T->right);
//		int h = l > r ? l + 1 : r + 1;
//		return h;
//	}
//}
//bool isAVL(Tree* T) {
//	if (!T) return true;//空节点肯定是二叉平衡树
//	if (isAVL(T->left) && isAVL(T->right)) {//左右子树都平衡且高度差小于等于1，是平衡的
//		int ldepth = getHigh(T->left);
//		int rdepth = getHigh(T->right);
//		int diff = ldepth - rdepth;
//		if (abs(diff) <= 1) {
//			return true;
//		}
//	}
//	return false;//其他任何情况都不平衡
//	/*static int hl = 0, hr = 0;
//	if (T->left) {
//		hl++;
//		isAVL(T->left,depth);
//	}
//	if (T->right) {
//		hr++;
//		isAVL(T->right, depth);
//	}
//	if (abs(hl - hr) < 2)
//		return true;
//	else
//		return false;*/
//
//}
//bool isAVL2(Tree* T, int& depth) {
//	if (!T) {
//		depth = 0;
//		return true;
//	}
//	int ldepth = 0, rdepth = 0;
//	if (isAVL2(T->left,ldepth) && isAVL2(T->right,rdepth)) {//左右子树都平衡且高度差小于等于1，是平衡的
//		int diff = ldepth - rdepth;
//		if (abs(diff) <= 1) {
//			depth = ldepth < rdepth ? rdepth + 1 : ldepth + 1;
//			return true;
//		}
//	}
//	return false;
//}
//
//int main() {
//	Tree* T = (Tree*)malloc(sizeof(Tree*));
//	T = create(T);//创建一颗二叉树
//	int depth = 0;
//	isAVL2(T,depth) ? printf("是二叉平衡树") : printf("不是二叉平衡树");
//	return 0;
//}