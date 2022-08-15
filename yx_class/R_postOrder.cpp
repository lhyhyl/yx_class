///*
//	试写出非递归的后序遍历算法
//	分析：
//		非递归的后续遍历较中序和先序而言，稍微复杂一点，首先我们需要一直从根节点往下寻找左孩子并入栈，之后访问栈顶元素，
//		并判断是否有右孩子，如果有右孩子入栈，并继续往左孩子找，直到某节点为单节点，出栈并访问。需要注意的是因为有可能一个节点我们
//		会访问多次，所以我们设置一个指针r用来表示上一次被访问过得节点
//
//
//
//*/
//struct biTree {//树的结构体
//	char data;
//	biTree *lchild;
//	biTree *rchild;
//};
//struct Stack {//栈的结构体
//
//};
//#include <stdio.h>
//#include <stdlib.h>
//void postOrder(biTree *T, Stack *s) {//后序遍历
//	biTree *p = T;
//	biTree *r = (biTree*)malloc(sizeof(biTree));//记录上次访问的节点
//	bool empty(Stack *);
//	bool push(Stack *, biTree *);
//	biTree *top(Stack *);
//	bool pop(Stack *);
//	while (p || !empty(s)) {
//		if (p)
//		{
//			push(s, p);
//			p = p->lchild;
//		}
//		else {
//			p = top(s);
//			if (p->rchild&&p->rchild!=r)
//			{
//				p = p->rchild;
//			}
//			else {
//				printf("%c", p->data);
//				r = p;
//				pop(s);
//				p = NULL;
//			}
//		}
//	}
//	
//}
//int main() {
//	int count = 0;
//	biTree *T = (biTree *)malloc(sizeof(biTree));
//	Stack *s = (Stack*)malloc(sizeof(Stack));
//	biTree *create(biTree*);
//	void nodeNum(biTree *, int *);
//	Stack *createStack(int);
//
//	T = create(T);
//	nodeNum(T, &count);
//
//	s = createStack(count);//创建二叉树节点个数大小的栈
//
//	postOrder(T, s);
//	return 0;
//}