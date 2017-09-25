#include <iostream>

using namespace std;

int main() {
    int** Array = Matrix(2,2);
    int i;

    Array[0][0] = 1;
    Array[0][1] = 2;
    Array[1][0] = 3;
    Array[1][1] = 4;
    for (i=0;i<2;i++) {
        cout << Array[i][0] << " " << Array[i][1] << endl;
    }
    return 0;
}

int** Matrix(int m, int n);

int** Matrix(int m, int n) {
    int rows = m, cols = n;
    int i;
    int** array = new int*[rows];

    for (i=0;i<rows;i++) {
        array[i] = new int[cols];
    }

    return array
}