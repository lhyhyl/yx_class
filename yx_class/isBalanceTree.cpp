///*
//	���ö�����������˼���дһ���ж϶������Ƿ��Ƕ���ƽ�������㷨
//	������
//		���ǿ��Բ�ȡ�����������ɸ��㷨����Ϊ����������Ậ���ظ����㡣
//		���Ƕ�ÿһ���ڵ�����жϣ��������������ƽ�������������߶Ȳ�С�ڵ���1����ýڵ�ƽ��
//
//*/
//struct Tree {
//	int data;
//	Tree* left, * right;
//};
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//Tree* create(Tree* T) {//���򴴽�һ�Ŷ�����
//	int data;
//	printf("�����뵱ǰ�ڵ�ֵ��data=");
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
//	if (!T) return true;//�սڵ�϶��Ƕ���ƽ����
//	if (isAVL(T->left) && isAVL(T->right)) {//����������ƽ���Ҹ߶Ȳ�С�ڵ���1����ƽ���
//		int ldepth = getHigh(T->left);
//		int rdepth = getHigh(T->right);
//		int diff = ldepth - rdepth;
//		if (abs(diff) <= 1) {
//			return true;
//		}
//	}
//	return false;//�����κ��������ƽ��
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
//	if (isAVL2(T->left,ldepth) && isAVL2(T->right,rdepth)) {//����������ƽ���Ҹ߶Ȳ�С�ڵ���1����ƽ���
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
//	T = create(T);//����һ�Ŷ�����
//	int depth = 0;
//	isAVL2(T,depth) ? printf("�Ƕ���ƽ����") : printf("���Ƕ���ƽ����");
//	return 0;
//}