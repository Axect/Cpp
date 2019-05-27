/*
 * =====================================================================================
 *
 *       Filename:  literal.cpp
 *
 *    Description:  1.2.2 Literals
 *
 *        Version:  1.0
 *        Created:  2019년 05월 25일 18시 54분 10초
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Axect (Tae Geun Kim)
 *   Organization:  Yonsei University
 *
 * =====================================================================================
 */

/*
 * 2    : int
 * 2u   : unsigned
 * 2l   : long
 * 2ul  : unsinged long
 * 2.0  : double
 * 2.0f : float
 * 2.0l : long double
 */

#include <iostream>
#include <string>
#include <complex>
using namespace std;

int main() {
    std::complex<float> z(1.3, 2.4), z2;
    
    // ================================================================================
    // 1. Availability
    // ================================================================================
    // z2 = 2 * z;   // Error: no int * complex<float>
    // z2 = 2.0 * z; // Error: no double * complex<float>
    z2 = 2.0f * z;   // Okay : float * complex<float>
    cout << z2 << endl;
    
    // ================================================================================
    // 2. Accuracy
    // ================================================================================
    long double third1 = 0.3333333333333;  // May lose digits
    long double third2 = 0.3333333333333l; // Accurate
    cout << third1 << endl << third2 << endl;

    // ================================================================================
    // 3. Non-decimal number
    // ================================================================================
    int o1 = 042;  // Octal
    int h1 = 0x42; // Hexadecimal
    int b1 = 0b11111010; // Binary
    const long double pi = 3.141'592'653'589'793'238'462l;
    cout << o1 << endl << h1 << endl << b1 << endl;

    // ================================================================================
    // 4. String
    // ================================================================================
    char s1[] = "Old C Style";
    std::string s2 = "In C++ better like this";
    std::string s3 = "This is a very long and clumsy text "
        "that is too long for one line.";
    
    // ================================================================================
    // 5. Non-narrowing initialization
    // ================================================================================
    long l2 = 1234567890123; // When 32bit platform -> narrowed!
    long l = {1234567890123}; // Uniform initialization
    int i1 = 3.14; // float -> int : narrowed
    //int i1n = {3.14}; // Narrowing ERROR
    cout << l2 << endl << l << endl;
}
