struct Link {
	int data;
	struct Link* next;
};
#include <stdio.h>
void printfNowLink(Link* h) {
	Link* p = h->next;
	printf("操作后链表值为：");
	while (p) {
		printf("%d ", p->data);
		p = p->next;
	}
}