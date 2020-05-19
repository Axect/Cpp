#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    auto vals = std::vector<int>{1, 3, 2, 5, 4};

    auto three = 3;
    auto num_threes = std::count(vals.begin(), vals.end(), three);

    // Lambda function
    auto is_above_3 = [](int v){ return v > 3; };
    auto num_above_3 = std::count_if(vals.begin(), vals.end(), is_above_3);

    std::cout << num_threes << std::endl;
    std::cout << num_above_3 << std::endl;
}
