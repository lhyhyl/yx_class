////�ж϶������Ƿ��Ƕ���������
//#include <stdio.h>
//struct biTree{
//	int data;
//	biTree* lchild, * rchild;
//};
//bool isSortTree(biTree* T) {
//	static int tmp=-999;
//	static int flag = 1;
//	if (T) {
//		isSortTree(T->lchild);
//		if (T->data > tmp) {
//			tmp = T->data;
//		}
//		else
//			flag = 0;
//		isSortTree(T->rchild);
//		
//	}
//	return flag;
//}
//
//
//
//
//
//
//int main() {
//	biTree* T = NULL;
//	biTree* create(biTree*);
//	T = create(T);//����һ�Ŷ�����
//	isSortTree(T) ? printf("�Ƕ���������"): printf("���Ƕ���������");
//	return 0;
//}