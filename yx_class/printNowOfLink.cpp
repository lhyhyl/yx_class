struct Link {
	int data;
	struct Link* next;
};
#include <stdio.h>
void printfNowLink(Link* h) {
	Link* p = h->next;
	printf("����������ֵΪ��");
	while (p) {
		printf("%d ", p->data);
		p = p->next;
	}
}