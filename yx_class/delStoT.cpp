//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//
////����һ�����ܺ���
//void delStoT(int *arr,int s,int t,int len) {
//
//	//����һ������k�����ڼ�¼����������Ԫ�ظ���
//	int k = 0;
//	//��������Ԫ��
//	for (int i = 0; i < len;i++) {
//		//�жϵ�ǰԪ���Ƿ��ڷ�Χ֮��
//		if (s < arr[i] && arr[i] < t)
//			k++;
//		else {
//			//��ǰԪ����ǰ�ƶ�k��λ��
//			arr[i - k] = arr[i];
//		}
//	}
//	for (int i = 0; i < len - k;i++) {
//		printf("%d ",arr[i]);
//	}
//}
//
//int main() {
//	int arr[] = { 1,2,4,6,10,15 };//Ҳ�������û�����
//	int s, t;//���ڸ������䷶Χ
//	int len = sizeof(arr) / sizeof(int);
//	printf("���������䷶Χ,s<t\n");
//	do {
//		printf("s=");
//		scanf("%d", &s);
//		printf("t=");
//		scanf("%d", &t);
//	} while (s > t);
//	delStoT(arr, s, t, len);
//	return 0;
//}