#include <iostream>

using namespace std;

int main() {
    int* y = new int[10];
    
    for (int i = 0; i < 10; ++i) {
        y[i] = i;
    }

    for (int i = 0; i < 10; ++i) {
        cout << *y << endl;
        y++;
    }

    delete[] y;
}
