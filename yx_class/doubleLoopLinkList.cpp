///*
//	���һ���㷨�жϴ�ͷ����ѭ��˫�����Ƿ�Գ�
//	������
//		�򵥷��������ǿ�����������ָ�룬pre��next����ͷ�����������бȽϣ���pre��next��ֵָ��ͬ���򲻶Գƣ���pre��nextָ����ͬһ���ڵ�
//		���ѭ��˫����Գ�
//*/
//struct Link {
//	int data;
//	Link *next;
//	Link *pre;
//};
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdlib.h>
//#include <stdio.h>
//bool isSymmetry(Link *h) {
//	Link* p = h->next, * q = h->pre;
//	while (p != q && p->next != q)
//	{
//		if (p->data == q->data)
//		{
//			p = p->next;
//			q = q->pre;
//		}
//		else {
//			return false;
//		}
//	}
//	return true;
//}
//int main() {
//	Link *head;
//	Link *createDouLoopLink();
//	head = createDouLoopLink();
//	bool flag=isSymmetry(head);
//
//	return 0;
//}