#include <iostream>
#include <list>

class Func {
public:
    Func() : c_{4,2} {};
    auto operator()() const -> void {
        for (auto v : c_)
            std::cout << v;
        std::cout << std::endl;
    }
private:
    std::list<int> c_;
};

auto main() -> int {
    // 1. Lambda
    auto func = [c=std::list<int>{4,2}](){
        for (auto v : c)
            std::cout << v;
        std::cout << std::endl;
    };
    func();

    // 2. Class
    auto func2 = Func{};
    func2();
}
