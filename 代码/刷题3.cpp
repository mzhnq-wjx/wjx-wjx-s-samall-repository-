#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <iostream>
using namespace std;
int main() {
    double r, d, C, S, pi = 3.1415926;
    cin >> r;
    d = 2 * r;
    C = d * pi;
    S = double(pi * r * r);
    printf("%2.4f %2.4f %2.4f\n", d, C, S);
        // 作业6
    int a, b, c, d1;
    cin >> a >> b >> c;
    d1 = a * b - c;
    cout << d << endl;//作业7
    
    double x, y, a1;
    cin >> x >> y;
    a1 = y / x * 100;
    printf("%2.3f%%\n", a1);//作业8

    int x1, y1, z;
    cin >> x1 >> y1;
    z = x1;
    x = y1;
    y = z;
    printf("%d %d", x1, y1);//作业9

    int a2, b2, c2;
    cin >> a2 >> b2;
    c2 = a2 + b2;
    printf("%d", c2);
    //作业10
        return 0;
}