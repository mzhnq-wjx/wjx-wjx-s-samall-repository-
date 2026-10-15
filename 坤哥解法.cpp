#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <iostream>
using namespace std;
int main() {
	//这道题纯史题，既不给数据最大长度又不给数据输入的长度，导致程序不能正常结束，只能使用string 
	string a;//定义a是字符串
	cin >> a;//输入
	for (int i = 0; i <a.length(); i++) //用.length求出啊a的长度作为循环终止值
	{
		a[i] += 4;//[i]是下标，a[i]表示读取a中第i个字符
		if (a[i] > 'z' | a[i] > 'Z' & a[i] < 'a')a[i] -= 26;//或运算（|）大于和运算（&），为a中各个字符加密
	}
	cout << a << endl;//坤哥解法

}