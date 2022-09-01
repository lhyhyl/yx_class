/*
	在采用邻接表存储的图上进行广度优先遍历/深度优先遍历
	分析：我们知道邻接表上的顶点所连接的节点都是它的相邻节点，而对于广度优先遍历来说，类似于层次遍历，就是要把所有的邻接点进行访问，
		  所以我们需要从第一个节点开始访问它的所有邻接点，还有需要注意的是，当我们把邻接点访问后，需要依次访问邻接点的邻接点，这就需要
		  用队列将我们访问过得邻接点入队，这和层次遍历一样，也只有这样，我们才能访问所有的节点。当然，在这个过程中，会有重复访问的情况，
		  所以我们需要用一个数组来记录节点的访问情况，已访问置true

		  对于深度优先遍历，顾名思义，我们会把每一个节点“榨干”，“顺藤摸瓜”，同样我们需要一个访问标记数组，而对于深度优先遍历，
		  我们将采用递归的方式来进行。
*/
//创建邻接表图结构  分为边表节点结构 顶点表节点结构 图结构

#define MAXSIZE 100
#define TYPE int
//边表结构 
typedef struct EdgeNode {//边表结点
	int index;//该边所指向的顶点的位置,在顶点数组里面的位置信息
	int weight;//权值
	EdgeNode *next;//下一个邻接边
}EdgeNode;

typedef struct VertexNode {//顶点表节点
	int info;//顶点信息
	EdgeNode *firstEdge;//指向第一条依附该顶点的边的指针
}VertexNode, Adjlist[MAXSIZE];

typedef struct {
	Adjlist adjlist;//顶点数组
	int numE, numV;//边数、顶点数
}ALGraph;
//队列结构(我们采用顺序队列)
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
	//声明函数
	void createGraph(ALGraph *);
	void createGraphInFile(ALGraph *);
	void dispGraph(ALGraph *);
	//创建图
	createGraphInFile(graph);
	//打印图
	dispGraph(graph);
	//广度优先遍历
	//BFSBegin(graph);
	//深度优先遍历
	//DFSBegin(graph);
	return 0;
}