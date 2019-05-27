#include <iostream>
#include <memory>

int main() {
    std::unique_ptr<double> dp{new double};
    *dp = 7;
    
    double* raw_dp = dp.get();

    std::unique_ptr<double> dp2;
    dp2 = move(dp);                         // Unique_ptr can be just moved

    std::cout << *raw_dp << std::endl;
    std::cout << *dp2 << std::endl;
    return 0;
}
