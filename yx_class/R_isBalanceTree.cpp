///*
//	利用二叉树遍历的思想编写一个判断二叉树是否是二叉平衡树的算法
//	分析：
//		我们可以采取后序遍历来完成该算法，因为后序遍历不会含有重复计算。
//		我们对每一个节点进行判断，如果左右子树均平衡且左右子树高度差小于等于1，则该节点平衡
//
//*/
//struct biTree {
//	int data;
//	biTree* left, * right;
//};
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//bool AVL(biTree* T, int& depth) {
//	if (!T) {
//		depth = 0;
//		return true;
//	}
//	int ldepth = 0, rdepth = 0;
//	if (AVL(T->left,ldepth) && AVL(T->right,rdepth)) {
//		int diff = ldepth - rdepth;
//		if (abs(diff) < 2) {
//			depth = ldepth > rdepth ? ldepth + 1 : rdepth + 1;
//			return true;
//		}
//	}
//	return false;
//}
//
//
//int main() {
//	biTree* T = NULL;
//	biTree* create(biTree*);
//	T = create(T);//创建一颗二叉树
//	int depth = 0;
//	AVL(T, depth) ? printf("是平衡二叉树"): printf("不是平衡二叉树");
//	return 0;
//}