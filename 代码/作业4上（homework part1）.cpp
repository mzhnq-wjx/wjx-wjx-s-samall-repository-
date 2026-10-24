#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;
int main() {
	//牛牛最近学习了 C++ 入门课程，这门课程的总成绩计算方法是：
	//总成绩 = 作业成绩×20 % +小测成绩×30 % +期末考试成绩×50 %;牛牛想知道，这门课程自己最终能得到多少分。
	int x, y, z;
	cin >> x >> y >> z;
	x *= 0.2;
	y *= 0.3;
	z *= 0.5;
	cout << x + y + z << endl;//T1

	//输入年份和月份，求当月有多少天。注意，闰年的判断方法为能被4整除且不能被100整除，或者能被400整除
	int year, m;
	cin >> year >> m;
	switch (m) {
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		cout << 31 << endl; break;
	
	case 4:case 6:case 9:case 11:
		cout << 30 << endl; break;
	case 2:
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
			cout << 29 << endl;
		else
			cout << 28 << endl; break;

 }//T2

	//每个队伍上都有若干个同学，只有特定编号的同学，才会被乔治选中。现在知道3个区间，请问 $$ x同学有没有在这三个区间内（被乔治选中）。
	struct interval {
		int l;
		int r;

	};
	interval ra[3];
	int q;
	for (int i = 0; i < 3; i++) {
		cin >> ra[i].l >> ra[i].r;
	}
	cin >> q; 
		bool f = false;
	for (int i = 0; i < 3; i++) {
		if (q >= ra[i].l && q <= ra[i].r) {
			cout << i + 1 << endl;
			f = true;
			break;
		}
	}if (!f) {
		cout << "ohno" << endl;
	}//T3

	char ch;
	cin >> ch;
	if (ch >= 'a' && ch <= 'z') {
		ch -= 32;
		cout << ch << endl;
	}
	else {
		cout << ch << endl;
	}//T4

	//输入三角形的三边（数据保证可以构成三角形），判断它是否是直角三角形
	int a, b, c;
	cin >> a >> b >> c;
	if ((a * a + b * b == c * c) || (a * a == b * b + c * c) || (a * a + c * c == b * b)) {
		cout << "yes" << endl;
	}
	else {
		cout << "no" << endl;
	}//T5

	//现在需要采购一些苹果。每名同学分到固定数量的苹果，已知每人分到的数量和同学人数，请计算需要采购的苹果总数。等价的独立程序应从标准输入读取数据，并将答案输出到标准输出。
	int ap, pe;
	cin >> ap >> pe;
	cout << ap * pe << endl;//T6

	//现在有t毫升肥宅快乐水，要均分给n名同学。每名同学需要2个杯子。现在想知道每名同学可以获得多少毫升饮料（严格精确到小数点后3位），以及一共需要多少个杯子。
	int  n;
	double t;
	cin >> t >> n;
	printf("%.3lf\n", t / n);
	cout << 2 * n << endl;//T7

	//这一天，小鱼给自己的游泳时间做了精确的计时（本题中的计时都按24小时制计算），它发现自己从a时b分一直游泳到当天的c时d分，请你帮小鱼计算一下，它这天一共游了多少时间呢？
	int t1, m1, t2, m2,h,min;
	cin >> t1 >> m1 >> t2 >> m2;
	min = m2 - m1;
	h = t2 - t1;
	if (min < 0) {
		min += 60;
		h--;
	}
	cout << h << " " << min << endl;//T8

	//输入一个三角形的三边长计算三角形的面积，四舍五入精确到 1 位小数。
	double a1, b1, c1, p;
	cin >> a1 >> b1 >> c1;
	p = (a1 + b1 + c1)/2.0;
	double S = sqrt(p * (p - a) * (p - b) * (p - b));
	printf(".1lf", S);//T9

	//目标可以看成是一个平面直角坐标系，标靶是正方形的，它的四个角的坐标分别是 (1，−1),(1，1),(−1，−1),(−1，1).小喵扔出的飞镖落在了坐标(x,y)，请你帮忙判断一下小喵是否命中标靶并得分，如果是输出“yes”，否则输出“no”。
	int x1, y1;
	cin >> x1 >> y1;
	if ((x1 <= 1 &&x1>=-1)&& (y1 <= 1 && y1 >= -1)) {
		cout << "yes" << endl;
	}
	
	else {
		cout << "no" << endl;
	}//T10

	//学校和 yyy 的家之间的距离为s米，而 yyy 以v米每分钟的速度匀速走向学校。在上学的路上，yyy 还要额外花费10分钟的时间进行垃圾分类。学校要求必须在上午8:00到达，请计算在不迟到的前提下，yyy 最晚能什么时候出门。由于路途遥远，yyy 可能不得不提前一点出发，但是提前的时间不会超过一天。注意，yyy 只能在每分钟的第0秒时出发。
	int s, v, h1 = 8, m1 = 0, zm;
	cin >> s >> v;
	zm = (s + v - 1) / v + 10;
	m1 -= zm;
	while (m1 < 0) {
		m1 += 60;
		h1--;
	}
	if (h1 < 0) {
		h1 += 24;
	}
	printf("%02d:%02d", h1, m1);//T11

	//月用电量在150千瓦时及以下部分按每千瓦时0.4463元执行，月用电量在151∼400千瓦时的部分按每千瓦时0.4663元执行，月用电量在401千瓦时及以上部分按每千瓦时0.5663元执行。小玉想自己验证一下，电费通知单上应交电费的数目到底是否正确呢。请编写一个程序，已知用电总计，根据电价规定，计算出应交的电费应该是多少。
	int W;
	double fee;
	cin >> W;
	if (W <= 150) {
		fee = W * 0.4463;
	}
	else if (W <= 400) {
		fee = 150 * 0.4463 + (W - 150) * 0.4663;
	}
	else {
		fee= 150 * 0.4463+250*0.4663+ (W - 400) * 0.5663;
	}
	printf("%.1lf", fee);//T12

	//一些整数可能拥有以下的性质：性质 1：是偶数；性质 2：大于4且不大于12.小 A 喜欢这两个性质同时成立的整数；Uim 喜欢这至少符合其中一种性质的整数；小 B 喜欢刚好有符合其中一个性质的整数；正妹喜欢不符合这两个性质的整数。现在给出一个整数，请问他们是否喜欢这个整数？
	int num ;
	cin >> num;
	printf("%d ",(num % 2==0 && (num > 4 && num <= 12))); 
	printf("%d ",(num % 2 == 0 || (num > 4 && num <= 12)));
	printf("%d ", (num % 2 == 0 && !(num > 4 && num <= 12))|| (num % 2 != 0 && (num > 4 && num <= 12)));
	printf("%d ", (num % 2 != 0 && !(num > 4 && num <= 12)));//T13

	
}

