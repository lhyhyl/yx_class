///*
//	寻找主元素
//*/
//#include <stdio.h>
//
//int findMain(int* arr, int len) {
//	/*int mainNum = 0, count = 0;
//	int j = 0;
//	int k = 0;
//	for (; j < len; j++) {
//		k = arr[j];
//		for (int i = 0; i < len; i++)
//		{
//			if (k == arr[i])
//				count++;
//		}
//		if (count > len / 2) {
//			mainNum = k;
//		}
//		count = 0;
//
//	}
//	return mainNum;*/
//
//	int count = 1, cur = *arr, mainNum = 0;
//	for (int i = 1; i < len; i++) {
//		if (cur == arr[i]) {
//			count++;
//		}
//		else {
//			count--;
//			if (count == 0) {
//				cur = arr[i];
//				count = 1;
//			}
//		}
//	}
//	if (count > 0) {
//		for (int i = 0; i < len; i++) {
//			if (arr[i] == cur) mainNum++;
//		}
//	}
//	printf("%d", count);
//	if (mainNum > len / 2) {
//		return cur;
//	}
//	else {
//		return -1;
//	}
//}
//int main() {
//	//int arr[] = { 1,2,3,4,8,5,5,5 };
//	int arr[] = { 1,5,5,5,8,5,5,5 };
//	int mainNum;
//	mainNum = findMain(arr, 8);
//	mainNum == -1 ? printf("没有主元素") : printf("主元素为：%d", mainNum);
//
//	return 0;
//}