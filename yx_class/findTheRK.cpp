///*
//	��һ����ͷ���ĵ��������һ�������ҵ�ָ���ĵ�����k���ڵ㣬����ڵ�ֵ��������1�����򷵻�0��ǰ�᲻�ܸı����������ܸ�Ч
//
//	������
//		���ǿ�����ͳ�Ƴ��ܹ��Ľڵ���count����ô�ýڵ��˳����num=count-k+1,��Ȼ���k>count,ֱ�ӷ���0��ʱ�临�Ӷ�ΪO(n)
//		���ﻹ����һ�ָ��ӱ�ݵķ�����ֻ����������һ�Σ�������������ָ�룬�ʼ��ָ���׽ڵ㣬Ȼ����q���ƶ�k���ڵ㣬֮��p
//		qͬ���ƶ�����qΪNULLʱ��p���ڵ�λ�ñ��ǵ�����k���ڵ��λ��
//*/
//struct Link {
//	int data;
//	Link *next;
//};
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int findTheReciprocalK(Link *h,int k) {//���ǵ�һ�ֽⷨ
//	Link* p = h->next,*q=h;
//	int count = 0;
//	while (p)
//	{
//		count++;
//		p = p->next;
//	}
//	if (k > count)
//		return 0;
//	else {
//		for (int i = 0; i < count - k + 1; i++)
//		{
//			q = q->next;
//		}
//		printf("%d", q->data);
//		return 1;
//	}
//}
//int findTheReciprocalK2(Link *h,int k) {//���ǵڶ��ֽⷨ
//	//������������ָ�� p q
//
//	Link* p = h, * q = h;
//	for (int i = 1; i < k; i++) {
//		q = q->next;
//	}
//	while (q->next != NULL) {
//		p = p->next;
//		q = q->next;
//	}
//	return p->data;
//}
//int main() {
//	int k;
//	Link *head;
//	Link *createLink(int);
//	head = createLink(0);
//	printf("������Ҫ�鵹���ڼ�������k=");
//	scanf("%d",&k);
//	//findTheReciprocalK(head,k);
//	findTheReciprocalK2(head, k);
//
//	return 0;
//}