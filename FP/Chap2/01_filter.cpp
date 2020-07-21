#include <iostream>
#include <vector>
#include <cmath>

template <typename FilterFunction>
std::vector<double> filtered_vec_for(
        const std::vector<double>& target,
        FilterFunction filter)
{
    std::vector<double> result;

    for (const double& elem : target) {
        if (filter(elem)) {
            result.push_back(elem);
        }
    }

    return result;
}

// Overloading cout
template <typename Element>
std::ostream& operator<<(std::ostream& os, const std::vector<Element>& input) {
    for (auto const& i : input) {
        os << i << " ";
    }
    return os;
}

int main() {
    std::vector<double> a = {1.0, 2.0, 3.0, 4.0};
    auto b = filtered_vec_for(a, [](double x) -> bool { return int(x) % 2 == 0.0; });
    auto c = filtered_vec_for(a, [](double x) -> bool { return std::sin(x) > 0.0; });
    std::cout << b << '\n' << c << std::endl;
}
