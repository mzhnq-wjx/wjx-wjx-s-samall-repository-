#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
int main() {
	//为了提倡居民节约用电，某省电力公司执行"阶梯电价"，安装一户一表的居民用户电价分为两个"阶梯"：月用电量50千瓦时（含50千瓦时）以内的，电价为0.53元 / 千瓦时；超过50千瓦时的，超出部分的用电量，电价上调0.05元 / 千瓦时。请编写程序计算电费
	double x, y;
	cin >> x;
	if (x <= 50&&x>0) {
		y = x * 0.53;
		printf("cost=%.2lf\n", y);
	}
	else if(x>50){
		y = 50 * 0.53 + (x - 50) * 0.58;
		printf("cost=%.2lf\n", y);
	}
	else {
		printf("Invalid Value!");
	}//T1

	//给定一个整数，判断它能否被 3, 5, 7 整除，并输出以下信息：1、能同时被3,5,7 整除(直接输出 3 5 7，每个数中间一个空格)；2、只能被其中两个数整除(输出两个数，小的在前，大的在后。例如：35或者37 或者57，中间用空格分隔)；3、只能被其中一个数整除（输出这个除数）；4、不能被任何数整除，输出小写字符n, 不包括单引号。


    
        int n;
        scanf("%d", &n);

        // 1. 直接累加！只要条件成立，返回的就是 1，不成立就是 0
        int cnt = (n % 3 == 0) + (n % 5 == 0) + (n % 7 == 0);

        // 2. 根据累加出来的个数，进行简单粗暴的输出
        if (cnt == 3) {
            printf("3 5 7\n");
        }
        else if (cnt == 2) {
            // 巧妙判断是哪两个（因为按从小到大，我们可以直接依次判断）
            if (n % 3 == 0 && n % 5 == 0) printf("3 5\n");
            else if (n % 3 == 0 && n % 7 == 0) printf("3 7\n");
            else if (n % 5 == 0 && n % 7 == 0) printf("5 7\n");
        }
        else if (cnt == 1) {
            if (n % 3 == 0) printf("3\n");
            else if (n % 5 == 0) printf("5\n");
            else if (n % 7 == 0) printf("7\n");
        }
        else {
            printf("n\n");
        }

        //累加法(ds)T2


        
            int n1;
            scanf("%d", &n1);

            // 1. 定义除数和“结果篮”
            int divisors[3] = { 3, 5, 7 }; // 待检查的除数
            int ans[3];                  // 用来存放能整除 n 的数
            int cnt1 = 0;                 // 计数器，记录找到了几个符合条件的除数

            // 2. 循环遍历 3, 5, 7
            for (int i = 0; i < 3; i++) {
                // 如果 n 能被当前除数整除
                if (n1 % divisors[i] == 0) {
                    ans[cnt1] = divisors[i]; // 把这个除数存进“结果篮”
                    cnt1++;                  // 计数器 +1
                }
            }

            // 3. 根据“结果篮”里的数量，统一输出
            if (cnt1 == 0) {
                // 情况4：一个都不能整除
                printf("n\n");
            }
            else {
                // 情况1、2、3：按顺序输出“结果篮”里的数字
                for (int i = 0; i < cnt1; i++) {
                    printf("%d", ans[i]);

                    // 如果不是最后一个数字，就打印一个空格隔开
                    if (i != cnt1 - 1) {
                        printf(" ");
                    }
                }
                printf("\n"); // 最后换行
            }//数组法（ds）T2

            //假设一个三位数 x 的百位、十位、个位上的数字分别为a, b, c，如果a^3+b^3+c^3恰好等于x ，则称 x 为水仙花数。请编写程序判断一个三位正整数是否是水仙花数。
            string a1;
            int box,box1=0;
            cin >> a1;
            for (int i1 = 0; i1 < a1.length(); i1++) {
                box = a1[i1]-'0';
                box1 += box * box * box;

            }
            if (box1 == stoi(a1)) {
                printf("true\n");
            }
            else {
                printf("false\n");
            }//数组发（我自己想的）T3

            int n;
            cin >> n;
            int a = n / 100;       // 百位
            int b = n / 10 % 10;   // 十位
            int c = n % 10;        // 个位

            if (a * a * a + b * b * b + c * c * c == n) {
                 printf("true\n");// 是水仙花数
            }
           
            
            else {
                printf("false\n");
            }//取余法（ds）T3 

            //要求从键盘获取 a,b,c 的值后输出它们的和
            int a, b, c;
            cin >> a >> b >> c;
            cout << (a + b + c) << endl;//T4

            //已知梯形的上底是 a，下底是 b，高是 c，编写程序计算梯形的面积并输出结果。
            int a2, b2, c2;
            cin >> a2 >> b2 >> c2;
            cout <<( (a2 + b2) * c2 / 2)<<endl;

            //从键盘获取两个变量 a, b 的值，交换 a 与 b 的值并分别输出。
                int a, b, c;
                cin >> a >> b;
                c = a;
                a = b;
                b = c;
                cout << a << endl << b;//T5

                //本题的意思是输入坐标 x, y，判断是否有落在 4 个圆上，如果有在 4 个圆中的其中一个，则输出 10，落在所有的圆外，则输出 0。
                double x1, y1,d1,d2,d3,d4;
                scanf("%lf%lf", &x1, &y1);
                d1 = (x1 + 2) * (x1 + 2) + (y1 - 2) * (y1 - 2);
                d2 = (x1 + 2) * (x1 + 2) + (y1 + 2) * (y1 + 2);
                d3 = (x1 - 2) * (x1 - 2) + (y1 - 2) * (y1 - 2);
                d4 = (x1 - 2) * (x1 - 2) + (y1 + 2) * (y1 + 2);
                if (d1 < 1 && d2 < 1 && d3 < 1 && d4 < 1) {
                    cout << 10 << endl;
                }
                else {
                    cout << 0 << endl;
                }//T6
            


            return 0;
        
    
}