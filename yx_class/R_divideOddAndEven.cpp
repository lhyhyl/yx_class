///*
//	��һ����ͷ��㵥����A�ֽ��������ͷ���ĵ�����A��B��ʹ��A�к���ԭ�������Ϊ������Ԫ�أ�B��Ϊż�����ұ��������λ�ò���
//	������
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
//	Link *b = (Link*)malloc(sizeof(Link));//���ٽڵ�ռ�
//	divideOddAndEven(head,b);
//	printfNowLink(b);
//	printf("\n");
//	printfNowLink(head);
//	return 0;
//}
