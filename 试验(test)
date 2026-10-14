#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <iostream>
using namespace std;
int main() {
	//输入4个整数，要求按从小到大的形式输出。(输入4个整数，用空格隔开本题一次有多组输入，请注意！)
	int a, b, c, d,t;
	while (scanf("%d%d%d%d", &a, &b, &c, &d) != EOF) {
		if (a > b) {
			t = a, a = b, b = t;
		}
		if (a > c) {
			t = a, a = c, c = t;
		}
		if (a > d) {
			t = a, a = d, d = t;
		}
		if (b > c) {
			t = b, b = c, c = t;
		}
		if (b > d) {
			t = b, b = d, d = t;
		}
		if (c > d) {
			t = c, c = d, d = t;
		}
		printf("%d %d %d %d", a, b, c, d);
	}//T8(借鉴答案)
