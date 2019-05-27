#include <iostream>

int main() {
    int i = 5;
    int& j = i;
    j = 4;
    std::cout << i << std::endl;
}
