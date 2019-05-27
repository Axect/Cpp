/*
 * =====================================================================================
 *
 *       Filename:  exp.cpp
 *
 *    Description:  Exponent
 *
 *        Version:  1.0
 *        Created:  2019년 05월 27일 15시 13분 40초
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Axect (Tae Geun Kim), 
 *   Organization:  Yonsei University
 *
 * =====================================================================================
 */

#include<iostream>
using namespace std;

int main() {
    double x = 2.0, xn = 1.0, exp_x = 1.0;
    unsigned long fac = 1;
    for (unsigned long n = 1; n <= 10; ++n) {
        xn *= x;
        fac *= n;
        exp_x += xn / fac;
        cout << "e^2 is " << exp_x << endl;
    }
}
