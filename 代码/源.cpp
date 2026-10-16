#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <iostream>
using namespace std;
int main() {
    int a = 3, b = 5, c;
    c = a + b;
    cout << c << endl;       //第一题

        int age;
        cin >> age;
        cout << age << endl;   //第二题

        int x = 1, y, z;
        y = x;
        z = y;
        cout << x << endl << y << endl << z << endl;//第三题

        int a1, b1, c1;
        cin >> a1 >> b1;
        c1 = a1;
        a1 = b1;
        b1 = c1;
        cout << a1 << endl << b1 << endl;//第四题

        double a2, b2, c2, d2, x2, y2;
        cin >> x2 >> a2 >> b2 >> c2 >> d2;
        y2 = a2 * x2 * x2 * x2+ b2 * x2 * x2 + c2 * x2 + d2;
        printf("%2.7f", y2);//第五题

    return 0;
}


