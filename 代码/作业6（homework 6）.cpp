#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <utility>
#include <stack>
using namespace std;
int main() {
	//运输带上有n个五颜六色的小球，颜色以0-255的整数表示。现在设定传感器，色号为x的小球需要拿出去单独检查，请你按原顺序输出其余小球的色号。
	int n;
	cin >> n;
	vector<int > v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	int ta;
	cin >> ta;
	int cnt = 0;
	for (int i = 0; i < v.size(); i++) {
		if (v[i] != ta) {
			v[cnt] = v[i];
			cnt++;
		}
	}
	for (int i = 0; i < cnt; i++) {
		cout << v[i] << ' ';
	}cout << endl;//T1

	//小咩想出了一个办法，他决定只拿走体积第二大的奶酪棒（若有多根体积最大的奶酪棒，他也不会拿），这样猫咪在短时间内就不会发现！现在小咩烦恼的是，究竟哪根奶酪棒是体积是第二大的呢？
	int n1;
	cin >> n1;
	vector<int > v1(n1);
	for (int i = 0; i < n1; i++) {
		cin >> v1[i];
	}
	sort(v.begin(),v.end() ,greater<int>( ));
	int max = v1[0];
	int ans = -1;
	for (int i = 0; i < n1; i++) {
		if (max != v1[i]) {
			 ans = v1[i];
			break;
		}
	}
	cout << ans << endl;//T2

	//他们日常的修炼形态是一个火球，火球的能量值k，由每个圣兽的魔力值按数位组合而成.日常修炼内容是：需要圣兽火球穿过一个轨道，轨道由n个大小变幻的玄铁圈组成，知道第一个玄铁圈的尺寸为x，往后每个玄铁圈比前一个增大d（如果玄铁圈的尺寸值能被各个圣兽的魔力值的总和整除，说明能被击破）。请问此次修炼，圣兽们能击破多少个玄铁圈。
	char ch;
	int nu = 0;
	for (int i = 0; i < 4; i++) {
		cin >> ch;
		ch -= '0';
		nu += ch;
	}
	int nf, xn, d,ans1=0;
	cin >> nf >> xn >> d;
	for (int i = 0; i < nf; i++) {
		if (xn % nu == 0) {
			ans1++;
		}
			xn += d;
	}
	cout << ans1<<endl;//T3

	//多少人能半价
	int re;
	cin >> re;
	vector<int >v2(re);
	for (int i = 0; i < re; i++) {
		cin >> v2[i];
	}
	int bi, num=0;
	cin >> bi;
	for (int i = 0; i < re; i++) {
		if (bi <= v2[i]) { num++; }
	}cout << num << endl;//T4

	// 区间输出
	int le;
	cin >> le;
	vector<int >v3(le);
	for (int i = 0; i < le; i++) {
		cin >> v3[i];
	}int qu, ji;
	cin >> qu >> ji;
	if (qu > ji) {
		swap(qu, ji);
	}
	for (int i = qu - 1; i < ji - 1; i++) {
		cout << v3[i] << ' ';
	}cout << endl;//T5

	//若正面朝上，则学号为偶数的同学分到红组，奇数的同学分到蓝组；若反面朝上，则学号为奇数的同学分到红组，偶数的同学分到蓝组。请你设计程序，输出红、蓝组同学的身高。
		int len;
		cin >> len;
		vector<int> odd, even; // 准备两个篮子，一个装奇数同学，一个装偶数同学

		for (int i = 0; i < len; i++) {
			int height;
			cin >> height;
			if ((i + 1) % 2 == 1) { // 注意：下标+1 才是真实的同学编号
				odd.push_back(height);
			}
			else {
				even.push_back(height);
			}
		}
		int yi;
		cin >> yi;
		// 决定先输出哪个篮子
		vector<int>& group1 = (yi == 1) ? even : odd;
		vector<int>& group2 = (yi == 1) ? odd : even;

		// 写个简单的打印循环（附带空格处理）
		for (int i = 0; i < group1.size(); i++) {
			cout << group1[i] << (i == group1.size() - 1 ? "" : " ");
		}
		cout << endl;

		for (int i = 0; i < group2.size(); i++) {
			cout << group2[i] << (i == group2.size() - 1 ? "" : " ");
		}
		cout << endl;//T6

		//现在有一个编号从1∼n长度为的数列，请你找出数列中编号与值相同的数并输出。
		int ha;
		cin >> ha;
		vector<int>v5(ha);
		for (int i = 0; i < ha; i++) {
			cin >> v5[i];
			if (v5[i] == i+1) {
				cout << i+1 << ' ';
			}
		}cout << endl;//T7

		//输出第n个数
		int hao;
		cin >> hao;
		vector<int>v6(hao);
		for (int i = 0; i < hao; i++) {
			cin >> v6[i];
		}int l;
		cin >> l;
		cout << v6[l-1]<<endl;//T8

		//求中位数
		int ha1;
		cin >> ha1;
		vector<int>v7(ha1);
		for (int i = 0; i < ha1; i++) {
			cin >> v7[i];
		}int si = v7.size();
		if (si % 2 == 0)
		{
			printf("%.2lf", (v7[(si - 1) / 2] + v7[(si - 1) / 2 + 1]) / 2.0);
		}
		else {
			printf("%.2lf", v7[si / 2] / 1.0);
		}//T9

		//逆序输出
		int su;
		stack<int>st;
		for (int i = 0; i < 10; i++) {
			cin >> su;
			st.push(su);
		}while (!st.empty()) {
			cout << st.top() << ' ';
			st.pop();
		}cout << endl;//T10

		//已知三个正整数。现有一个大于1的整数，将其作为除数，得到的余数相同。
		int a, b, c;
		cin >> a >> b >> c;
		for (int i = 2;; i++) {
			if (a % i == b % i && b % i == c % i) {
				cout << i << endl;
				break;
			}
		}//T11

		//如果整数 a 的真因子和等于b ，并且b 的真因子的和等于a ，则称a 和b 为亲密数。请编程判断，输入的两个数字是否为亲密数字。
		int q, m,anss=0,amss=0;
		cin >> q >> m;
		for (int i = 1; i <= q / 2; i++) {
			if (q % i == 0) {
				anss += i;
			}
		}for (int i = 1; i <= m / 2; i++) {
			if (m % i == 0) {
				amss += i;
			}
		}if (anss == m && amss == q) {
			printf("match.");
		}
		else {
			printf("NO!");

		}//T12

		//交换座位
		int d1,ss=0;
		cin >> d1;
		vector<int >box(d1);
		for (int i = 0; i < d1; i++) {
			cin >> box[i];
			if (box[i] != i + 1){ss++;}
			
		}cout << ss << endl;//T13

		//若某数的平方，其低位与该数相等，则称守形数，请尝试编程计算出特定区间内的守形数。

			long long a1, b1;
			cin >> a1 >> b1;

			bool has_ans = false; // 标记有没有找到守形数（应对题目“没有满足条件输出空格”的坑）

			for (long long i = a1; i <= b1; i++) {
				long long square = i * i; // 求平方 (注意防溢出)

				// 接下来求 i 的位数，算出该对多少取模 (比如 i=25，我们要 mod 100)
				long long mod = 1; // 初始化取模的基准
				long long temp = i;
				while (temp > 0) {
					mod *= 10;     // 每多一位，取模基数乘10
					temp /= 10;
				}

				// 判断：平方的低位是否等于原数
				if (square % mod == i) {
					cout << i << " ";
					has_ans = true;
				}
			}

			// 特殊要求：如果没有满足条件的数据，输出空格
			if (!has_ans) {
				cout << " ";
			}
			cout << endl;//14

			//完美数，又称完全数或完备数，是一些特殊的自然数。它所有的真因子（即除了自身以外的约数）的和，恰好等于它本身。请编程判断，一个数字是否为完美数。
			int q1 ,anss1 = 0;
			cin >> q1;
			for (int i = 1; i <= q1 / 2; i++) {
				if (q1 % i == 0) {
					anss1 += i;
				}if (anss1 == q1) {
					printf("Perfeot!");
				}
				else {
					printf("pitY");
				}
			}//T15

			//给出若干个整数，询问其中是否有一对数的和等于给定的数。
			int j;
			cin >> j;
			vector<int>an(j);
			for (int i = 0; i < j; i++) {
				cin >> an[i];
			}sort(an.begin(), an.end());
			int lef = 0, ri = j - 1,aa;
			cin >> aa;
			while (lef < ri)
			{
				if (an[lef] + an[ri] == aa) {
					cout << an[lef] << ' ' << an[ri] << endl;
					return 0;
				}
				else if (an[lef] + an[ri] > aa) {
					ri--;
				}
				else {
					lef++;
				}
			}cout << "No" << endl;//T16
			
	return 0;

}