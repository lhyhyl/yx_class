///*
//	��һ����ѭ��˫����������һ��freqֵ�����Ա�ʾ���ķ���Ƶ�ʣ�ÿ����һ��freq��+1��Ȼ����Ҫ���������շ�����˳��
//	���У�ͬʱ������ʵĽڵ�������ͬƵ�Ƚڵ��ǰ�棬�Ա�ʹƵ�����ʵĽڵ����ǿ�����ͷ���Ա�д��������Ҫ���Locate(L,x)
//	������������Ϊ�������̣������ҵ��ڵ�ĵ�ַ������Ϊָ���͡�
//
//	������
//		�����զһ���ܻ��ˣ���������һ���¸����ʵ�����ѣ���ֿ�����ʵ���� ����+����������Ҫ���ҵ�����Ҫ���ʵĽڵ�
//		����������freqֵ��Ȼ����freqֵ�Ĵ�С�ӱ�ͷѰ�Ҳ���λ�ã������������һ��locate������
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
//	p = h->next;//���±�����ȥѰ�Ҵ�����λ��
//
//	while (p) {
//		if (t->freq >= p->freq) {//�ҵ�������
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
//	printf("������ڵ������n=");
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) {
//		printf("�������%d���ڵ�ֵ:", i + 1);
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
//		printf("������Ҫ���ҵ�ֵ,����9999���������num=");
//		scanf("%d",&num);
//		if (num == 9999)continue;//���num=9999��������һ��ѭ��
//		locate(head,num);
//		p = head->next;
//		printf("����������Ϊ��\n");
//		while (p) {
//			printf("%d ",p->data);
//			p = p->next;
//		}
//		printf("\n");
//	} while (num!=9999);
//	return 0;
//}