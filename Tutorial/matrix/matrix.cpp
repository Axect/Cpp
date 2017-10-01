#include <iostream>

using namespace std;

int** Matrix(int m, int n) {
    int** array = new int*[m];
    int i;

    for (i=0; i<m; i++) {
        array[i] = new int[n];
    }

    return array;
}

int main() {
    int Rows = 5;
    int Cols = 5;
    int** A = Matrix(Rows, Cols);
    int i, j;

    for (i=0; i<Rows; i++) {
        for (j=0; j<Cols; j++) {
            if (j==Cols-1) {
                cout << A[i][j] << endl;
            } else {
                cout << A[i][j] << " ";
            }
        }
    }

    for (i; i<Rows; i++) {
        delete[] A[i];
    }

    return 0;
}
