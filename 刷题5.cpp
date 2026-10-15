#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <iostream>
using namespace std;
int main() {
	//输入一个字符a, 输出它对应的编码
	char a;
	cin >> a;
	printf("%d", a);//T1

	//输入两个字符 a 和 b, 输出a减去b的差值。
	//####输入格式
	//一行两个用空格分开的可显示的字符 a b 。
	char x, y,z;
	cin >> x >> y;
	z = x - y;
	printf("%d", z);//T2

	//给定一个大写字母，求其后第k个大写字母所对应的小写字母是什么？ 数据保证所求的肯定是小写字母。
	char x1, z1;
	int y1;
	cin >> x1 >> y1;
	z1 = x1 + y1 + 32;
	printf("%c", z1); //T3

	//输入变量 a, b，将 a, b 的值转换为整数型并输出 a + b的结果。
	int a1, b1;
	cin >> a1 >> b1;
	cout << (a1 + b1) << endl;//T4

	//在ASCII 表中，每个字符都会用对应的十进制数表示。输入一个小写字母，请你编程输出它对应的大写字母
	char x2, z2;
	cin >> x2;
	z1 = x2 - 32;
	printf("%c", z1); //T5
	return 0;
}
