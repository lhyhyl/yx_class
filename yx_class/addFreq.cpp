///*
//	给一个非循环双向链表增加一个freq值，用以表示它的访问频率，每访问一次freq就+1，然后需要将该链表按照非增的顺序
//	排列，同时最近访问的节点排在相同频度节点的前面，以便使频繁访问的节点总是靠近表头。试编写符合上述要求的Locate(L,x)
//	函数，该运算为函数过程，返回找到节点的地址，类型为指针型。
//
//	分析：
//		这道题咋一看很唬人，还引入了一个新概念，其实并不难，拆分开来其实就是 查找+排序；我们需要先找到我们要访问的节点
//		，更改它的freq值，然后按照freq值的大小从表头寻找插入位置，这样便完成了一次locate操作。
//*/
//struct Link {
//	int data;
//	Link *pre;
//	Link *next;
//	int freq;
//};
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//void locate(Link *h,int num) {
//	Link* p = h->next, * t=(Link*)malloc(sizeof(Link));
//
//	while (p) {
//		if (p->data == num) {
//			t = p;
//			p->freq++;
//			if (!p->next) {
//				p->pre->next = NULL;
//			}
//			else {
//				p->pre->next = p->next;
//				p->next->pre = p->pre;
//
//			}
//			break;
//		}
//		p = p->next;
//	}
//
//	p = h->next;//重新遍历，去寻找待插入位置
//
//	while (p) {
//		if (t->freq >= p->freq) {//找到，插入
//			t->next = p;
//			p->pre->next = t;
//			t->pre = p->pre;
//			p->pre = t;
//			break;
//		}
//		else {
//			p = p->next;
//		}
//	}
//	
//}
//int main() {
//	int n, data,num;
//	Link *head = ( Link *)malloc(sizeof(Link));
//	head->next = NULL;
//	head->pre = NULL;
//	Link *p = head;
//	printf("请输入节点个数：n=");
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) {
//		printf("请输入第%d个节点值:", i + 1);
//		scanf("%d", &data);
//		Link *newP = ( Link*)malloc(sizeof( Link));
//		newP->data = data;
//		newP->pre = p;
//		newP->freq = 0;
//		p->next = newP;
//		p = newP;
//	}
//	p->next = NULL;
//	do {
//		printf("请输入要查找的值,输入9999代表结束：num=");
//		scanf("%d",&num);
//		if (num == 9999)continue;//如果num=9999，跳入下一次循环
//		locate(head,num);
//		p = head->next;
//		printf("调整后链表为：\n");
//		while (p) {
//			printf("%d ",p->data);
//			p = p->next;
//		}
//		printf("\n");
//	} while (num!=9999);
//	return 0;
//}