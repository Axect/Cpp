/*
 * =====================================================================================
 *
 *       Filename:  set_format.cpp
 *
 *    Description:  Set format
 *
 *        Version:  1.0
 *        Created:  2019년 05월 27일 16시 59분 11초
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Axect (Tae Geun Kim)
 *   Organization:  Yonsei University
 *
 * =====================================================================================
 */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double pi = M_PI;
    cout << "pi is " << pi << '\n';
    cout << "pi is " << setprecision(16) << pi << '\n';
    cout << "pi is " << setw(30) << pi << '\n';
    cout << "pi is " << setfill('-') << left
        << setw(30) << pi << '\n';
    cout << "pi is " << scientific << pi << '\n';
}
