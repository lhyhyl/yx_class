///*
//	��һ����ͷ���ĵ���������Ԫ�ص�����ֵ�����Ա�д����ɾ�����н��ڸ���������ֵ����Ϊ��������������֮���Ԫ�ء�
//	������
//		�ֱ�����pre��p��rָ�룬�������������������ɾ����
//*/
//struct Link {
//	int data;
//	struct Link *next;
//};
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//void deleteNum(Link *h,int min,int max) {
//	/*Link* pre = h;
//	Link* s = pre->next;
//	Link* r = s->next;
//	Link* q;
//	while (r != NULL)
//	{
//		if (s->data > min && s->data < max)
//		{
//			q = s;
//			pre->next = s->next;
//			s = r;
//			r = r->next;
//			free(q);
//		}
//		else
//		{
//			pre = s;
//			s = r;
//			r = r ->next;
//		}
//	}*/
//
//	Link* pre = h, * p = h->next, * r;
//	while (p) {
//		if (p->data>min&&p->data<max) {
//			r = p->next;//�ݴ浱ǰ�ڵ����һ���ڵ㣬�Ա���������ƶ�
//			pre->next = p->next;
//			free(p);
//			p = r;
//		}
//		else {
//			pre = p;
//			p = p->next;
//		}
//	}
//}
//int main() {
//	int min, max;
//	Link*head;
//	Link *createLink(int);//��������Ĵ����ҵ�����װ��һ���ļ�
//	void printfNowLink(Link*);
//	head = createLink(0);
//	printf("������Ҫɾ����ֵ���ڵķ�Χ��\n");
//	printf("min=");
//	scanf("%d",&min);
//	printf("max=");
//	scanf("%d", &max);
//	deleteNum(head,min,max);
//	printfNowLink(head);
//	return 0;
//}