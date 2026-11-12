#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <iostream>
#include <vector>
#include <math.h>
#include<queue>
#include<algorithm>
using namespace std;
int main() {
    //知道 n 个整数，查找其中是否存在值为x 的数，有则输出该数第一次出现的位置，没有则输出-1
    int n;
    cin >> n;
    vector<int >v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int m, flag = 1;
    cin >> m;
    for (int i = 0; i < n; i++) {
        if (v[i] == m) {
            cout << i + 1;
            flag = 0;
            break;
        }
    }
    if (flag) {
        cout << "-1";
    }
    cout << endl;//T1

    //水仙花数，是指一个三位数，它的各位的立方和是其本身。现在知道一个区间，请你输出其中的水仙花数。
    int a, b, c, d, e, f, g = 0;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        c = i % 10;
        d = i / 10 % 10;
        e = i / 100;
        f = pow(c, 3) + pow(d, 3) + pow(e, 3);
        if (f == i) {
            cout << i << ' ';
            g++;
        }
    }cout << endl << g;//T2

    //小猪佩奇和大象艾米丽要来一场追逐游戏，乔治负责比赛直播，他每过一段时间，就看一次里程表，直播比赛情况：1 知道乔治会直播n 次； 2 每次直播两个整数，分别表示佩奇当前的里程a 和艾米丽当前的里程 b ； 3 第 n 次的直播，领先者刚好冲过终点。
    int n1, ans = 0;
    cin >> n1;
    int a1, b1;
    cin >> a1 >> b1;
    bool ll = (a1 > b1);
    for (int i = 1; i < n1; i++) {
        cin >> a1 >> b1;
        bool bl = (a1 > b1);
        if (ll != bl) {
            ans++;
            ll = bl;
        }
    }if (ll) {
        cout << "peiqi" << endl;
    }
    else {
        cout << "aimili" << endl;

    }cout << ans << endl;//T3

    //已知  n 位候选人的得票情况，并且规则是：“编号最小且得票最高”的同学是班长，“编号最小并且票数次高”或者“得票数与最高相同，编号次小”的同学为副班长。请你帮忙点票，输出副班长的编号。
    int l, k;
    cin >> l;
    priority_queue<pair<int, int>>pq;
    for (int i = 1; i < l; i++) {
        cin >> k;
        pq.push({ k,-i });
    }pq.pop();
    int aa = -pq.top().second;
    cout << aa << endl;//T4

    //模仿跳水赛事的评分规则：给出 n 个整数的分数，要求先去掉最高分和最低分，再求和，你能完成这个任务吗？
    int dd;
    int dda = 0;
    cin >> dd;
    vector<int >va(dd);
    for (int i = 0; i < dd; i++) {
        cin >> va[i];
    }sort(va.begin(), va.end());
    for (int i = 1; i < dd - 1; i++) {

        dda += va[i];
    }cout << dda << endl;//T5

    //求斐波那契数列
    int ff;
    cin >> ff;
    vector<long long >vb(ff);
    vb[0] = 1;
    vb[1] = 1;
    for (int i = 2; i < ff; i++) {
        vb[i] = vb[i - 1] + vb[i - 2];
    }cout << vb[ff - 1];//T6

    //一个从小到大排序的数组，一个平台就是连续的一串值相同的元素，并且这串元素不能再延伸。试编写一个程序，把数组最长的平台找出来。
    int ffo;
    cin >> ffo;
    vector<long long >vc(ffo);
    int mlen = 1, clen = 1;
    for (int i = 0; i < ffo; i++) {
        cin >> vc[i];
    }
    if (ffo == 1) {
        cout << '1' << endl;
        return 0;
    }
    for (int i = 1; i < ffo; i++) {
        if (vc[i] == vc[i - 1]) {
            clen++;
        }
        else {
            mlen = max(clen, mlen);
            clen = 1;
        }
    } mlen = max(clen, mlen);
    cout << mlen << endl;//T7

    //猪爷爷的牧场来了一只喵星人，它喜欢在篱笆上玩跳跃的游戏。开始的时候，喵星人站在的第一个篱笆上，然后它只会跳到高度是当前篱笆高度整数倍并且最近的篱笆上。如果没有合适跳跃的篱笆，它就会停在篱笆上玩自己的尾巴。请问它最后会停在哪个篱笆上玩尾巴？
    int ddaa, li, ba;
    cin >> ddaa;
    vector<long long >vd(ddaa);
    for (int i = 0; i < ddaa; i++) {
        cin >> vd[i];
    }
    li = vd[0];
    for (int i = 0; i < ddaa; i++) {
        if (vd[i] % li == 0) {
            li = vd[i];
            ba = i + 1;
        }
    }cout << ba << ' ' << li << endl;//T8

    //每天苏西会出门采摘一个蘑菇，知道苏西的食量（吃不饱可不行），也知道苏西的篮子的容量（装不下也不行）。 如果当天能采到符合条件的蘑菇，苏西就会获得丰收的喜悦！
    int day, x, y, z, fs = 0;
    cin >> day >> x >> y;
    for (int i = 1; i <= day; i++) {
        cin >> z;
        if (z >= x && z <= y)
            fs++;
    }cout << fs << endl;//T9

    //苏西每天采一个蘑菇，如果蘑菇的大小和当天的编号相同的话，就是个好品质的蘑菇。好品质的蘑菇总重量比“地球的周长(99)”大多少。
    int tian, dx, zl = 0;
    cin >> tian;
    for (int i = 1; i <= tian; i++) {
        cin >> dx;
        if (dx == i) {
            zl += i;
        }
    }cout << zl - 99 << endl;//T10

    //金蛋多笼子少，所以只有合格的金蛋才能孵化出合格的金鸡。现在知道合格的标准值，大于或者等于标准值的金蛋，才是合格的金蛋
    int x1, bz, y1, z1 = 0;
    cin >> x1 >> bz;
    for (int i = 1; i <= x1; i++) {
        cin >> y1;
        if (y1 >= bz) {
            z1++;
        }cout << z1 << endl;
    }//T11

    //计算1-1/2+1/3-...+1/n-1-1/n;
    double x2=1, y2, z2=0;
    cin >> y2;
    for (double i = 1.0; i <= y2; i++) {
        int llk = i;
        if (llk % 2 == 0) {
            llk *= -1;
        }
        z2 += x2 / llk;
    }printf("%.2lf",z2);//T12
}