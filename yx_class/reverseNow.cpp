///*
//	�͵���������
//	������
//		���ǲ���ͷ�巨�������á�
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
//	////�ƺ�
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
//	printf("���ú�����ֵΪ��");
//	while (head->next) {
//		printf("%d ", head->next->data);
//		head = head->next;
//	}
//	return 0;
//}