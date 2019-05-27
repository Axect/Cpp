/*
 * =====================================================================================
 *
 *       Filename:  error.cpp
 *
 *    Description:  Error Handling
 *
 *        Version:  1.0
 *        Created:  2019년 05월 25일 20시 43분 50초
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Axect (Tae Geun Kim)
 *   Organization:  Yonsei University
 *
 * =====================================================================================
 */

#include <cassert>

double square_root(double x) {
    double result = x;
    assert(result >= 0.0);
    return result;
}

int main() {
    double x = -1.2;
    square_root(x);
}
