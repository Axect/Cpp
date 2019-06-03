#include <iostream>

using namespace std;

int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + 2.0 * b;
}

class money {
private:
    int cost;
public:
    money(int new_cost) : cost(new_cost) {}

    int get_money() const {
        return this->cost;
    }

    int& my_money() {
        return this->cost;
    }

    const int& my_money() const {
        return this->cost;
    }
};

money operator+(const money& x, const money& y) {
    money m(x.get_money() + y.get_money());
    return m;
}

ostream& operator<<(ostream& os, const money& x) {
    return os << "money: " << x.my_money();
}

int main() {
    cout << add(1, 2) << endl;
    cout << add(1.0, 2.0) << endl;

    money m(13);
    money n(14);

    cout << m + n << endl;

    const money x(10);
    const int *p = &x.my_money();
    
    cout << p << endl;
    cout << *p << endl;

    p += 1;

    cout << p << endl;
    cout << *p << endl;
}
