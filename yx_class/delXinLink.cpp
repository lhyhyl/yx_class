///*
//	�ڴ�ͷ���ĵ�����L��,ɾ������ֵΪX�Ľڵ㣬���ͷ���ռ䣬����ֵΪX�Ľڵ㲻Ψһ
//	������
//		���������ƣ�ֻ�Ƕ���һ��ͷ��㡣
//*/
//struct Link {
//
//	int data;
//	struct Link *next;
//};
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//void deleteX(Link *&p,int delNum) {
//
//	Link* pre = p, * q = p->next, * r;
//	while (q) {
//		if (q->data == delNum) {//�����ȣ��ݴ�
//			r = q;
//			q = q->next;
//			pre->next = q;
//			free(r);
//		}
//		else {//���򣬼���������
//			pre = q;
//			q = q->next;
//		}
//	}
//
//	/*Link* s = p->next;
//	while (p != NULL) {
//		if (p->next->data == delNum) {
//			p->next = s->next;
//			free(s);
//			p = p->next;
//		
//		}
//		else {
//			p = p->next;
//		}
//	}*/
//}
//
//int main() {
//	//�����ڵ�
//	Link *head = (Link*)malloc(sizeof(Link));
//	Link *q = (Link*)malloc(sizeof(Link));
//	q = head;
//	head->next = NULL;
//	int n,data,delNum;
//	printf("������ڵ������");
//	scanf("%d",&n);
//	for (int i = 0; i < n;i++) {
//		printf("�������%d���ڵ�ֵ��",i+1);
//		Link *p = (Link*)malloc(sizeof(Link));
//		scanf("%d",&data);
//		p->data = data;
//		head->next = p;
//		head = p;
//	
//	}
//	head->next = NULL;//����Ҫ��ָ���nextָ��NULL����Ȼ������жϻ�����⣬������Ҳ��Ӧ�����ɵĺ�ϰ��
//	head = q;//head�ص�ͷ���
//	printf("��ǰ����ֵΪ��");
//	while (head->next) {
//		printf("%d ",head->next->data);
//		head = head->next;
//	}
//	printf("\n");
//	printf("������Ҫɾ����ֵ��");
//	scanf("%d",&delNum);
//	head = q;//head�ص�ͷ���
//	deleteX(head,delNum);
//	printf("ɾ��������ֵΪ��");
//	while (head->next) {
//		printf("%d ", head->next->data);
//		head = head->next;
//	}
//	return 0;
//}