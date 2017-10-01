#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<vector<vector<int>>> V(5, vector<vector<int>>(5, vector<int>(5,0)));
    int i,j,k;

    for (i=0;i<5;i++) {
        for (j=0;j<5;j++) {
            for (k=0;k<5;k++) {
                V[i][j][k] = i + j + k;
            }
        }
    }

    cout << V[1][1][1] << endl;

    return 0;
}