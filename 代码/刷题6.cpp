#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <iostream>
using namespace std;
int main() {
/*编一个 C 程序，从键盘输入一个字符：

若该字符是数字字符（'0' ~ '9'），则输出该字符对应的 ASCII 码值；48-57
若该字符是大写字母（'A' ~ 'Z'），则将其转换为小写字母并输出；65-90
若该字符是小写字母（'a' ~ 'z'），则将其转换为大写字母并输出；97-122
若该字符是其他字符，则输出 -1。*/
	char a;
	cin >> a;
	if (a >= 48 && a <= 57) {
		printf("%d\n", a);
	}
	else if (a <= 90 && a >= 65){
		a += 32;
		printf("%c\n", a);
	}
	else if (a <= 122 && a >= 97) {
		a -= 32;
		printf("%c\n", a);
	}
	else {
		printf("-1" );
	}//T1

	//现输入一个字符,请输出对应的十进制数
	char a1;
	cin >> a1;
	printf("%d\n", a1);

	//在ASCII， 表中，每个字符都会用对应的十进制数表示，输入一个字母，请你编程输出它下一格的字母
	char a2;
	cin >> a2;
	a2++;
	printf("%c\n", a2);//T2

	//ASCII表是一个国际通用的信息转换表，每个字符都对应一个十进制数字。输入一个十进制数字，请你编程输出它对应的字符。
	int a3;
	cin >> a3;
	printf("%c\n", a3);//T3

	//小松鼠乐乐在森林里收集了a颗松果。松鼠妈妈对乐乐说：“如果你能数清自己收集了多少颗，我就再给你同样多的松果，让你有两倍这么多！”
	//请你帮乐乐算一算，妈妈奖励后，他总共有多少颗松果？
	int b;
	cin >> b;
	cout << (b * 2) << endl;//T4

	//求和
	int x, y, z;
	scanf("%d,%d", &x, &y);
	z = x + y;
	printf("%d+%d=%d\n", x, y, z);//T5

	//scanf 与 printf 的运用
	int b1, q, sum;
	scanf("a=%d;b=%d", &b1, &q);
	sum = b1 + q;
	printf("%d+%d=%d\n", b1, q, sum);//T6

	//put函数的运用
	puts("I love 941Code\n");//T7

	//给定两个整数，表示一个日期的月和日。请按照MM−DD的格式输出日期，即如果月和日不到 2 位 时，填补0 使得满足2 位。
	int b2, q1;
	cin >> b2 >> q1;
	printf("%02d-%02d\n", b2, q1);//T7
	
	//读入一个单精度浮点数，保留3位小数输出这个浮点数。
	float b3;
	cin >> b3;
	printf("%.3f\n", b3);//T8
	return 0;
}