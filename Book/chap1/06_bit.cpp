#include <iostream>

using namespace std;

int main() {
    const int x = 2;

    cout << ~x << '\n'          // -3
         << (x << 3) << '\n'    // 16
         << (x >> 1) << '\n'    // 1
         << (x & 1) << '\n'     // 0
         << (x ^ 6) << '\n'     // 4
         << (x | 5) << endl;    // 7
}