#include <iostream>
using namespace std;

int main() {

}

struct Foo {
    auto val() const {
        return m_;
    }

    auto& cref() const {
        return m_;
    }

    auto& mref() {
        return m_;
    }
    int m_{};
};

auto func() {
    auto foo = Foo{};
    auto& cref = foo.cref(); // cref is a const reference;
    auto& mref = foo.mref(); // mref is a mutable reference;
}
