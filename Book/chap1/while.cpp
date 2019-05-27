/*
 * =====================================================================================
 *
 *       Filename:  while.cpp
 *
 *    Description:  While loop
 *
 *        Version:  1.0
 *        Created:  2019년 05월 25일 19시 31분 14초
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
    int x = 19;
    while (x != 1) {
        cout << x << endl;
        if (x % 2 == 1)
            x = 3*x + 1;
        else
            x = x / 2;
    }
    cout << x << endl;
}
