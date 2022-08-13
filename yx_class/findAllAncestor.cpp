///*
//	在二叉树中查找值为x的节点，试编写算法打印值为x的节点的所有祖先，假设x的值不多于一个。
//	分析：
//		这里我们采用后序遍历（非递归），因为在我们遇到x之前我们会把它的祖先节点全部入栈，当我们找到x时，再依次取出栈中元素
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
//void findAllAncestor(biTree* T, Stack* s, char x) {
//	biTree* p = T;
//	biTree* r = (biTree*)malloc(sizeof(biTree));
//	biTree* tp = (biTree*)malloc(sizeof(biTree));
//
//	bool push(Stack*, biTree*);
//	bool pop(Stack*);
//	biTree* top(Stack*);//返回得是一个指针
//	bool empty(Stack*);
//	while (p || !empty(s))
//	{
//		if (p)
//		{
//			push(s, p);
//			p = p->lchild;
//		}
//		else {
//			p = top(s);
//			if (p->rchild && p->rchild != r)
//				p = p->rchild;
//			else {
//				if (p->data == x) {//找到指定元素
//					pop(s);//将指定元素出栈
//					while (!empty(s)) {//在栈不空情况下
//						tp = top(s);//找到栈顶元素
//						printf("%c ", tp->data);//将栈中元素打印
//						pop(s);//出栈
//					}
//					break;
//				}
//				r = p;
//				p = NULL;
//
//			}
//		}
//	}
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