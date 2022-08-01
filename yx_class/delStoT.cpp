//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//
////创建一个功能函数
//void delStoT(int *arr,int s,int t,int len) {
//
//	//定义一个变量k，用于记录符合条件的元素个数
//	int k = 0;
//	//遍历所有元素
//	for (int i = 0; i < len;i++) {
//		//判断当前元素是否在范围之类
//		if (s < arr[i] && arr[i] < t)
//			k++;
//		else {
//			//当前元素向前移动k个位置
//			arr[i - k] = arr[i];
//		}
//	}
//	for (int i = 0; i < len - k;i++) {
//		printf("%d ",arr[i]);
//	}
//}
//
//int main() {
//	int arr[] = { 1,2,4,6,10,15 };//也可以由用户输入
//	int s, t;//用于给定区间范围
//	int len = sizeof(arr) / sizeof(int);
//	printf("请输入区间范围,s<t\n");
//	do {
//		printf("s=");
//		scanf("%d", &s);
//		printf("t=");
//		scanf("%d", &t);
//	} while (s > t);
//	delStoT(arr, s, t, len);
//	return 0;
//}