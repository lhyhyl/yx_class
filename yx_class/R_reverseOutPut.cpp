///*
//	��һ��ͷ�����������һ�㷨��β��ͷ�����ÿ���ڵ��ֵ��
//	������
//		
//*/
//struct Link {
//	int data;
//	struct Link* next;
//};
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//void reverseOutput(Link *p) {
//	/*Link* pre = p, * q = p->next,*r=q->next;
//	q->next = NULL;
//	while (r) {
//		pre = q;
//		q = r;
//		r = r->next;
//		q->next = pre;
//	}
//	p->next = q;
//	while (q) {
//		printf("%d ", q->data);
//		q = q->next;
//	}*/
//	//Link* q = p->next;
//	//while (q) {
//	//	push(q);
//	//	q = q->next;
//	//}
//	//while (!empty(s)) {
//	//	pop(q);
//	//	printf("%d", q->data);
//	//	
//	//}
//	//Link*q=p->next;
//	if (!p->next) {
//		reverseOutput(p->next);
//		printf("%d", p->data);
//	}
//}
//int main() {
//	int n,data;
//	printf("�����봴������Ľڵ������");
//	scanf("%d",&n);
//	Link *q;
//	Link *head =(Link*) malloc(sizeof(Link));
//	head->next = NULL;
//	q = head;
//	for (int i = 0; i < n;i++) {
//		Link *newP = (Link*) malloc(sizeof(Link));
//		printf("�������һ���ڵ��ֵ��");
//		scanf("%d",&data);
//		newP->data = data;
//		newP->next = NULL;
//		head->next = newP;
//		head = head->next;//headҪʼ��ָ�����½ڵ�
//	}
//	head->next = NULL;
//	head = q;//���headҪָ��ͷ���
//	reverseOutput(head->next);
//	return 0;
//}