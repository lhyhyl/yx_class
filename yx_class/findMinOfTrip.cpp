///*
//	已知三个升序整数数组a[l], b[m]和c[n]。请在三个数组中各找一个元素，是的组成的三元组距离最小。三元组的距离定义是：假设a[i]、b[j]和c[k]是一个三元组，那么距离为:
//
//　　Distance = min(|a[ I ] – b[ j ]|, |a[ I ] – c[ k ]|, |b[ j ] – c[ k ]|)
//
//　　请设计一个求最小三元组距离的最优算法，并分析时间复杂度。
//*/
//#include <stdio.h>
//#include <math.h>
//int dis(int a,int b,int c) {//返回距离
//	return abs(a - b) + abs(b - c) + abs(a - c);
//}
//int min(int a,int b,int c) {//返回当前最小值，此时便移动它的指针
//	if (a < b&&a < c) return a;
//	else if(b < c&&b < a) return b;
//	else return c;
//}
//int findMinofTrip(int* s1, int* s2, int* s3, int len1, int len2, int len3) {
//	
//}
//int main() {
//	int S1[] = { -1,0,9 };
//	int S2[] = { -25,-10,10,11 };
//	int S3[] = {2,9,17,30,41};
//	int minD = findMinofTrip(S1,S2,S3,3,4,5);
//	printf("最小距离为：%d",minD);
//	return 0;
//}