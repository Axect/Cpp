/*
 * =====================================================================================
 *
 *       Filename:  io_error.cpp
 *
 *    Description:  IO Error handling
 *
 *        Version:  1.0
 *        Created:  2019년 05월 27일 17시 15분 44초
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
#include <string>

using namespace std;

int main() {
    std::ifstream infile;
    std::string filename("some_missing_file.xyz");
    bool opened = false;
    while (!opened) {
        infile.open(filename);
        if (infile.good()) {
            opened = true;
        } else {
            cout << "The file '" << filename
                << "' doesn't exist, give a new file name: ";
            cin >> filename;
        }
    }
    int i;
    double d;
    infile >> i >> d;
    if (infile.good())
        cout << "i is " << i << ", d is " << d << '\n';
    else
        cout << "Could not correctly read the content. \n";
    infile.close();
}
