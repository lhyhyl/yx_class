///*
//	按递增次序输出单链表各节点的数据元素，并释放节点所占的存储空间。
//	分析：
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