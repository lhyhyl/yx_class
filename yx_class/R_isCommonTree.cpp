///*
//	һ�Ŷ������Զ����������ʽ�洢����дһ���㷨�ж����Ƿ���һ����ȫ������
//	������
//		������Ȼ���Խ����������������£���������Ϊ���������ν����������ϵ��£���������ջ�������սڵ㣬�����սڵ㣬
//		�����зǿգ����ж�����Ƿ񻹴��ڽڵ㣬���У������Ϊ����ȫ��������
//*/
//struct biTree {
//	char data;
//	biTree *lchild;
//	biTree *rchild;
//};
//struct Squeue {
//	biTree data;
//	int front, rear;
//};
//#include <stdio.h>
//#include <stdlib.h>
//bool isComplete(biTree *T, Squeue *sq, int maxSize) {
//	if (!T)return true;
//	bool enQueue(Squeue *, biTree *, int maxSize);
//	bool deQueue(Squeue *, biTree **, int maxSize);
//	bool isEmpty(Squeue *);
//	biTree *p = T;
//	biTree* r = (biTree*)malloc(sizeof(biTree));//�ݴ�ָ��
//	biTree *tp = ( biTree*)malloc(sizeof( biTree));//�ݴ�ָ��
//
//	enQueue(sq, p, maxSize);
//
//	while (!isEmpty(sq)) {
//		deQueue(sq, &r, maxSize);
//		if (!r) {//�����ʵ��սڵ�ʱ
//			while (!isEmpty(sq)) {//���������ж��Ƿ񻹴��ڷǿսڵ�
//				deQueue(sq, &tp, maxSize);
//				if (tp) {
//					return false;
//				}
//			}
//		}
//		else {
//			enQueue(sq, r->lchild, maxSize);
//			enQueue(sq, r->rchild, maxSize);
//		}
//		
//	}
//	return true;
//}
//int main() {
//	int count = 0;
//	bool isCom;
//	biTree *T = ( biTree*)malloc(sizeof( biTree));
//	struct Squeue *sq;
//
//	biTree *create(biTree *);
//	void nodeNum(biTree *, int *);
//
//	Squeue *createQueue(int);
//
//
//	T = create(T);//����һ�Ŷ�����
//	nodeNum(T, &count);//ͳ�ƶ������ڵ�����
//	sq = createQueue(count);//��������Ϊ�������ڵ������С�Ķ���
//
//	isCom = isComplete(T, sq, count);
//	isCom ? printf("�ö���������ȫ������") : printf("�ö�����������ȫ������");
//	return 0;
//}