///*
//	假设二叉树采用二叉链表存储结构，设计一个非递归算法求二叉树的高度
//	分析：
//		若要采用非递归的方式来求得二叉树的高度，我们采用层次遍历是最合适的，因为这一层一层的不就很好数吗哈哈。具体实现：
//		这里唯一的难点就在于我们如何得知高度该加一了；我们可以设置一个标志num用来记录每一层入栈的节点个数，当我们出栈数
//		达到该数值时也就意味着我们的高度该加一了
//*/
//struct biTree {
//	char data;
//	biTree *lchild;
//	biTree *rchild;
//};
//struct Squeue {
//	biTree *arr;
//	int front, rear;
//};
//
//#include <stdio.h>
//#include <stdlib.h>
//
//int getHigh(biTree *T,Squeue *sq,int maxSize) {
//	int curNum=0,nextNum=0,high=0;//记录一层有多少节点
//	biTree *p = T;
//	biTree *r=(biTree *)malloc(sizeof(biTree));
//	bool enQueue(Squeue *, biTree *, int );
//	bool isEmpty(Squeue *);
//	bool deQueue(Squeue *, biTree **, int);
//
//	if (T == NULL)
//		return 0;
//	else {
//		enQueue(sq, p, maxSize);
//		curNum++;
//		while (!isEmpty(sq))
//		{
//			deQueue(sq, &r, maxSize);
//			curNum--;
//			if (r->lchild) {
//				nextNum++;
//				enQueue(sq, r->lchild, maxSize);
//			}
//			if (r->rchild) {
//				nextNum++;
//				enQueue(sq, r->rchild, maxSize);
//			}
//			if (curNum == 0)
//			{
//				curNum = nextNum;
//				nextNum = 0;
//				high = high + 1;
//			}
//		}
//	}
//	return high;
//}
//int main() {
//	int count=0;
//	//创建二叉树、队列
//	biTree *T=(biTree *)malloc(sizeof(biTree));
//	Squeue *sq;
//	biTree *create(biTree *);
//	void nodeNum(biTree *,int *);
//	Squeue *createQueue(int);
//	T = create(T);
//	nodeNum(T,&count);
//	sq = createQueue(count);//创建一个大小为树节点个数的队列
//
//	printf("该二叉树的高度为：%d",getHigh(T, sq, count));
//	return 0;
//}