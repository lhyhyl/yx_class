////д���� �� ����ǵݹ����  �� �������
////����
//void preOrder(biTree* T,Stack* s) {
//	while (p || !empty(s)) {
//		if (p) {
//			printf("%c", p->data);
//			push(s, p);
//			p = p->lchild;
//		}
//		else {
//			p = top(s);
//			pop(s);
//			p = p->rchild;
//		}
//	}
//}
//
////����
//void inOrder(biTree* T, Stack* s) {
//	while (p || !empty(s)) {
//		if (p) {
//			push(s, p);
//			p = p->lchild;
//		}
//		else {
//			p = top(s);
//			printf("%c", p->data);
//			pop(s);
//			p = p->rchild;
//		}
//	}
//}
////����
//void postOrder(biTree* T, Stack* s) {
//	while (p || !empty(s)) {
//		if (p) {
//			push(s, p);
//			p = p->lchild;
//		}
//		else {
//			p = top(s);
//			if (p->rchild && p->rchild != r) {
//				p = p->rchild;
//			}
//			else {
//				printf("%c", p->data);
//				r = p;
//				pop(s);
//				p = NULL;
//			}
//		}
//	}
//}
////����
//void levelOrder(biTree* T, Squene* sq) {
//	if (!T)
//		return;
//	else {
//		enQueue(sq, p, maxsize);
//		if (!isEmpty(sq)) {
//			deQueue(sq, &r, maxsize);
//			if (r->lchild)
//				enQueue(sq, r->lchild, maxsize);
//			if (r->rchild)
//				enQueue(sq, r->rchild, maxsize);
//		}
//	}
//}
//
//
//
//
////�����������ṹ��
//struct biTree {
//	int data;
//	int ltag, rtag;
//	biTree* lchild, *rchild;
//};
//
////�ڽӾ���ṹ��
//struct AMGraph {
//	int numV, numE;
//	int vertex[maxsize];
//	int edge[maxsize][maxsize];
//};
//
////�ڽӱ�ṹ��
//
//struct ALGraph {
//	int numV, numE;
//	verNode* ver;
//};
//struct verNode {
//	int data;
//	edgeNode* firstEdge;
//}[];
//struct edgeNode {
//	int index;
//	int weight;
//	edgeNode* next;
//};
