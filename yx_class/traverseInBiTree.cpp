////写出先 中 后序非递归遍历  及 层序遍历
////先序
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
////中序
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
////后序
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
////层序
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
////线索二叉树结构体
//struct biTree {
//	int data;
//	int ltag, rtag;
//	biTree* lchild, *rchild;
//};
//
////邻接矩阵结构体
//struct AMGraph {
//	int numV, numE;
//	int vertex[maxsize];
//	int edge[maxsize][maxsize];
//};
//
////邻接表结构体
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
