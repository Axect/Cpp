#include <iostream>
#include <vector>
#include <time.h>

using namespace std;

vector<vector<int>> Matrix(int m, int n) {
    vector<vector<int>> array(m, vector<int>(n, 0));
    return array;
}

int main() {
    clock_t begin, end;

    begin = clock();

    int a = 10;
    int b = 10;
    vector<vector<int>> A = Matrix(a, b);
    int i,j;

    for (i=0;i<a;i++) {
        for (j=0;j<b;j++) {
            A[i][j] = i + j;
            if (j==b-1) {
                cout << A[i][j] << endl;
            } else {
                cout << A[i][j] << " ";
            }
        }
    }

    end = clock();

    long msec = end - begin;

    cout << A[i-1][j-1] << endl;
    cout << msec/1000 << "ms" << endl;
    return 0;
}