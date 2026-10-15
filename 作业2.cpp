#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <iostream>
#include<string.h>
#include<math.h>
using namespace std;
int max(int x, int y) {
	int z;
	if (x > y)z = x;
	if (x <= y)z = y; return(z);
}
int main(){
	//输入一个整数，并且让计算机输出它。
	int a;
	cin >> a;
	cout << a << endl;//T1

	//输入一个数字n，程序会输出一句英文，Your number is n.，其中n 代指输入的数字。
	int n;
	cin >> n;
	printf("Your number is %d.\n", n);//T2

	// 请你编程设计一个疯狂复读机，输入一个数字后，计算机立刻输出3行每行一个相同的数字
	int b;
	cin >> b;
	printf("%d\n%d\n%d\n", b, b, b);//T3

	//编写一个 C 语言程序，输出以下信息
	printf("***********\nVeryGood!\n***********");//T4

	//编写一个C语言程序，运行时输出以下图形：
	printf("*****\n   *****\n      *****\n         *****\n");//T5

	//编写一个程序，输入a、b、c三个实数，输出其中最大值。提示：（1）需要输入实数，用double；（2）输出使用% g 输出，如：输入为2.3，输出也为2.3，但不明确有几位有效数字。
	double a1, b1, c1, d1;
	cin >> a1 >> b1 >> c1;
	d1 = max(max(a1, b1), c1);
	cout << d1 << endl;//T6

	//假如我国国民生产总值的年增长率为7 %, 计算10年后我国国民生产总值与现在相比增长多少百分比。计算公式为：p = (1 + r)r为年增长率,n为年数,p为与现在相比的倍数。
	double p, r = 0.07;
	p = (1 + r) * (1 + r) * (1 + r) * (1 + r) * (1 + r) * (1 + r) * (1 + r) * (1 + r) * (1 + r) * (1 + r);
	printf("p=%.6lf\n", p);//T7

	

			//算利息		
				double a4, p1, p2, p3, p4, p5;
				cin >> a4;
				p1 = a4 * (1 + 5 * 0.03);
				p2 = a4 * (1 + 2 * 0.021) * (1 + 3 * 0.0275);
				p3 = a4 * (1 + 3 * 0.0275) * (1 + 2 * 0.021);
				p4 = a4 * (1 + 0.015) * (1 + 0.015) * (1 + 0.015) * (1 + 0.015) * (1 + 0.015);
				p5 = a4 * pow((1 + 0.0035 / 4), 20);
				printf("p1=%lf\np2=%lf\np3=%lf\np4=%lf\np5=%lf\n", p1, p2, p3, p4, p5);
				// T9

				//还房贷
				double d3=300000, p8=6000, r3=0.01,m;
				m = (log10(p8) - log10(p8 - d3 * r3)) / log10(1 + r3);
				printf("m=%.1lf\n", m);

				//设圆半径r = 1.5，圆柱高h = 3，求圆周长、圆面积、圆球表面积、圆球体积、圆柱体积。scanf 输入数据，输出计算结果，输出时要求有文字说明，取小数点后2 位数字。注意：圆的半径与圆柱高需要输入，且设pi = 3.1415926。
				double r8 ,h ,pi=3.1415926, C, S, BS, V, ZV;
				scanf("%lf,%lf", &r8,&h);
				C = 2 * pi * r8;
				S = pi * r8 * r8;
				BS = 4 * pi * r8 * r8;
				V = 4 * pi * r8 * r8 * r8/3;
				ZV = pi * r8 * r8 * h;
				printf("圆周长:l=%.2lf\n圆面积:s=%.2lf\n圆球表面积:sq=%.2lf\n圆球体积:vq=%.2lf\n圆柱体积:vz=%.2lf",C,S,BS,V,ZV);


				
			
		return 0;
	}
		

