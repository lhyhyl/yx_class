///*
//	�Ա�дһ���㷨��һ�Ŷ����������нڵ�������������н�����
//	������
//		������Ȼ���Բ��õݹ�ķ�ʽ���н���
//*/
//struct biTree {
//	char data;
//	biTree *lchild;
//	biTree *rchild;
//};
//#include <stdio.h>
//#include <stdlib.h>
//void swapTree(biTree *T) {//�䱾�ʾ��Ǵ�Ҷ�ӽڵ㿪ʼ���н�����һ·�ƽ������ڵ�
//	biTree *temp;
//	if (T) {
//		swapTree(T->lchild);
//		if (T->lchild != NULL || T->rchild != NULL) {
//			temp = T->lchild;
//			T->lchild = T->rchild;
//			T->rchild = temp;
//		}
//		swapTree(T->rchild);
//	}
//}
//int main() {
//	int num;
//	biTree *T = (biTree*)malloc(sizeof(biTree));
//	biTree *create(biTree *);
//	void inOrder(biTree *);
//	T = create(T);//����һ�Ŷ�����
//	inOrder(T);
//	printf("\n");
//	swapTree(T);
//	inOrder(T);
//	return 0;
//}