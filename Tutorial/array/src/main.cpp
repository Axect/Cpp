#ifdef __TEST__
#include <gtest/gtest.h>
#endif

#include <iostream>
#include <time.h>

using namespace std;

int main() {
    clock_t begin, end;
    begin = clock();

    int * S = new int[100000000];
    long s = 0;

    for (int i; i < 1E+08; i++) {
        S[i] = i + 1;
    }
    for (int i; i < 1E+08; i++) {
        s += S[i];
    }

    delete []S;

    end = clock();
    long msec = end - begin;

    cout << s << endl;
    cout << msec/1000 << "ms" << endl;

    return 0;
}