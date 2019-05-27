/*
 * =====================================================================================
 *
 *       Filename:  if.cpp
 *
 *    Description:  if-statement
 *
 *        Version:  1.0
 *        Created:  2019년 05월 25일 19시 22분 02초
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Axect (Tae Geun Kim), 
 *   Organization:  Yonsei University
 *
 * =====================================================================================
 */

#include <iostream>

int main() {
    double weight = 105.0;

    if (weight > 100.0)
        std::cout << "This is quite heavy.\n";
    else
        std::cout << "I can carry this.\n";

    return 0;
}
