#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <iostream>
#include<string>
#include <math.h>
using namespace std;
int max(int x, int y) {
    int z;
    if (x > y)z = x;
    if (x <= y)z = y; return(z);
}
int main() {

    //1、求出它是几位数2、分别输出每一位数字（用空格隔开，同一行输出）3、按逆序输出各位数字，例如原数为：321，应输出：123
    char str[1005];
    while(cin >> str){
        int len = strlen(str);
        cout << len << endl;
    for (int i = 0; i < len; i++) {

        printf("%c", str[i]);
        if (i != len - 1) { // 只要不是最后一个字符，才打印空格
            printf(" ");
        }
    }printf("\n");
    for (int i = len-1; i >= 0; i--) {

        printf("%c", str[i]);

    }
    }//T14
    

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



        int n; // 这里假设我们一次读入 4 个数
        // 多组输入
        while (scanf("%d", &n) != EOF) {
            int arr[10]; // 定义一个数组装数据
            for (int i = 0; i < n; i++) {
                scanf("%d", &arr[i]); // 读入 n 个数
            }

            // 🌟 冒泡排序核心逻辑
            // 外层循环控制比较的轮数
            for (int i = 0; i < n - 1; i++) {
                // 内层循环负责相邻两个数比较
                for (int j = 0; j < n - 1 - i; j++) {
                    if (arr[j] > arr[j + 1]) { // 如果前一个比后一个大
                        // 交换它们
                        int t = arr[j];
                        arr[j] = arr[j + 1];
                        arr[j + 1] = t;
                    }
                }
            }

            // 输出结果
            for (int i = 0; i < n; i++) {
                printf("%d ", arr[i]);
            }
            printf("\n");//ds写法,T8

    }
        /*企业发放的奖金根据利润提成。
        利润低于或等于100000元的，奖金可提10%;
        利润高于100000元，低于200000元(100000 < I≤200000)时，低于100000元的部分按10% 提成，高于100000元的部分，可提成7.5%;   
        当200000 < I≤400000时，低于200000元部分仍按上述办法提成，(下同)，高于200000元的部分按5% 提成;
        当400000 < I≤600000元时，高于400000元的部分按3% 提成;
        当600000 < I≤1000000时，高于600000元的部分按1.5%提成;
        当I > 1000000时，超过1000000元的部分按1%提成。从键盘输入当月利润I, 求应发奖金总数。*/
        double bonus, i;
        cin >> i;
        if (i <= 100000) {
            bonus = i * 0.1;
        }
        else if (i > 100000 && i <= 200000) {
            bonus = 10000 + (i - 100000) * 0.075;
        }
        else if (i > 200000 && i <= 400000) {
            bonus = 17500 + (i - 200000) * 0.05;
        }
        else if (i > 400000 && i <= 600000){
            bonus = 27500 + (i - 600000) * 0.03;
        }
        else if (i > 600000 && i <= 1000000) {
            bonus = 33500 + (i - 600000) * 0.015;
        }
        else {
            bonus = 39500 + (i - 1000000) * 0.01;
        }
        cout << bonus << endl;//T9
     
        
        //给出一百分制成绩，要求输出成绩等级A,B,C,D,E
        int sc;
        cin >> sc;
        if (sc >= 90) {
            printf("A");
        }
        else if (sc >= 80 && sc < 90) {
            printf("B");
        }
        else if (sc < 80 && sc >= 70) {
            printf("C");
        }
        else if (sc >= 60 && sc < 70) {
            printf("D");
        }
        else {
            printf("E");//T10
        }

        //分段函数1
        long long x,y;
        cin >> x;
        if (x < 1) {
            y = x;
        }
        else if (x < 10 && x >= 1) {
            y = 2*x - 1;
        }
        else {
            y = 3 * x - 11;
        }
        cout << y << endl;//T11

        //有三个整数,由键盘输入，输出其中的最大的数。
        int a2, b2, c2,d2;
        cin >> a2 >> b2 >> c2;
        d2 = max(a2, max(b2, c2));
        cout << d2 << endl;//T12

        //输入在一行中给出个4位正整数，其间以空格分隔，分别表示火车的出发时间和到达时间。每个时间的格式为2位小时数（00−23）和2位分钟数（00−59），假设出发和到达在同一天内。
        int go, ar, a3, b3;
        cin >> go >> ar;
        a3 = ar / 100 - go / 100;
        b3 = ar % 100 - go % 100;
        if (b3 < 0) {
            b3 += 60;
            a3 -= 1;
        }
        printf("%02d:%02d", a3, b3);//T13

        //本题要求编写程序，计算4个整数的和与平均值
        int a4, b4, c4, d4, sum;
        double av;
        cin >> a4 >> b4 >> c4 >> d4;
        sum = a4 + b4 + c4 + d4;
        av = sum / 4.0;
        printf("Sum = %d; Average = %.1lf  ", sum, av);//T15

        //分段函数1
        double x1, y1;
        cin >> x1;
        if (x1 != 10) {
            y1 = x1;
        }
        else {
            y1 = 1/x1;
        }
        printf("f(%.1lf) = %.1lf ", x1, y1);//T16

        //本题要求编写程序，计算2个正整数的和、差、积、商并输出。题目保证输入和输出全部在整型范围内。
        int q, w, e, r, t, u;
        cin >> q >> w;
        e = q + w;
        r = q - w;
        t = q * w;
        u = q / w;
        printf("%d+%d=%d\n%d-%d=%d\n%d*%d=%d\n%d/%d=%d\n", q, w, e, q, w, r,  q, w, t, q, w, u);//T17
	return 0;
}