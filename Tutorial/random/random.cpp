#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int randrange(int low, int high);

int main() {
    srand(time(NULL));
    int i;

    for (i=0;i<10;i++) {
        cout << randrange(0, 10) << endl;
    }

    return 0;
}

int randrange(int low, int high) {
    return rand() % (high-low+1) + low;
}