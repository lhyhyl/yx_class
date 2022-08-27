///*
//	将一个带头结点单链表A分解成两个带头结点的单链表A和B，使得A中含有原表中序号为奇数的元素，B中为偶数，且保持其相对位置不变
//	分析：
//		
//*/
//struct Link {
//	int data;
//	struct Link *next;
//};
//#include <stdio.h>
//#include <stdlib.h>
//void divideOddAndEven(Link* h1, Link* h2) {
//	Link* p = h1->next;
//	h1->next = NULL;
//	while (p) {
//		h1->next = p;
//		h1 = p;
//		p = p->next;
//		if (p) {
//			h2->next = p;
//			h2 = p;
//			p = p->next;
//		}
//	}
//	h1->next=NULL;
//	h2->next = NULL;
//}
//int main() {
//	struct Link *head;
//	Link *createLink(int);
//	void printfNowLink(Link *);
//	head = createLink(0);
//	Link *b = (Link*)malloc(sizeof(Link));//开辟节点空间
//	divideOddAndEven(head,b);
//	printfNowLink(b);
//	printf("\n");
//	printfNowLink(head);
//	return 0;
//}
