//struct Link {
//	int data;
//	struct Link* next;
//};
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
////����һ������
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
////void reverseLink(Link *h) {//����ͷ�巨����
////	//Link* p = h->next;//��¼pΪ��Ԫ���
////	//Link* q = p->next;//��¼qΪ��Ԫ������һ���ڵ�
////	//while (q) {//��p֮������нڵ����ͷ��
////	//	p->next = q->next;//�ݴ�
////	//	q->next = h->next;//ͷ��
////	//	h->next = q;//ͷ��
////	//	q = p->next;
////	//}
////	//p->next = NULL;
////
////	Link* p = h->next;//����ָ��
////	Link* r;//�ݴ�p->next
////	h->next = NULL;//��h���������
////	while (p) {//�������ָ�벻��
////		r = p->next;//�ݴ�
////		p->next = h->next;//��p�ڵ���ͷ�巨����h
////		h->next = p;
////		p = r;//����������
////	}
////
////}
//int main() {
//	Link *head = (Link*) malloc(sizeof(Link));
//	Link *createLink(int);
//	head = createLink(0);
//	reverseLink(head);
//	printf("���ú�����ֵΪ��");
//	while (head->next) {
//		printf("%d ", head->next->data);
//		head = head->next;
//	}
//	return 0;
//}