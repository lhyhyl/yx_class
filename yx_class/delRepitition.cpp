//#include <stdio.h>
//
//
//int delRepitition(int *arr,int len) {//
//	int k = 0;
//	for (int i = 0; i < len;i++) {
//		if (arr[i]!=arr[i+1]) {
//			arr[k + 1] = arr[i + 1];
//			k++;
//		}
//	}
//	return k;
//}
//int main() {
//	int arr[] = { 1,1,2,2,2,3,3,4,5,5,6 };
//	int len = sizeof(arr) / sizeof(int);
//	len = delRepitition(arr, len);
//	for (int i = 0; i < len; i++) printf("%d ", *(arr + i));
//	return 0;
//}