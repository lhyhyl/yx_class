///*
//	按递增次序输出单链表各节点的数据元素，并释放节点所占的存储空间。
//	分析：
//		我们可以先进行排序，然后依次输出，并释放节点空间，我们也可以直接进行遍历，找到目前最小值进行输出，然后释放，注意不要断链
//		我们这里采取第二种方式
//*/
//struct Link {
//	int data;
//	struct Link *next;
//};
//#include <stdio.h>
//#include <stdlib.h>
//void printAndDel(Link *h) {
//	Link* pre = h;//前驱指针
//	Link* minpre = h;//最小值节点的前驱指针
//	Link* p = h->next;//工作指针
//	Link* minp = h->next;//指向最小值节点的指针
//	//int count = 0;//统计链表长度
//	//while (p != NULL)//统计
//	//{
//	//	count++;
//	//	p = p->next;
//	//}
//	p = h->next;//将工作指针初始化
//
//	while (h->next)//循环递增打印
//	{
//		while (p != NULL)//寻找最小值节点
//		{
//			
//			if (minp->data > p->data)//更新
//			{
//				minp = p;
//				minpre = pre;
//				
//			}
//			else {//否则继续向后遍历
//				pre = p;
//				p = p->next;
//			}
//			
//		}
//		printf("%d", minp->data);
//		minpre->next = minp->next;//改变指针指向
//		free(minp);//释放节点
//		minpre = pre = h;//初始化
//		minp = p = h->next;//初始化
//	}
//}
//int main() {
//	struct Link *head;
//	Link *createLink(int);
//	void printfNowLink(Link*);
//	head = createLink(0);
//	printAndDel(head);
//	printfNowLink(head);
//	return 0;
//}