/*
 * =====================================================================================
 *
 *       Filename:  file_write.cpp
 *
 *    Description:  Use fstream
 *
 *        Version:  1.0
 *        Created:  2019년 05월 27일 16시 19분 17초
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Axect (Tae Geun Kim)
 *   Organization:  Yonsei University
 *
 * =====================================================================================
 */

#include <fstream>

int main() {
    std::ofstream square_file("data/squares.txt");
    for (int i=0; i < 10; ++i) {
        square_file << i << "^2 = " << i * i << std::endl;
    }
}
