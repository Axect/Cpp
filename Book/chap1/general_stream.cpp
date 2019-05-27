/*
 * =====================================================================================
 *
 *       Filename:  general_stream.cpp
 *
 *    Description:  General Stream
 *
 *        Version:  1.0
 *        Created:  2019년 05월 27일 16시 46분 05초
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Axect (Tae Geun Kim)
 *   Organization:  Yonsei University
 *
 * =====================================================================================
 */

#include <iostream>
#include <fstream>
#include <sstream>

void write_something(std::ostream& os) {
    os << "Hi stream, do you know that 3 * 3 = " << 3 * 3 << std::endl;
}

int main(int argc, char* argv[]) {
    std::ofstream myfile("data/example.txt");
    std::stringstream mysstream;

    write_something(std::cout);
    write_something(myfile);
    write_something(mysstream);

    std::cout << "mysstream is: " << mysstream.str();
}
