//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//struct BiTree {
//	int data;
//	BiTree* lchild, * rchild;
//};
//void InOrder(BiTree* T) {
//	if (T != NULL)
//	{
//		InOrder(T->lchild);
//		printf("%c ",T->data);
//		InOrder(T->rchild);
//	}
//}
//BiTree* createBiTree() {
//	BiTree* T = (BiTree *)malloc(sizeof(BiTree));
//	char data;
//	printf("请输入当前节点值：data= ");
//	scanf("%c",&data);
//	getchar();
//	if (data !='#') {
//		T->data = data;
//		T->lchild = createBiTree();
//		T->rchild = createBiTree();
//		return T;
//	}
//	else {
//		return NULL;
//	}
//}
//int main() {
//	BiTree* T = (BiTree*)malloc(sizeof(BiTree));
//	T = createBiTree();
//	InOrder(T);
//	return 0;
//}