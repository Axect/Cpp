#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Generator {
public:
    Generator(int n) : val(n) {}
    int operator()() {
        int old_val = val;
        val += 2;
        return old_val; 
    }
private:
    int val;
};

int main() {
    vector<int> v(10);
    generate(v.begin(), v.end(), Generator(1));

    for (auto it=v.begin(); it!=v.end(); ++it) {
        cout << *it << endl;
    }
}
