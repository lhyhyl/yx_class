/*
	��һ��������������Ա��У�����ֵ��ͬ��Ԫ�ش��ڣ����洢��ʽΪ����������㷨ȥ����ֵ��ͬ��Ԫ�أ�ʹ���в������ظ���Ԫ�ء�
	������
		��������ȥ�أ����ǿ϶���Ҫ���б����������������ǵ��ǵ�����������У����Ǳ���Խ���һһ�Ƚϣ���һ��Ԫ���뵱ǰԪ����ͬ
		ʱ��ɾ����ǰԪ��
*/
struct Link {
	int data;
	Link *next;
};

#include <stdio.h>
#include <stdlib.h>
void deleteRep(Link *h) {
	Link* pre = h, * r;
	Link* p = pre->next;
	while (p->next)
	{
		if (p->data == p->next->data)
		{
			r = p;
			pre->next = p->next;
			p = p->next;
			free(r);
		}
		else {
			pre = p;
			p = p->next;
		}

	}
}
int main() {
	Link * head;
	Link *createLink(int);
	void printfNowLink(Link *);
	head = createLink(0);
	deleteRep(head);
	printfNowLink(head);
	return 0;
}