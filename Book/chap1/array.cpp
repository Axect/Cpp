#include <iostream>

using namespace std;

int main() {
    // Declaration
    float v[] = {1.0, 2.0, 3.0}, w[] = {7.0, 8.0, 9.0};

    // Ops
    float x[3];
    for (int i = 0; i < 3; ++i) {
        x[i] = v[i] + 3.0 * w[i];
    }

    for (float f : x)
        cout << f << endl;
}