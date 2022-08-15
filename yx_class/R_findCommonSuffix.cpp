///*
//	存在这样一种情况，如果两个单词有相同的后缀，那我们可以将后缀作为公共部分存储，比如being和loading，其中ing就可以作为
//	公共部分，现在存在两个链表，含有公共部分，设计一个高效算法找到其公共后缀其实位置。
//	分析：
//		我们可以这样想，如果我们单纯的让两条链表的指针同步移动，那么只有两条链表长度相同时才可能在公共部分的起始位置相遇，
//		所以我们应该让他们处于同一起跑线上，故而我们应该让较长的链表先走，具体走多少，应该是走过两条链表的长度之差。
//
//*/
//struct Link {
//	union 
//	{
//		int data;
//		char letter;
//
//	};
//	Link *next;
//};
//#include <stdio.h>
//#include <stdlib.h>
//Link *findCommonSuffix(Link *h1,Link *h2) {
//	int countH1 = 0, countH2 = 0;
//	Link* p = h1->next, * q = h2->next;
//	while (p) {
//		countH1++;
//		p = p->next;
//	}
//	p = h1->next;
//	while (q) {
//		countH2++;
//		q= q->next;
//	}
//	q = h2->next;
//	if (countH1 >= countH2) {
//		for (int i = 0; i <countH1 - countH2; i++) {
//			p = p->next;
//		}
//		while (p != q&&p!=NULL) {
//			p = p->next;
//			q = q->next;
//		}
//		//printf("%c", p->data);
//
//	}
//	else {
//		for (int i = 0; i <countH2 - countH1; i++) {
//			q = q->next;
//		}
//		while (p != q && p!= NULL) {
//			p = p->next;
//			q = q->next;
//		}
//		//printf("%c", p->data);
//	}
//	return p;
//}
////Link *findCommonSuffix2(Link *h1,Link *h2) {
////	
////	
////}
//int main() {
//	Link *h1,*h2,*com,*p1,*p2,*start;
//	Link *createLink(int);
//	char p[] = "letter";//数据类型，char
//	h1 = createLink(1);
//	h2 = createLink(1);
//	com = createLink(1);//公共部分
//	p1 = h1->next;
//	p2 = h2->next;
//	while (p1->next)p1 = p1->next;//到达链尾
//	while (p2->next)p2 = p2->next;
//	p1->next = com->next;//链接公共部分
//	p2->next = com->next;
//	p1 = h1->next;
//	p2 = h2->next;
//	while (p1) {
//		printf("%c",p1->letter);
//		p1 = p1->next;
//
//	}
//	printf("\n");
//	while (p2) {
//		printf("%c",p2->letter);
//		p2 = p2->next;
//
//	}
//	printf("\n");
//	start = findCommonSuffix(h1,h2);
//
//	//printf("%c",start->letter);
//	while (start) {
//		printf("%c", start->letter);
//		start = start->next;
//	}
//	return  0;
//}