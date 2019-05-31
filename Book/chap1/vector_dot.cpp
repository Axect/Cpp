#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

int dot(const vector<int>& x, const vector<int>& y) {
    assert(x.size() == y.size());

    int s = 0;
    for (int i = 0; i < x.size() ; i++) {
        s += x[i] * y[i];
    }
    return s;
}

int main() {
    vector<int> v1 = {1, 2, 3};
    vector<int> v2 = {3, 2, 1};
    
    cout << dot(v1, v2) << endl;
}
