///*
//	在二叉树中查找值为x的节点，试编写算法打印值为x的节点的所有祖先，假设x的值不多于一个。
//	分析：
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
//	printf("请输入要查找的元素：x=");
//	x = getchar();
//	findAllAncestor(T, s, x);
//	return 0;
//}