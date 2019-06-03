#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Generator {
    Generator(int n) : val(n) {}
    int operator()() {
        int old_val = val;
        val += 2;
        return old_val; 
    }
    int val;
};

int main() {
    vector<int> v(10);
    generate(v.begin(), v.end(), Generator(1));

    for (auto it=v.begin(); it!=v.end(); ++it) {
        cout << *it << endl;
    }
}
