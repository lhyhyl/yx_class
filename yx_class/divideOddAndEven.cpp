///*
//	��һ����ͷ��㵥����A�ֽ��������ͷ���ĵ�����A��B��ʹ��A�к���ԭ�������Ϊ������Ԫ�أ�B��Ϊż�����ұ��������λ�ò���
//	������
//		����������Ҫ����һ���ڵ�ռ�ΪB��Ϊͷ�ڵ㣬Ȼ������һ��flag��Ϊ0ʱ��Ϊ������������A��Ϊ1ʱ��Ϊ��
//		ż��������B
//*/
//struct Link {
//	int data;
//	struct Link *next;
//};
//#include <stdio.h>
//#include <stdlib.h>
//void divide(Link *lb,Link *la) {
//	//���幤��ָ�룬βָ��
//	Link* p=la->next, * ra=la, * rb=lb,*r;
//	rb->next = NULL;
//	//����la
//	while (p)
//	{
//		//����β�巨����la
//		ra->next=p;
//		ra = p;
//		p = p->next;
//		//ż��β�巨����lb
//		if (p) {
//			/*rb->next = p;
//			rb = p;
//			p = p->next;*/
//			r = p->next;
//			p->next=rb->next;
//			rb->next = p;
//			p = r;
//		}
//	}
//	ra->next = NULL;
//	/*rb->next = NULL;*/
//	
//
//
//}
//int main() {
//	struct Link *head;
//	Link *createLink(int);
//	void printfNowLink(Link *);
//	head = createLink(0);
//	Link *b = (Link*)malloc(sizeof(Link));//���ٽڵ�ռ�
//	divide(b,head);
//	printfNowLink(b);
//	printf("\n");
//	printfNowLink(head);
//	return 0;
//}