///*
//	���������������������ڵ������Ԫ�أ����ͷŽڵ���ռ�Ĵ洢�ռ䡣
//	������
//		���ǿ����Ƚ�������Ȼ��������������ͷŽڵ�ռ䣬����Ҳ����ֱ�ӽ��б������ҵ�Ŀǰ��Сֵ���������Ȼ���ͷţ�ע�ⲻҪ����
//		���������ȡ�ڶ��ַ�ʽ
//*/
//struct Link {
//	int data;
//	struct Link *next;
//};
//#include <stdio.h>
//#include <stdlib.h>
//void printAndDel(Link *h) {
//	Link* pre = h;//ǰ��ָ��
//	Link* minpre = h;//��Сֵ�ڵ��ǰ��ָ��
//	Link* p = h->next;//����ָ��
//	Link* minp = h->next;//ָ����Сֵ�ڵ��ָ��
//	//int count = 0;//ͳ��������
//	//while (p != NULL)//ͳ��
//	//{
//	//	count++;
//	//	p = p->next;
//	//}
//	p = h->next;//������ָ���ʼ��
//
//	while (h->next)//ѭ��������ӡ
//	{
//		while (p != NULL)//Ѱ����Сֵ�ڵ�
//		{
//			
//			if (minp->data > p->data)//����
//			{
//				minp = p;
//				minpre = pre;
//				
//			}
//			else {//�������������
//				pre = p;
//				p = p->next;
//			}
//			
//		}
//		printf("%d", minp->data);
//		minpre->next = minp->next;//�ı�ָ��ָ��
//		free(minp);//�ͷŽڵ�
//		minpre = pre = h;//��ʼ��
//		minp = p = h->next;//��ʼ��
//	}
//}
//int main() {
//	struct Link *head;
//	Link *createLink(int);
//	void printfNowLink(Link*);
//	head = createLink(0);
//	printAndDel(head);
//	printfNowLink(head);
//	return 0;
//}