///*
//	将一个带头结点单链表A分解成两个带头结点的单链表A和B，使得A中含有原表中序号为奇数的元素，B中为偶数，且保持其相对位置不变
//	分析：
//		首先我们需要分配一个节点空间为B作为头节点，然后设置一个flag，为0时认为是奇数，链给A，为1时认为是
//		偶数，连给B
//*/
//struct Link {
//	int data;
//	struct Link *next;
//};
//#include <stdio.h>
//#include <stdlib.h>

//int main() {
//	struct Link *head;
//	Link *createLink(int);
//	void printfNowLink(Link *);
//	head = createLink(0);
//	Link *b = (Link*)malloc(sizeof(Link));//开辟节点空间
//	divide(b,head);
//	printfNowLink(b);
//	printf("\n");
//	printfNowLink(head);
//	return 0;
//}