//struct Link {
//	int data;
//	Link* next;
//};
//#include<stdio.h>
//#include<stdlib.h>
//void createSort(Link* h,int n) {
//	scanf("%d", &n);
//	int x;
//	Link* r, * p, * q;
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &x);
//		r = (Link*)malloc(sizeof(Link));
//		r->data = x;
//		if (r->data < h->data) {
//			r->next = h;
//			h = r;
//		}
//		else {
//			q = h;
//			while (h&&h->data<r->data) {
//				h = h->next;
//			}
//			r->next = h->next;
//			h->next = r;
//			h = q;
//		}
//	}
//	
//}
//
//
//int main() {
//
//	return 0;
//}