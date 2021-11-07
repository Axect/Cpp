#include <iostream>
#include <iomanip>

class IsAbove {
public:
    IsAbove(int th) : th_{th} {};
    auto operator()(int v) const { 
        return v > th_;
    }
private:
    int th_{};
};

auto main() -> int {
    // 1. Lambda
    const auto& th = 3;
    auto is_above = [th](int v){ return v > th; };
    std::cout << std::boolalpha << is_above(5) << std::endl;

    // 2. Lambda by Class
    auto is_above2 = IsAbove{th};
    std::cout << std::boolalpha << is_above2(5) << std::endl;
}

