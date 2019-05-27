/*
 * =====================================================================================
 *
 *       Filename:  print_bool.cpp
 *
 *    Description:  Print bool
 *
 *        Version:  1.0
 *        Created:  2019년 05월 27일 17시 06분 36초
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
    const double pi = M_PI;
    cout << "pi is " << (pi < 3) << '\n';
    cout << "pi is " << boolalpha << (pi < 3) << endl;
}
