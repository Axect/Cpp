/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  main function
 *
 *        Version:  1.0
 *        Created:  2019년 05월 25일 20시 41분 48초
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

int main(int argc, char* argv[]) {
    for (int i=0; i < argc; ++i)
        cout << argv[i] << endl;
    return 0;
}
