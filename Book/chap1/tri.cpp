/*
 * =====================================================================================
 *
 *       Filename:  tri.cpp
 *
 *    Description:  Trinomial operator
 *
 *        Version:  1.0
 *        Created:  2019년 05월 25일 19시 25분 13초
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Axect (Tae Geun Kim), 
 *   Organization:  Yonsei University
 *
 * =====================================================================================
 */

#include <iostream>

int min(int x, int y) {
    return x <= y ? x : y;
}

int main() {
    std::cout << min(1, 2) << std::endl;
}

