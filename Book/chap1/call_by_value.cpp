/*
 * =====================================================================================
 *
 *       Filename:  call_by_value.cpp
 *
 *    Description:  Call by Value
 *
 *        Version:  1.0
 *        Created:  2019년 05월 25일 19시 40분 53초
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

void increment(int x) {
	x++;
}

int main() {
    int i = 4;
    increment(i); // Does not increment i;
    cout << "i is " << i << endl;
}
