/*
 * =====================================================================================
 *
 *       Filename:  range_based_for.cpp
 *
 *    Description:  Range-Based for-Loop (C++11)
 *
 *        Version:  1.0
 *        Created:  2019년 05월 25일 19시 37분 20초
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

int main() {
    int primes[] = {2, 3, 5, 7, 11, 13, 17, 19};
    for (int i : primes)
        cout << i << " ";
}
