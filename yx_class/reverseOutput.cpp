///*
//	��һ��ͷ�������������һ�㷨��β��ͷ�����ÿ���ڵ��ֵ��
//	������
//		�������;��е�����ջ�����ʣ����ǿ������õݹ������������ڱ���βԪ��
//*/
//struct Link {
//	int data;
//	struct Link* next;
//};
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//void reverseOutput(Link *p) {
//	
//	
//}
//int main() {
//	int n,data;
//	printf("�����봴�������Ľڵ������");
//	scanf("%d",&n);
//	Link *q;
//	Link *head =(Link*) malloc(sizeof(Link));
//	head->next = NULL;
//	q = head;
//	for (int i = 0; i < n;i++) {
//		Link *newP = (Link*) malloc(sizeof(Link));
//		printf("�������һ���ڵ��ֵ��");
//		scanf("%d",&data);
//		newP->data = data;
//		newP->next = NULL;
//		head->next = newP;
//		head = head->next;//headҪʼ��ָ�����½ڵ�
//	}
//	head->next = NULL;
//	head = q;//���headҪָ��ͷ���
//	reverseOutput(head->next);
//	return 0;
//}