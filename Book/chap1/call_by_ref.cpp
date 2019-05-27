/*
 * =====================================================================================
 *
 *       Filename:  call_by_ref.cpp
 *
 *    Description:  Call by Reference
 *
 *        Version:  1.0
 *        Created:  2019년 05월 25일 19시 48분 37초
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

void increment(int& x) {
    x++;
}

int main() {
    int i = 4;
    increment(i);
    cout << "i is " << i << endl;
}
