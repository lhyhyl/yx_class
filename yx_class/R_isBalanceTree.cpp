///*
//	���ö�����������˼���дһ���ж϶������Ƿ��Ƕ���ƽ�������㷨
//	������
//		���ǿ��Բ�ȡ�����������ɸ��㷨����Ϊ����������Ậ���ظ����㡣
//		���Ƕ�ÿһ���ڵ�����жϣ��������������ƽ�������������߶Ȳ�С�ڵ���1����ýڵ�ƽ��
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
//	T = create(T);//����һ�Ŷ�����
//	int depth = 0;
//	AVL(T, depth) ? printf("��ƽ�������"): printf("����ƽ�������");
//	return 0;
//}