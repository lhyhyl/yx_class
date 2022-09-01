//struct Link {
//	int data;
//	struct Link* next;
//};
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
////逆置一个链表
//void reverseLink(Link* h) {
//	Link* p = h->next;
//	Link* r = p->next;
//	Link* q = r;
//	p->next = NULL;
//	while (r) {
//		q = q->next;
//		r->next = p;
//		p = r;
//		r = q;
//	}
//	h->next = p;
//}
////void reverseLink(Link *h) {//利用头插法逆置
////	//Link* p = h->next;//记录p为首元结点
////	//Link* q = p->next;//记录q为首元结点的下一个节点
////	//while (q) {//把p之后的所有节点进行头插
////	//	p->next = q->next;//暂存
////	//	q->next = h->next;//头插
////	//	h->next = q;//头插
////	//	q = p->next;
////	//}
////	//p->next = NULL;
////
////	Link* p = h->next;//工作指针
////	Link* r;//暂存p->next
////	h->next = NULL;//将h单独拎出来
////	while (p) {//如果工作指针不空
////		r = p->next;//暂存
////		p->next = h->next;//将p节点用头插法插入h
////		h->next = p;
////		p = r;//继续往后走
////	}
////
////}
//int main() {
//	Link *head = (Link*) malloc(sizeof(Link));
//	Link *createLink(int);
//	head = createLink(0);
//	reverseLink(head);
//	printf("逆置后链表值为：");
//	while (head->next) {
//		printf("%d ", head->next->data);
//		head = head->next;
//	}
//	return 0;
//}