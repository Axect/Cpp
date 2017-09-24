#include <iostream>

using namespace std;

int main() {
    int rows = 2, cols = 2;
    int** array = new int*[rows];
    int i;

    for (i=0;i<rows;i++) {
        array[i] = new int[cols];
    }

    array[0][0] = 1;
    array[0][1] = 2;
    array[1][0] = 3;
    array[1][1] = 4;

    for (i=0;i<rows;i++) {
        cout << array[i][0] << " " << array[i][1] << endl;
    }

    for (i=0;i<rows;i++) {
        delete [] array[i];
    }

    return 0;
}