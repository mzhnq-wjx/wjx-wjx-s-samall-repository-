#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <iostream>
using namespace std;
int main() {
	// 1. 准备一个大箱子
	char str[1005];

	// 2. 搬货：一次性读入一个“单词”
	while (scanf("%s", str) != EOF) {

		// 3. 清点货物数量：数一下这个单词有多少个字母
		int len = strlen(str);

		// 4. 挨个检查并修改箱子里的东西
		for (int i = 0; i < len; i++) {
			if (str[i] >= 'a' && str[i] <= 'z') {
				str[i] = (str[i] - 'a' + 4) % 26 + 'a';
			}
			else if (str[i] >= 'A' && str[i] <= 'Z') {
				str[i] = (str[i] - 'A' + 4) % 26 + 'A';
			}
		}

		// 5. 把改好的整个箱子推出去
		printf("%s\n", str);
	}//ds解法
	//T8
}