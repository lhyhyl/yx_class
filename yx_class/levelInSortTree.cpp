// struct Tree {
//	int data;
//	Tree* left, * right;
//};
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
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
//	//����һ�Ŷ���������
//	Tree* T = (Tree*)malloc(sizeof(Tree*));
//	T = create(T);
//	int p = 3, depth = 1;//�ֶ�ָ���ڵ�ֵ
//	findLevel(T, p, depth);
//	printf("�ýڵ����ڵĲ��Ϊ��%d��", depth);
//	return 0;
//}