///*
//	��������һ����������������������ͬ�ĺ�׺�������ǿ��Խ���׺��Ϊ�������ִ洢������being��loading������ing�Ϳ�����Ϊ
//	�������֣����ڴ��������������й������֣����һ����Ч�㷨�ҵ��乫����׺��ʵλ�á�
//	������
//		���ǿ��������룬������ǵ����������������ָ��ͬ���ƶ�����ôֻ��������������ͬʱ�ſ����ڹ������ֵ���ʼλ��������
//		��������Ӧ�������Ǵ���ͬһ�������ϣ��ʶ�����Ӧ���ýϳ����������ߣ������߶��٣�Ӧ�����߹���������ĳ���֮�
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
//	char p[] = "letter";//�������ͣ�char
//	h1 = createLink(1);
//	h2 = createLink(1);
//	com = createLink(1);//��������
//	p1 = h1->next;
//	p2 = h2->next;
//	while (p1->next)p1 = p1->next;//������β
//	while (p2->next)p2 = p2->next;
//	p1->next = com->next;//���ӹ�������
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