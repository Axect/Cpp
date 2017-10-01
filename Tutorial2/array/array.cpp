#include <iostream>
#include <time.h>

using namespace std;

int main() {
    clock_t begin, end;
    int i = 0;

    begin = clock();
    int Length = 100000000;
    int* array = new int[Length];

    for (i;i<Length;i++) {
        array[i] = i + 1;
    }

    long s = 0;

    for (i; i<Length; i++) {
        s += array[i];
    }

    delete[] array;

    end = clock();
    long msec = end - begin;
    cout << s << endl;
    cout << msec/1000 << "ms" << endl;
    return 0;
}