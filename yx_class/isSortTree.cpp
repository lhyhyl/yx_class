///*
//	��дһ���㷨�жϸ����Ķ������Ƿ��Ƕ���������
//	������
//		
//*/
//typedef struct node {
//	int data;
//	node *left, *right;
//}Tree;
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//Tree *create(Tree *T) {//���򴴽�һ�Ŷ�����
//	int data;
//	printf("�����뵱ǰ�ڵ�ֵ��data=");
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
//	//�ȴ���һ�Ŷ�����
//	Tree *T = (Tree *)malloc(sizeof(Tree *));
//	T = create(T);
//	isSortTree(T) ? printf("�Ƕ���������") : printf("���Ƕ���������");
//	return 0;
//}