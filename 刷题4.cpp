#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
int main() {
	//同数据输入输出
	string q;
	getline(cin, q);
	cout << q << endl;//T9

	//分别定义int，short类型的变量各一个，并依次输出它们的存储空间大小（单位：字节）。
	int a;
	short b;
	cout << sizeof(a) << " " << sizeof(b) << endl;//T1

	//分别定义float，double类型的变量各一个，并依次输出它们的存储空间大小（单位：字节）。
	float a1;
	double b1;
	cout << sizeof(a1) << " " << sizeof(b1) << endl;//T2

	//分别定义bool，char类型的变量各一个，并依次输出它们的存储空间大小（单位：字节）。
	bool a2;
	char b2;
	cout << sizeof(a2) << " " << sizeof(b2) << endl;//T3

	//输入一个整数𝑛，输出2的𝑛次幂的值。
	int n;
	cin >> n;
	cout << (1LL << n) << endl;//1LL表示1是longlong类型，防止溢出（T4）

	//小兔子和小熊在森林里找到了两个神奇的魔法数字 a 和b
	//它们想知道这两个数字合在一起会变成多大的数字，于是决定把它们加起来。你能帮它们算出a与b的和吗？
	long long a3, b3, c3;
	cin >> a3 >> b3;
	c3 = a3 + b3;
	cout << c3 << endl;//T5

	//小猴子和小松鼠在森林里玩数字游戏。小猴子有一个大大的数字 a，小松鼠有一个小小的数字b。
	// 它们想知道小猴子的数字比小松鼠的数字大多少，于是决定计算a 与b 的差。你能帮它们算出结果吗？
	long long a4, b4, c4;
	cin >> a4 >> b4;
	c4 = a4 - b4;
	cout << c4 << endl;//T6

	//小象和小鹿在森林里分果子。小象有 a 颗果子，小鹿有b 颗果子。小象想把果子平均分给其它的小鹿，每份刚好b 颗，让其他的小鹿也有b 颗。
	// 请你帮它们算一算：小象的果子最多能分成多少整份（商）？分完之后还会剩下多少颗（余数）？
	long long a5, b5, c5, d5;
	cin >> a5 >> b5;
	c5 = a5 / b5;
	d5 = a5 % b5;
	cout << c5 << " " << d5 << endl;//T7

	//输入两个小数 a 和b, 输出a与b的乘积，结果保留5位小数。
	double x, y, z;
	cin >> x >> y;
	z = x * y;
	printf("%2.5f\n", z);//T8

	//还记得在上一章里，我们曾经输出过的“Hello, World!”吗？
	//它虽然不是本章所涉及的基本数据类型的数据，但我们同样可以用sizeof函数获得它所占用的空间大小。
	//请编程求出它的大小，看看跟你设想的是否一样？
	cout << sizeof("Hello, World!") << endl;//T10
	return 0;
}