///*
//	有一带头结点的链表，设计一算法从尾到头的输出每个节点的值。
//	分析：
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
//	printf("请输入创建链表的节点个数：");
//	scanf("%d",&n);
//	Link *q;
//	Link *head =(Link*) malloc(sizeof(Link));
//	head->next = NULL;
//	q = head;
//	for (int i = 0; i < n;i++) {
//		Link *newP = (Link*) malloc(sizeof(Link));
//		printf("请输入第一个节点的值：");
//		scanf("%d",&data);
//		newP->data = data;
//		newP->next = NULL;
//		head->next = newP;
//		head = head->next;//head要始终指向最新节点
//	}
//	head->next = NULL;
//	head = q;//最后head要指向头结点
//	reverseOutput(head->next);
//	return 0;
//}