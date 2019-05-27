/*
 * =====================================================================================
 *
 *       Filename:  switch.cpp
 *
 *    Description:  Switch statement
 *
 *        Version:  1.0
 *        Created:  2019년 05월 25일 19시 28분 02초
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Axect (Tae Geun Kim)
 *   Organization:  Yonsei University
 *
 * =====================================================================================
 */

#include <iostream>

int main() {
    unsigned int op_code;
    int x=3, y=2, z;

    switch(op_code) {
        case 0: z = x + y; break;
        case 1: z = x - y; break;
        default: z = x / y;
    }

    std::cout << z << std::endl;
}
