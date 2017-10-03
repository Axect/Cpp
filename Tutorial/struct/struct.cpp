#include <iostream>
#include <vector>

using namespace std;

struct Coord {
    int x;
    int y;
    int z;
};

int main() {
    vector<Coord> C(5);
    int i;
    for (i=0;i<5;i++) {
        C[i].x = i;
        C[i].y = i+1;
        C[i].z = i-1;
    }
    for (i=0;i<5;i++) {
        cout << C[i].x << " " << C[i].y << " " << C[i].z << endl;
    }

    return 0;
}