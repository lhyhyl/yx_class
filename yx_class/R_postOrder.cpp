///*
//	��д���ǵݹ�ĺ�������㷨
//	������
//		�ǵݹ�ĺ��������������������ԣ���΢����һ�㣬����������Ҫһֱ�Ӹ��ڵ�����Ѱ�����Ӳ���ջ��֮�����ջ��Ԫ�أ�
//		���ж��Ƿ����Һ��ӣ�������Һ�����ջ���������������ң�ֱ��ĳ�ڵ�Ϊ���ڵ㣬��ջ�����ʡ���Ҫע�������Ϊ�п���һ���ڵ�����
//		����ʶ�Σ�������������һ��ָ��r������ʾ��һ�α����ʹ��ýڵ�
//
//
//
//*/
//struct biTree {//���Ľṹ��
//	char data;
//	biTree *lchild;
//	biTree *rchild;
//};
//struct Stack {//ջ�Ľṹ��
//
//};
//#include <stdio.h>
//#include <stdlib.h>
//void postOrder(biTree *T, Stack *s) {//�������
//	biTree *p = T;
//	biTree *r = (biTree*)malloc(sizeof(biTree));//��¼�ϴη��ʵĽڵ�
//	bool empty(Stack *);
//	bool push(Stack *, biTree *);
//	biTree *top(Stack *);
//	bool pop(Stack *);
//	while (p || !empty(s)) {
//		if (p)
//		{
//			push(s, p);
//			p = p->lchild;
//		}
//		else {
//			p = top(s);
//			if (p->rchild&&p->rchild!=r)
//			{
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
//	
//}
//int main() {
//	int count = 0;
//	biTree *T = (biTree *)malloc(sizeof(biTree));
//	Stack *s = (Stack*)malloc(sizeof(Stack));
//	biTree *create(biTree*);
//	void nodeNum(biTree *, int *);
//	Stack *createStack(int);
//
//	T = create(T);
//	nodeNum(T, &count);
//
//	s = createStack(count);//�����������ڵ������С��ջ
//
//	postOrder(T, s);
//	return 0;
//}