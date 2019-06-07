#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Fib {
public:
    Fib(int s1, int s2) : curr(s1), next(s2) {}
    int operator()() {
        int old_curr = curr;
        curr += next;
        swap(curr, next);
        return old_curr;
    }
private:
    int curr, next;
};

int main() {
    Fib f(1, 1);
//    vector<int> v(10);
//    generate(v.begin(), v.end(), f);
//    for (auto elem : v)
//        cout << elem << endl;
    for (int i=0; i < 10; ++i)
        cout << f() << endl;
}
