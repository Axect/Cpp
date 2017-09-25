#include <iostream>

using namespace std;

int** Matrix(int m, int n) {
    int rows = m, cols = n;
    int i;
    int** array = new int*[rows];

    for (i=0;i<rows;i++) {
        array[i] = new int[cols];
    }

    return array;
}

int main() {
    int rows=5, cols=5;
    int** Array = Matrix(rows,cols);
    int i,j;

    for (i=0;i<rows;i++) {
        for (j=0; j<cols;j++) {
            if (j==cols-1) {
                cout << Array[i][j] << endl;
            } else {
                cout << Array[i][j] << " ";
            }
        }
    }

    for (i=0;i<rows;i++) {
        delete [] Array[i];
    }

    return 0;
}