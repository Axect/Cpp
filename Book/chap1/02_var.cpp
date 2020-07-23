/*
 * =====================================================================================
 *
 *       Filename:  var.cpp
 *
 *    Description:  Tutorial for varialbes
 *
 *        Version:  1.0
 *        Created:  2019년 05월 25일 18시 44분 01초
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Axect
 *   Organization:  Yonsei University
 *
 * =====================================================================================
 */
#include <iostream>
using namespace std;

int main() {
    int i1 = 2;
    int i2, i3 = 5;
    float pi = 3.14159;
    double x = -1.5e6;
    char c1 = 'a', c2 = 35;
    bool cmp = i1 < pi, happy = true;

    cout << i1 << endl
         << x << endl
         << c1 << endl
         << c2 << endl
         << cmp << endl
         << happy << endl;
    return 0;
}

/*
 * char
 * short (short integer number)
 * long (long integer number)
 * long long (very long integer number)
 * unsigned
 * signed
 * float
 * double (double-precision floating-point number)
 * long double (long floating-point number)
 * bool
 */
