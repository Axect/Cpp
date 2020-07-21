#include <iostream>
#include <vector>
#include <cmath>

// By for loop
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

// By tail optimized recursion (helper)
template <typename FilterFunction, typename Iterator>
std::vector<double> filtered_vec_helper(
        Iterator v_begin,
        Iterator v_end,
        FilterFunction filter,
        std::vector<double> prev)
{
    if (v_begin == v_end) {
        return prev;
    } else {
        const auto head = *v_begin;

        if (filter(head)) {
            prev.push_back(head);
        }

        return filtered_vec_helper(v_begin + 1, v_end, filter, std::move(prev));
    }
}

template <typename FilterFunction, typename Iterator>
std::vector<double> filtered_vec(
        Iterator v_begin,
        Iterator v_end,
        FilterFunction filter)
{
    return filtered_vec_helper(v_begin, v_end, filter, {});
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
    auto d = filtered_vec(a.cbegin(), a.cend(), [](double x) -> bool { return int(x) %2 == 0.0; });
    auto e = filtered_vec(a.cbegin(), a.cend(), [](double x) -> bool { return std::sin(x) > 0.0; });
    std::cout << b << '\n' << c << std::endl;
    std::cout << d << '\n' << e << std::endl;
}
