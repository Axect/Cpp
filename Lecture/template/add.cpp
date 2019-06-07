#include <iostream>

using namespace std;

template<typename T, typename S>
T add(T x, S y) {
    return x + y;
}

class Horim {
private:
    int money;
public:
    // Constructor
    Horim(int m) : money(m) {}
    // Clumpsy
    int get_money() {
        return this->money;
    }
    // Clever
    const int& show_money() const {
        return this->money;
    }
    // Clever 2
    int& take_money() {
        return this->money;
    }
};

Horim operator+(const Horim& x, const Horim& y) {
    Horim h(x.show_money() + y.show_money());
    return h;
}

int main() {
    int x = 1;
    double y = 2.0;
    cout << add(x, y) << endl;

    Horim a(10);
    Horim b(100);

    cout << (a + b).get_money() << endl;
}
