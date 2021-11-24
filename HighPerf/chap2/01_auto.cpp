#include <iostream>

struct FooOriginal {
    int val() const {
        return m_;
    }

    const int& cref() const {
        return m_;
    }

    int& mref() {
        return m_;
    }

    int m_{};
};

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

int main() {
    auto foo = Foo{};
    // auto& cref = foo.cref();     // It is also a const reference;
    const auto& cref = foo.cref();  // cref is a const reference;
    // cref = 3;                    // Can't mutate
    std::cout << cref << std::endl;
    auto& mref = foo.mref();        // mref is a mutable reference;
    mref = 3;
    std::cout << foo.m_ << std::endl;
    std::cout << cref << std::endl; // Since foo changed, cref is also changed
}
