#include <iostream>
#include <cassert>

auto test_cap_value() -> void {
    auto v = 7;
    auto lambda = [v]() mutable {
        std::cout << v << " ";
        ++v;
    };
    assert(v == 7);
    lambda();
    lambda();
    assert(v == 7);
    std::cout << v << std::endl;
}

auto test_cap_ref() -> void {
    auto v = 7;
    auto lambda = [&v]() {
        std::cout << v << " ";
        ++v;
    };
    assert(v == 7);
    lambda();
    lambda();
    assert(v == 9);
    std::cout << v << std::endl;
}

class CapValue {
public:
    CapValue(int v) : v_{v} {};
    auto operator()() -> void {
        std::cout << v_ << " ";
        ++v_;
    }
private:
    int v_{};
};

class CapRef {
public:
    CapRef(int& v) : v_{v} {};
    auto operator()() -> void {
        std::cout << v_ << " ";
        ++v_;
    }
private:
    int& v_;
};

auto test_class_cap_val() -> void {
    auto v = 7;
    auto lambda = CapValue{v};
    lambda();
    lambda();
    std::cout << v << std::endl;
}

auto test_class_cap_ref() -> void {
    auto v = 7;
    auto lambda = CapRef{v};
    lambda();
    lambda();
    std::cout << v << std::endl;
}

auto main() -> int {
    test_cap_value();
    test_cap_ref();
    test_class_cap_val();
    test_class_cap_ref();
}
