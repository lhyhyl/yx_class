///*
//	试写出层次遍历的算法
//	分析：
//		正如名字所表现的那样，要一层一层的遍历，这里我们就需要用到队列这种数据结构了，具体做法是：
//		先将根节点入队，然后根节点出队，并依次将根节点的左孩子、右孩子入队。后续如此循环，直至队空
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
//void levelOrder(biTree* T, Squeue* sq, int maxSize) {
//	biTree* p = T;//工作指针
//	biTree* r = (biTree*)malloc(sizeof(biTree));//暂存指针
//	bool enQueue(Squeue*, biTree*, int);
//	bool isEmpty(Squeue*);
//	bool deQueue(Squeue*, biTree**, int);
//	//把根节点入队
//	enQueue(sq,p,maxSize);
//
//	//循环遍历队列
//	while (!isEmpty(sq)) {
//		//取出队首
//		deQueue(sq,&r,maxSize);
//		//打印当前值
//		printf("%c ", r->data);
//		//当前值如果存在左右孩子，左右孩子分别入队
//		if (r->lchild) enQueue(sq, r->lchild, maxSize);
//		if (r->rchild) enQueue(sq, r->rchild, maxSize);
//	}
//
//}
//int main() {
//	int count = 0;
//	biTree* T = (biTree*)malloc(sizeof(biTree));
//	Squeue* sq = (Squeue*)malloc(sizeof(Squeue));
//	biTree* create(biTree*);
//	void nodeNum(biTree*, int*);
//
//	Squeue* createQueue(int);
//	T = create(T);//创建一颗二叉树
//	nodeNum(T, &count);//统计二叉树节点个数
//	sq = createQueue(count);
//
//	levelOrder(T, sq, count);
//	return 0;
//}