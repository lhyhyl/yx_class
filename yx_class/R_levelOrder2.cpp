///*
//	��д����α������㷨
//	������
//		�������������ֵ�������Ҫһ��һ��ı������������Ǿ���Ҫ�õ������������ݽṹ�ˣ����������ǣ�
//		�Ƚ����ڵ���ӣ�Ȼ����ڵ���ӣ������ν����ڵ�����ӡ��Һ�����ӡ��������ѭ����ֱ���ӿ�
//*/
//struct biTree {
//	char data;
//	biTree* lchild;
//	biTree* rchild;
//};
//struct Squeue {
//	biTree** arr;
//	int front, rear;
//};
//#include <stdio.h>
//#include <stdlib.h>
//void levelOrder(biTree* T, Squeue* sq,int maxSize) {
//	biTree* p = T,  *r = p;
//	bool enQueue(Squeue * sq, biTree* data, int maxsize);
//	bool deQueue(Squeue * sq, biTree** data, int maxsize);
//	bool isEmpty(Squeue * sq);
//	if (T == NULL) {
//		return;
//	}
//	else {
//		enQueue(sq, p, maxSize);
//		while (!isEmpty(sq)){
//			deQueue(sq, &r, maxSize);
//			printf("%c", r->data);
//			if (r->lchild) {
//				enQueue(sq, r->lchild, maxSize);
//			}
//			if (r->rchild) {
//				enQueue(sq, r->rchild, maxSize);
//			}
//		}
//	}
//}
//int main() {
//	int count = 0;
//	biTree* T = (biTree*)malloc(sizeof(biTree));
//	Squeue* sq = (Squeue*)malloc(sizeof(Squeue));
//	biTree* create(biTree*);
//	void nodeNum(biTree*, int*);
//
//	Squeue* createQueue(int);
//	T = create(T);//����һ�Ŷ�����
//	nodeNum(T, &count);//ͳ�ƶ������ڵ����
//	sq = createQueue(count);
//
//	levelOrder(T, sq, count);
//	return 0;
//}