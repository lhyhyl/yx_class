//////������  ͷ�巨*h *p *r
////p->next= h->next ;
////h->next = p;
////
//////������  β�巨
////r->next = p;
////r = p;
////
//////������ ɾ��p�ڵ�
////r = p;
////pre->next = p->next;
////p = p->next;
////free(r);
////
//////������ ��p�ڵ�֮ǰ����ڵ�t
////t->next = p;
////pre->next = t;
////
//////˫������Ĳ������   ��p�ڵ�֮ǰ����ڵ�t
////t->next = p;
////p->pre->next = t;
////t->pre = p->pre;
////p->pre = t;
////
//////˫������Ĳ������   ��p�ڵ�֮�����ڵ�t
////t->next=p->next;
////p->next = t;
////p->next->pre = t;
////t->pre = p;
////
//////˫������Ĳ������   ɾ��p�ڵ�
////p->pre->next = p->next;
////p->next->pre = p->pre;
////
//////�ж�˫������Ϊ��
////if (h->next == h&&h->pre==h)
////return 0;
////
//
//struct BiNode {
//	int data;
//	BiNode* lchild, * rchild;
//};
////����ݹ����
//void InOrder(BiNode *T) {
//	if (T != NULL)
//	{
//		InOrder(T->lchild);
//		visit(T);
//		InOrder(T->rchild);
//	}
//}
//void preOrder(BiNode* T) {
//	if (T != NULL)
//	{
//		visit(T);
//		preOrder(T->lchild);
//		preOrder(T->rchild);
//	}
//}
//void postOrder(BiNode* T)
//{
//	if (T != NULL)
//	{
//		postOrder(T->lchild);
//		postOrder(T->rchild);
//		visit(T);
//	}
//}