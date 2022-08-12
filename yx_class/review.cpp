////复习
//
////双向链表  在p节点之前插入节点t
//t->next = p;
//p->pre->next = t;
//t->pre = p->pre;
//p->pre = t;
////双向链表  在p节点之后插入节点t
//t->next = p->next;
//p->next = t;
//t->next->pre = t;
//t->pre = p;
////单链表   头插法插入节点p
//p->next = h->next;
//h->next = p;