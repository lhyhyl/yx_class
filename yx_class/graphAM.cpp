#define _CRT_SECURE_NO_WARNINGS
#define MAXSIZE 100
#define TYPE int
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct AMGraph
{
	TYPE Vertex[MAXSIZE];//������Ϣ
	int Edge[MAXSIZE][MAXSIZE];
	int numV, numE;//�������ͱ���
};

void createAMGraph(AMGraph *G) {
	int v, e, w, vi, vj;
	for (int i = 0; i < G->numV; i++) {//��ʼ���ڽӾ���
		for (int j = 0; j < G->numV; j++) {
			i == j ? G->Edge[i][j] = 0 : G->Edge[i][j] = 32767;
		}
	}
	printf("�����봴��ͼ�Ķ������ͱ������Կո�ֿ�: ");
	scanf("%d %d",&v,&e);
	G->numV = v;
	G->numE = e;
	//�Ѷ�����Ϣ����Vertex
	for (int i = 0; i < G->numV;i++) {
		printf("�������%d��������Ϣ:",i+1);
		scanf("\n%c",&G->Vertex[i]);
	}
	
	for (int i = 0; i < G->numE;i++) {//��������ߵ���Ϣ
		printf("������ߵ���Ϣ vi vj w���Կո�ֿ���");
		scanf("%d %d %d",&vi,&vj,&w);
		G->Edge[vi-1][vj-1] = w;
		//G->Edge[vj-1][vi-1] = w;
	}
}
void createGraphFromFile(AMGraph* G) {
	FILE* fp;//�����ļ�ָ��
	char ev[4] = {};
	char numE[3] = { 0 };//�߸�����Ϣ
	char numV[3] = { 0 };//���������Ϣ
	char arc[16] = { 0 };//����Ϣ
	char* vertex;//������Ϣ������
	fp = fopen("graphAM.txt", "r");//���ļ�
	//fp = fopen("test.txt", "r");//���ļ�
	if (fp == NULL) {
		printf("���ļ��޷��򿪣�");
		return;
	}
	fscanf(fp, "%hu %hu", numE, numV);//��ȡ��һ��
	G->numE = numE[0];
	G->numV = numV[0];

	//��ʼ��ͼ  
	for (int i = 0; i < G->numV; i++) {
		for (int j = 0; j < G->numV; j++) {
			i == j ? G->Edge[i][j] = 0 : G->Edge[i][j] = 32767;
		}
	}
	vertex = (char*)malloc(sizeof(char) * G->numV);//���������洢������Ϣ�����飨��������֣�
	for (int i = 0; i <= G->numE; i++) {//��ʼ��ȡ�������Ϣ
		if (i == 0) {//��ʱ�����������ļ��Ľṹ���ڶ����Ƕ�����Ϣ
			fgets(ev, 4, fp);//��ȡ�س�������һ��fgets���ͣ�ڻس����Ƕ�
			fgets(vertex, G->numV * 2, fp);//�����ȡ������Ϣ
			int w = 0;//��һ������������֤adjlist���δ洢����
			for (int j = 0; j < G->numV * 2; j++) {//��Ϊ�пո�������j<G->numV*2
				if (vertex[j] == 32) {//�ǿո񣬲����в���
					continue;
				}
				else {//��ʼ��ֵ
					G->Vertex[w] = vertex[j];
					w++;
				}
			}
		}
		else {//��ʼ���δ洢����Ϣ
			fgets(arc, 16, fp);//��ȡ���еı���Ϣ
			if (arc[0] == 10) fgets(arc, 16, fp);//�����"/n"����ȡ����һ��
			char* start = strtok(arc, " ");
			char* end = NULL, * weight = NULL;
			if (start) end = strtok(NULL, " ");
			if (end) weight = strtok(NULL, " ");
			weight[strlen(weight) - 1] = ' ';
			weight = strtok(weight, " ");
			G->Edge[atoi(start) - 1][atoi(end) - 1] = atoi(weight);
			//G->Edge[atoi(end) - 1][atoi(start) - 1] = atoi(weight);
		}

	}
	fclose(fp);

}
void dispGraph(AMGraph* G) {
	int i, j;
	printf("\n����������Ϣ���ַ���:\n");
	for (i = 0; i < G->numV; i++)
		printf("%8c", G->Vertex[i]);

	printf("\n����ڽӾ���:\n");
	printf("\t");
	for (i = 0; i < G->numV; i++)
		printf("%8c", G->Vertex[i]);

	for (i = 0; i < G->numV; i++)
	{
		printf("\n%8c", G->Vertex[i]);
		for (j = 0; j < G->numV; j++)
		{
			if (G->Edge[i][j] == 32767)
				//����֮��������ʱȨֵΪĬ�ϵ�32767��
				//������ͼ��һ����"0"��ʾ��������ͼ��һ����"��",
				//����Ϊ�˷���ͳһ��� "��"
				printf("%8s", "��");
			else
				printf("%8d", G->Edge[i][j]);
		}
		printf("\n");
	}

}
int main() {
	AMGraph G;
	//createAMGraph(&G);
	createGraphFromFile(&G);
	dispGraph(&G);
}