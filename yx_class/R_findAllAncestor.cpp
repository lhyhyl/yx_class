///*
//	�ڶ������в���ֵΪx�Ľڵ㣬�Ա�д�㷨��ӡֵΪx�Ľڵ���������ȣ�����x��ֵ������һ����
//	������
//
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
//void findAllAncestor(biTree* T, Stack* s, int x) {
//	bool empty(Stack*);
//	bool push(Stack * stack, biTree * p);
//	bool pop(Stack * stack);
//	biTree* top(Stack * stack);
//	biTree* p = T;
//	biTree* t = NULL;
//	biTree* r = NULL;
//	/*while (p || !empty(s)) {
//		if (p) {
//			push(s, p);
//			p = p->lchild;
//		}
//		else {
//			p = top(s);
//			if (p->rchild && p->rchild != r) {
//				p = p->rchild;
//			}
//			else {
//				if (p->data == x) {
//					pop(s);
//					while (!empty(s)) {
//						p = top(s);
//						printf("%c", p->data);
//						pop(s);
//					}
//					break;
//				}
//				r = p;
//				pop(s);
//				p = NULL;
//			}
//		}
//	}*/
//	while (p || !empty(s)) {
//		if (p) {
//			push(s, p);
//			p = p->lchild;
//		}
//		else {
//			p = top(s);
//			printf("%c", p->data);
//			pop(s);
//			p = p->rchild;
//		}
//	}
//
//
//}
//int main() {
//	int count = 0, x;
//	biTree* T = (biTree*)malloc(sizeof(struct biTree));
//	struct Stack* s;
//
//	biTree* create(biTree*);
//	void nodeNum(biTree*, int*);
//
//	Stack* createStack(int);
//
//	T = create(T);
//	nodeNum(T, &count);
//	s = createStack(count);
//	printf("������Ҫ���ҵ�Ԫ�أ�x=");
//	x = getchar();
//	findAllAncestor(T, s, x);
//	return 0;
//}