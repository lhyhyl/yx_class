///*
//	������������ö�������洢�������һ���㷨,����������е�k��1<=k<=�������Ľڵ���������ڵ��ֵ
//	������
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
//	T = create(T);//����һ�Ŷ�����
//	nodeNum(T, &count);
//	if (!count) {
//		printf("�ö������ǿ���");
//	}
//	else {
//		printf("������ҪѰ�ҵ�kֵ��1<=k<=%d����k=", count);
//		scanf("%d", &k);
//		while (k<1 || k>count) {
//			printf("�������������� k=");
//			scanf("%d", &k);
//		}
//		r = preK(T, k);
//		printf("��%d���ڵ�ֵΪ%c", k, r->data);
//	}
//
//	return 0;
//}