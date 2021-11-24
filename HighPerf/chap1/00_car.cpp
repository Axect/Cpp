#include <iostream>
#include <vector>

class Car {
public:
    Car(int doors) : doors_(doors) {}
    auto get_doors() const { return doors_; }
    auto set_doors(int v) { doors_ = v; }
private:
    int doors_{};
};

int main() {
    //auto num_doors = 2;             // on stack
    //auto car1 = Car{num_doors};     // on stack
    //auto car2 = Car{num_doors};     // on stack

    //std::cout << "car1 has " << car1.get_doors() << " doors" << std::endl;
    //std::cout << "car2 has " << car2.get_doors() << " doors" << std::endl;

    //car1.set_doors(4);
    //std::cout << "car1 has " << car1.get_doors() << " doors" << std::endl;

    auto n = 4;
    auto cars = std::vector<Car>{};
    cars.reserve(n);
    for (auto i=0; i<n; ++i) {
        cars.push_back(Car{2});
    }

    return 0;
}
