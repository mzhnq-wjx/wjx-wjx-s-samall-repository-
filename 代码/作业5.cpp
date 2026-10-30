#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
int main() {
    //求1+（1+2）+（1+2+3）+......
    int n;
    int s = 0;
    cin >> n;
    s += n * (n + 1) * (n + 2) / 6;
    cout << s << endl;//T1

    //编程输出数字1到5，要求数字之间用一个空格隔开
    for (int i = 1; i <= 5; i++) {
        cout << i << ' ';
    }cout << endl;//T2

    //请编程输出从1开始递增到n,要求数字之间用一个空格隔开。
    int n1;
    cin >> n1;
    for (int i = 1; i <= n1; i++) {
        cout << i << ' ';
    }cout << endl;//T3

    //请编程输出n以内的奇数，要求数字之间用一个空格隔开。
    int n2;
    cin >> n2;
    for (int i = 1; i <= n2; i += 2) {
        cout << i << ' ';
    }cout << endl;//T4

    //求阶乘
    int n3,s1=1;
    cin >> n3;
    for (int i = 1; i <= n3; i++) {
        s1 *= i;
    }cout <<s1<< endl;//T4

    //班上有n个小朋友，老师打算将带来的棉花糖分成n 堆，每堆的数量分别是：第一堆有11颗，第二堆有22颗，第三堆有33颗，第四堆有44颗……）。
    int n4,s2=0;
    cin >> n4;
    for (int i = 0; i <= n4; i++) {
        int i1 = 11 * i;
        s2 += i1;
    }cout << s2 << endl;//T5

    //输入一个数字n,再读入n个整数,，并且即时输出这n个整数。
    int n5,f;
    cin >> n5;
    for (int i = 1; i <= n5; i++) {
        cin >> f;
        cout << f << endl;
    }//T6

    //请编程输出1-n之间的偶数，要求数字之间用一个空格隔开。
    int n6;
    cin >> n6;
    for (int i = 2; i <= n6; i += 2) {
        cout << i << ' ';
    }cout << endl;//T7

    //班上有n个小朋友，老师打算将带来的棉花糖分成n 堆，每堆的数量分别是：第一堆有1颗，第二堆有12颗，第三堆有123颗……）。
    long long n7,w=0;
    string str = "";
    cin >> n7;
    for (int i = 1; i <= n7; i++) {
        str += to_string(i);
        w += stoll(str);
    }cout << w << endl;//T8
       

    
}