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