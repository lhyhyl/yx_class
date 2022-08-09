///*
//	设计一个算法判断带头结点的循环双链表是否对称
//	分析：
//		简单分析，我们可以设置两个指针，pre和next，从头结点出发，进行比较，若pre与next所指值不同，则不对称，若pre和next指向了同一个节点
//		则该循环双链表对称
//*/
//struct Link {
//	int data;
//	Link *next;
//	Link *pre;
//};
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdlib.h>
//#include <stdio.h>
//bool isSymmetry(Link *h) {
//	Link* p = h->next, * q = h->pre;
//	while (p != q && p->next != q)
//	{
//		if (p->data == q->data)
//		{
//			p = p->next;
//			q = q->pre;
//		}
//		else {
//			return false;
//		}
//	}
//	return true;
//}
//int main() {
//	Link *head;
//	Link *createDouLoopLink();
//	head = createDouLoopLink();
//	bool flag=isSymmetry(head);
//
//	return 0;
//}