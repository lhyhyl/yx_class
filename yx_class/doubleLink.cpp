//////单链表  头插法*h *p *r
////p->next= h->next ;
////h->next = p;
////
//////单链表  尾插法
////r->next = p;
////r = p;
////
//////单链表 删除p节点
////r = p;
////pre->next = p->next;
////p = p->next;
////free(r);
////
//////单链表 在p节点之前插入节点t
////t->next = p;
////pre->next = t;
////
//////双向链表的插入操作   在p节点之前插入节点t
////t->next = p;
////p->pre->next = t;
////t->pre = p->pre;
////p->pre = t;
////
//////双向链表的插入操作   在p节点之后插入节点t
////t->next=p->next;
////p->next = t;
////p->next->pre = t;
////t->pre = p;
////
//////双向链表的插入操作   删除p节点
////p->pre->next = p->next;
////p->next->pre = p->pre;
////
//////判断双向链表为空
////if (h->next == h&&h->pre==h)
////return 0;
////
//
//struct BiNode {
//	int data;
//	BiNode* lchild, * rchild;
//};
////中序递归遍历
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