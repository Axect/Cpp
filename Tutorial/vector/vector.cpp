#include <iostream>
#include <vector>
#include <time.h>

using namespace std;

int main() {
    clock_t begin, end;

    begin = clock();

    int Length = 100000000;
    vector<int> V(Length);
    int i;

    for (i=0; i<Length; i++) {
        V[i] = i + 1;
    }

    long s = 0;

    for (i=0; i<Length; i++) {
        s += V[i];
    }

    end = clock();

    long msec = end - begin;

    cout << s << endl;
    cout << msec/1000 << "ms" << endl;

    return 0;
}