///*
//	���һ���㷨����������Ҷ�ڵ㰴�����ҵ�˳������һ����������ͷָ��Ϊhead������������������ʽ�洢������ʱ��Ҷ�ڵ��
//	��ָ������ŵ�����ָ�롣
//	������
//		����Ҫ��Ҷ�ڵ�����������ô��������Ҫ���������ҵ�˳���ҳ�Ҷ�ڵ㣬Ҫ���������ĳ���˳�򣬿��Բ����������򣬺���
//		�������ǲ������������
//*/
//struct biTree {
//	char data;
//	biTree* lchild;
//	biTree* rchild;
//};
//struct Stack {
//	biTree* arr;
//	int len;
//	int top;
//};
//#include <stdio.h>
//#include <stdlib.h>
//biTree* h = (biTree*)malloc(sizeof(biTree));//����һ��ͷ���
//biTree* r = h;//βָ��
//biTree* leafLink(biTree* b) {//��������b�е�����Ҷ�ӽ��������
//	if (b) {
//		if (b->lchild == NULL && b->rchild == NULL)
//		{
//			r->rchild = b;
//			r = b;
//		}
//		leafLink(b->lchild);
//		leafLink(b->rchild);
//	}
//	r->rchild = NULL;
//	return h;
//}
//int main() {
//	biTree* b = (biTree*)malloc(sizeof(biTree));
//	biTree* create(biTree*);
//	b = create(b);//����һ�Ŷ�����
//	leafLink(b);
//	while (h->rchild) {
//		printf("%c ", h->rchild->data);
//		h = h->rchild;
//	}
//	return 0;
//}