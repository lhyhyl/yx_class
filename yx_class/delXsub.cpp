///*
//	��֪�������Զ�������洢����д�㷨��ɣ���������ÿһ��Ԫ��ֵΪx�Ľ�㣬ɾ������Ϊ�������������ͷ���Ӧ�Ŀռ�
//	������
//		��Ϊ����Ҫɾ����Ѱ�ҵ���Ԫ��Ϊ������������������ɾ��ʱӦ���õݹ�����������ɾ���ͷţ�Ѱ��x�����������
//*/
//struct biTree {
//	char data;
//	biTree* lchild;
//	biTree* rchild;
//};
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//void del(biTree* T) {//�ͷŽ�㺯��
//	if (T) {
//		del(T->lchild);
//		del(T->rchild);
//		free(T);
//	}
//}
//void delXsub(biTree* T, int x) {
//	if (T->lchild&&T->lchild->data == x) {
//		del(T->lchild);//ɾ��������
//		T->lchild = NULL;
//	}
//	if (T->rchild && T->rchild->data == x) {
//		del(T->rchild);//ɾ��������
//		T->rchild = NULL;
//	}
//	if (T->lchild)
//		delXsub(T->lchild, x);
//	if (T->rchild)
//		delXsub(T->rchild, x);
//
//}
//int main() {
//	char x;
//	biTree* T = (biTree*)malloc(sizeof(biTree));
//	biTree* create(biTree*);
//	void inOrder(biTree*);
//	T = create(T);//����һ�Ŷ�����
//	printf("������ҪѰ�ҵ�xֵ��x=");
//	scanf("%c", &x);
//	if (T->data == x) {
//		del(T);
//	}
//	else {
//		delXsub(T, x);
//	}
//	inOrder(T);
//	return 0;
//}