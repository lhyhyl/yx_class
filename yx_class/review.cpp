////��ϰ
//
////˫������  ��p�ڵ�֮ǰ����ڵ�t
//t->next = p;
//p->pre->next = t;
//t->pre = p->pre;
//p->pre = t;
////˫������  ��p�ڵ�֮�����ڵ�t
//t->next = p->next;
//p->next = t;
//t->next->pre = t;
//t->pre = p;
////������   ͷ�巨����ڵ�p
//p->next = h->next;
//h->next = p;