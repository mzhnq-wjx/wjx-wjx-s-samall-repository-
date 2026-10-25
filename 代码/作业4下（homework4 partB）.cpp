#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;
int main() {
    //输入一个年份，判断这一年是否是闰年，如果是输出1,不是输出0
    int year;
    cin >> year;
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        cout << 1 << endl;
    }
    else {
        cout << 0 << endl;
    }//T1

    //小 B 喜欢吃苹果。她今天吃掉了x个苹果。英语课上学到了 apple 这个词语，想用它来造句。如果她吃了 1 个苹果，就输出Today, I ate 1 apple.；如果她没有吃，那么就把 1 换成 0；如果她吃了不止一个苹果，别忘了 apple 这个单词后面要加上代表复数的 s。你能帮她完成这个句子吗？
    int ap;
    cin >> ap;
    if (ap > 1) {
        printf("Today, I ate %d apples.", ap);
    }
    else if (ap == 0) {
        printf("Today, I ate %d apple.", ap);
    }
    else {
        cout << "Today, I ate 1 apple." << endl;
    }
    //给出三个整数,要求把这三位整数从小到大排序。
    int n = 3;
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
    printf("\n");//T2

    //打算把这三条线段拼成一个三角形，它可以是什么三角形呢？
    int a, b, c, d;
    cin >> a >> b >> c;
    if (a > b) { d = a, a = b, b = d; }
    if (a > c) { d = a, a = c, c = d; }
    if (b > c) { d = b, b = c, c = d; }
    if (a + b <= c) {
        cout << "Not triangle" << endl;
        return 0;
    }
    long long a1 = (long long)a * a;
    long long b1 = (long long)b * b;
    long long c1 = (long long)c * c;
    if (a1 + b1 == c1) {
        cout << "Right triangle" << endl;
    }
    else if (a1 + b1 > c1) {
        cout << "Acute triangle" << endl;
    }
    else {
        cout << "Obtuse triangle" << endl;
    }
    if (a == b || b == c) {
        cout << "Isosceles triangle" << endl;

    }if (a == b && b == c) {
        cout << "Equilateral triangle" << endl;

    }//T3

    //P 老师需要去商店买 n 支铅笔作为小朋友们参加 NOIP 的礼物。商店有 3 种包装的铅笔，不同包装内的铅笔数量和价格可能不同。为了公平起见，P 老师决定只买同一种包装的铅笔。商店不允许拆开铅笔包装，因此购买的铅笔数量可能超过 n。请计算在每种包装的数量都足够的情况下，买够至少 n 支铅笔所需的最少花费。等价的独立程序应从标准输入读取题目给定的数据，并将最少花费输出到标准输出。
    long long num, q1, q2, q3, co1, co2, co3;
    cin >> num >> q1 >> co1 >> q2 >> co2 >> q3 >> co3;
    long long av1 = num / q1, av2 = num / q2, av3 = num / q3;
    if (num % q1 != 0) {
        av1++;
    }
    if (num % q2 != 0) {
        av2++;
    }
    if (num % q3 != 0) {
        av3++;
    }
    co1 *= av1;
    co2 *= av2;
    co3 *= av3;
    cout << min(co3, min(co1, co2));//T4

    //输入一个0--100以内的分数，编写程序，完成自动评语：大于等于90分时，输出very good!。
    int score;
    cin >> score;
    if (score >= 90) {
        cout << "very good!" << endl;
    }

    //知道两个整数的值，判断大小。
    int x, y;
    cin >> x >> y;
    cout << max(x, y) << endl;//T5

    //输入三个整数a,b,c，分别表示三条线段的长度，请编程判断：这三根线段能否组成三角形，如果可以则输出 yes ，否则输出 no 
    int a1, b1, c1;
    cin >> a1 >> b1 >> c1;
    if (a1 > b1) {
        swap(a1, b1);
    }if (a1 > c1) {
        swap(a1, c1);
    }if (b1 > c1) {
        swap(b1, c1);
    }if (a1 + b1 >= c1) {
        cout << "no" << endl;
    }
    else {
        cout << "yes" << endl;
    }//T6

    //自从学了信息学之后，每天的小测，似乎已经是佩奇不可避免的恐惧了。输入近两天的成绩，如果佩奇刚好只有一天ac就输出yes，否则输出no
    int f1, f2;
    cin >> f1 >> f2;
    if ((f1 == 100 || f2 == 100) && !(f1 == 100 && f2 == 100)) {
        cout << "yes" << endl;
    }
    else {
        cout << "no" << endl;
    }//T7

    //食谱中有一个美味指数k，使用的面粉重量必须是美味指数的倍数，面包才能制作成功。请你根据输入情况判断，猪妈妈能否成功制作好吃的面包，如果成功则输出"Great!"，否则输出"Fail.." 。
    int m, k;
    cin >> m >> k;
    if (m % k == 0) {
        cout << "Great!" << endl;
    }
    else {
        cout << "Fail.." << endl;
    }//T8

    //设找到自行车，开锁并且上自行车的时间为27秒；停车锁车的时间为23秒；步行每秒行走1.2米，骑车每秒行走3m
    int mi;
    cin >> mi;
    int s1 = mi / 1.2, s2 = mi / 3 + 50;
    if (s1 > s2) {
        cout << "Bike" << endl;
    }
    else {
        cout << "Walk" << endl;
    }//T9

    //输入某学生成绩，根据成绩好坏输出相应评语
    int fen;
    cin >> fen;
    if (fen >= 90) {
        cout << "Excellent" << endl;
    }
    else if (fen >= 80) {
        cout << "Good" << endl;
    }
    else if (fen >= 60) {
        cout << "Pass" << endl;
    }
    else {
        cout << "Fail" << endl;

    }//T10

    //第一代的小蓝车，开车需要解开由 3 个数字组成的机械密码锁，可以理解为是一个三位数。聪明的佩奇开始表演他的技术，实验破译一辆小蓝车。
    int se;
    cin >> se;
    if (se % 10 != 7) {
        cout << "fail" << endl;
    }
    else if (se % 3 == 0 && se % 12 != 0) {
        cout << "done" << endl;
    }//T11

    //输入一个整数，判断它是否为偶数
    int j;
    cin >> j;
    if (j % 2 == 0) {
        cout << "yes" << endl;
    }
    else {
        cout << "no" << endl;
    }//T12

    //儿童游乐园只允许身高小于等于 140cm 的小朋友进入，编写程序，完成入园的自动判断：当输入小朋友的身高小于等于 140 的时候，输出 Pass! 。
    int hi;
    if (hi <= 140) {
        cout << "Pass!" << endl;
    }//T13

    //班里组织了知识竞赛活动，最后一轮需要播报成绩。主持人需要在播报成绩的同时，需要显示得分的等级。
    int fe;
    cin >> fe;
    if (fe >= 90 && fe <= 100) {
        cout << "very good!" << endl;
    }
    else if (fe >= 80) {
        cout << "good" << endl;
    }
    else if (fe >= 70) {
        cout << "normal" << endl;
    }
    else if (fe >= 60) {
        cout << "pass" << endl;
    }
    else {
        cout << " fail" << endl;
    }//T14

    //输入一个 0--100 以内的分数，编写程序，完成自动评语：大于等于 90 分时，输出 very good! ；否则，输出 keep it up!。
    int fe1;
    cin >> fe1;
    if (fe1 >= 90) {
        cout << "very good!" << endl;
    }
    else {
        cout << "keep it up!" << endl;

    }//T15

    /*一个最简单的计算器，支持 + , -, *, / 四种运算。仅需考虑输入输出为整数的情况，数据和运算结果不会超过int表示的范围。然而：

    如果出现除数为0的情况，则输出：Divided by zero!

        如果出现无效的操作符(即不为 + , -, *, / 之一，则输出：Invalid operator!*/
    int l1, l2;
    char op;
    cin>>l1>>l2>>op;
    switch(op) {
    case'+':
        cout << l1 + l2 << endl; break;
    case'-':
        cout << l1 - l2 << endl; break;
    case'*':
        cout << l1 * l2 << endl; break;
    case'/':
        
        if (b == 0) {
            cout << "Divided by zero!" << endl;
        }
        else {cout << l1 / l2 << endl; break;
        }
    default:
        cout << "Invalid operator!" << endl; break;
    }//T16

    //知道两个整数的值，判断大小。
    int g1, g2;
    cin >> g1 >> g2;
    if (g1 > g2) {
        cout << "x>y" << endl;
    }else  if (g1 < g2) {
        cout << "x<y" << endl;
    }
    else {
        cout << "x=y" << endl;

    }//T17

    //猪猪学校最近准备实行分层教学，是指将水平接近的同学放在同一个小组，进行针对训练。 分层的依据是同学们的入学成绩，现在知道乔治的入学成绩，请问他会被分到哪一层？
    int fen1;
    cin >> fen1;
    if (fen1 >90&&fen1<=100) {
        cout << "A" << endl;
    }
    else if (fen1 > 80) {
        cout << "B" << endl;
    }
    else if (fen1 > 60) {
        cout << "C" << endl;
    }
    else {
        cout << "D" << endl;

    }//T18

    //晶晶的朋友贝贝约晶晶下周一起去看展览，但晶晶每周的1、3、5有课必须上课，请帮晶晶判断她能否接受贝贝的邀请
    int da;
    cin >> da;
    switch (da) {
    case 1:case 3 :case 5:
        cout << "YES" << endl;
    default:
        cout << "NO" << endl;

    }//T19

}










