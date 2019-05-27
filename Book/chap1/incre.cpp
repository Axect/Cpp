/*
 * =====================================================================================
 *
 *       Filename:  incre.cpp
 *
 *    Description:  Increment
 *
 *        Version:  1.0
 *        Created:  2019년 05월 25일 19시 13분 35초
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Axect (Tae Geun Kim), 
 *   Organization:  Yonsei University
 *
 * =====================================================================================
 */

#include <iostream>
using namespace std;

int main() {
    int i = 3, j = 3;
    int k = ++i + 4; // i is 4, k is 8
    int l = j++ + 4; // j is 4, l is 7

    cout << k << endl << l << endl;
    return 0;
}
