///*
//	���������������������ڵ������Ԫ�أ����ͷŽڵ���ռ�Ĵ洢�ռ䡣
//	������
//		
//*/
//struct Link {
//	int data;
//	struct Link *next;
//};
//#include <stdio.h>
//#include <stdlib.h>
//void outPutAndFree(Link* h) {
//	Link* p = h->next, * pre = h,*minp=p,*minpre=pre;
//	while (h->next) {
//		while (p) {
//			if (p->data < minp->data) {
//				minp = p;
//				minpre = pre;
//			}
//			pre = p;
//			p = p->next;
//		}
//		printf("%d ", minp->data);
//		minpre->next = minp->next;
//		free(minp);
//		minp = p = h->next;
//		minpre = pre = h;
//	}
//}
//
//int main() {
//	struct Link *head;
//	Link *createLink(int);
//	void printfNowLink(Link*);
//	head = createLink(0);
//	outPutAndFree(head);
//	printfNowLink(head);
//	return 0;
//}