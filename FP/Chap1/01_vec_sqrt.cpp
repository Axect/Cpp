#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <numeric>

int main() {
    std::vector<double> xs = {1.0, 2.0, 3.0, 4.0};
    // Transform
    std::transform(xs.cbegin(), xs.cend(), xs.begin(), [](double x) -> double { return std::sqrt(x); });
    // Accumulate
    auto s = std::accumulate(xs.cbegin(), xs.cend(), 0.0);
    std::cout << s << std::endl;
}
