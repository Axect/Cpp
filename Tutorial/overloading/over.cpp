#include <iostream>

using namespace std;

int Inner(int a) {
    int b = a * a;
    return b;
}

int Inner(int a, int b) {
    return a * b;
}

int main() {
    cout << Inner(3) << " " << Inner(3, 4) << endl;

    return 0;
}