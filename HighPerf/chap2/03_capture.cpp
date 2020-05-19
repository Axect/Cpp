#include <iostream>
#include <vector>
#include <algorithm>

auto count_value_above_ref(const std::vector<int>& vals, int th) {
    auto is_above = [&th](int v) { return v > th; };
    return std::count_if(vals.begin(), vals.end(), is_above);
}

auto count_value_above_val(const std::vector<int>& vals, int th) {
    auto is_above = [th](int v) { return v > th; };
    return std::count_if(vals.begin(), vals.end(), is_above);
}

int main() {
    auto vals = std::vector<int>{1, 3, 2, 5, 4};
    auto th = 3;
    auto is_above_ref = [&th](int v) {
        return v > th;
    };
    auto is_above_val = [th](int v) {
        return v > th;
    };
    th = 4;

    auto num_above_ref = std::count_if(vals.begin(), vals.end(), is_above_ref);
    auto num_above_val = std::count_if(vals.begin(), vals.end(), is_above_val);

    std::cout << num_above_ref << std::endl;
    std::cout << num_above_val << std::endl;
}

