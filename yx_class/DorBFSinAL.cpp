/*
	�ڲ����ڽӱ�洢��ͼ�Ͻ��й�����ȱ���/������ȱ���
	����������֪���ڽӱ��ϵĶ��������ӵĽڵ㶼���������ڽڵ㣬�����ڹ�����ȱ�����˵�������ڲ�α���������Ҫ�����е��ڽӵ���з��ʣ�
		  ����������Ҫ�ӵ�һ���ڵ㿪ʼ�������������ڽӵ㣬������Ҫע����ǣ������ǰ��ڽӵ���ʺ���Ҫ���η����ڽӵ���ڽӵ㣬�����Ҫ
		  �ö��н����Ƿ��ʹ����ڽӵ���ӣ���Ͳ�α���һ����Ҳֻ�����������ǲ��ܷ������еĽڵ㡣��Ȼ������������У������ظ����ʵ������
		  ����������Ҫ��һ����������¼�ڵ�ķ���������ѷ�����true

		  ����������ȱ���������˼�壬���ǻ��ÿһ���ڵ㡰ե�ɡ�����˳�����ϡ���ͬ��������Ҫһ�����ʱ�����飬������������ȱ�����
		  ���ǽ����õݹ�ķ�ʽ�����С�
*/
//�����ڽӱ�ͼ�ṹ  ��Ϊ�߱�ڵ�ṹ �����ڵ�ṹ ͼ�ṹ

#define MAXSIZE 100
#define TYPE int
//�߱�ṹ 
typedef struct EdgeNode {//�߱���
	int index;//�ñ���ָ��Ķ����λ��,�ڶ������������λ����Ϣ
	int weight;//Ȩֵ
	EdgeNode *next;//��һ���ڽӱ�
}EdgeNode;

typedef struct VertexNode {//�����ڵ�
	int info;//������Ϣ
	EdgeNode *firstEdge;//ָ���һ�������ö���ıߵ�ָ��
}VertexNode, Adjlist[MAXSIZE];

typedef struct {
	Adjlist adjlist;//��������
	int numE, numV;//������������
}ALGraph;
//���нṹ(���ǲ���˳�����)
struct Squeue {
	TYPE *arr;
	int front, rear;
};
#include <stdio.h>
#include <stdlib.h>

void BFSinAL(ALGraph*G,int *visited,int v) {
	printf("%d ",v);
	visited[v] = 1;
	enQueue(sq,v,maxSize);
	while (!isEmpty(sq)) {
		deQueue(sq,&r,maxSize);
		for (EdgeNode* p = G->adjlist[r].firstEdge; p;p->next) {
			if (!visited[p->index]) {
				printf("%d ",p->index);
				visited[p->index] = 1;
				enQueue(sq, p->index, maxSize);
			}
		}
	}
	/*ALGraph* g = graph;
	ALGraph* r = g;
	if (!graph)
		return;
	else {
		enQueue(sq, g, maxsize);
		while (!isEmpty(sq)) {
			deQuene(sq, &r, maxsize);
			while (r->firstEdge) {
				enQueue(sq, r->firstEdge, maxsize);
				enQueue(sq, r->next, maxsize);
			}
			
		}
	}*/

}
void BFSBegin(ALGraph *G) {
	for (int i = 0; i < G->numV;i++) {
		if (!visited[i])
			BFSinAL(G, visited, i);
	}
}
int main() {
	ALGraph *graph = (ALGraph *)malloc(sizeof(ALGraph));
	//��������
	void createGraph(ALGraph *);
	void createGraphInFile(ALGraph *);
	void dispGraph(ALGraph *);
	//����ͼ
	createGraphInFile(graph);
	//��ӡͼ
	dispGraph(graph);
	//������ȱ���
	//BFSBegin(graph);
	//������ȱ���
	//DFSBegin(graph);
	return 0;
}