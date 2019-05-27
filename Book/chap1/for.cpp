/*
 * =====================================================================================
 *
 *       Filename:  for.cpp
 *
 *    Description:  for Loop
 *
 *        Version:  1.0
 *        Created:  2019년 05월 25일 19시 33분 40초
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
    double v[3], w[] = {2., 4., 6.}, x[] = {6., 5., 4};
    for (int i=0; i<3; ++i)
        v[i] = w[i] + x[i];

    for (int i=0; i<3; ++i)
        cout << "v[" << i << "]= " << v[i] << endl;
    
    return 0;
}
