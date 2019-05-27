/*
 * =====================================================================================
 *
 *       Filename:  inline.cpp
 *
 *    Description:  Inline
 *
 *        Version:  1.0
 *        Created:  2019년 05월 27일 15시 48분 15초
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Axect (Tae Geun Kim)
 *   Organization:  Yonsei University
 *
 * =====================================================================================
 */

#include <iostream>
using namespace std;

inline double square(double x) {
    return x * x;
}

int main() {
    cout << square(2.0) << endl;
    return 0;
}
