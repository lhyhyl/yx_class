///*
//	就地逆置链表
//	分析：
//		我们采用头插法进行逆置。
//*/
//struct Link {
//	int data;
//	struct Link* next;
//};
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h> 
//#include <stdlib.h>
//void reverse(Link *h) {
//	//Link* pre = h;
//	//Link* s = pre->next;
//	//Link* r = s->next,*q;
//	//while (r!= NULL)
//	//{
//	//	q = r->next;
//	//	r->next = s;
//	//	s = r;
//	//	r = q;
//	//	
//	//}
//	////善后
//	//pre->next->next = NULL;
//	//pre->next = s;
//	Link* p = h->next;
//	Link* r ;
//	h->next = NULL;
//	while (p != NULL)
//	{
//		r = p->next;
//		p->next = h->next;
//		h->next = p;
//		p = r;
//	}
//}
//int main() {
//	Link *head = (Link*) malloc(sizeof(Link));
//	Link *createLink(int);
//	head = createLink(0);
//	reverse(head);
//	printf("逆置后链表值为：");
//	while (head->next) {
//		printf("%d ", head->next->data);
//		head = head->next;
//	}
//	return 0;
//}