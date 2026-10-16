#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <iostream>
using namespace std;
int main() {
	//请编程序将明文译成密码，密码规律是：用原来的字母后面第4个字母代替原来的字母。
char c, temp, index;

while ((c = getchar()) != EOF)//输入字符，进行密码编译（getchar指逐个读取字符）
{
	if (c >= 'a' && c <= 'z')//逐个处理小写字母
	{
		index = c - 'a';//求单个字符与a的差
		index = index + 4;//进行后移
		temp = index % 26 + 'a';//将字符归位到小写字母（取余再加解决了后置字母移位问题，如：xyz变成bcd）
		putchar(temp);//输出加密字符
	}


	else if (c >= 'A' && c <= 'Z')//逐个处理大写字母
	{
		index = c - 'A';//同上
		index = index + 4;
		temp = index % 26 + 'A';
		putchar(temp);
	}
	else {
		putchar(c);//遇到空格等防止出错
	}
}
return 0;
	//答案解法
}