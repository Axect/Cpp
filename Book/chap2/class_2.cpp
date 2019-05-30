#include <iostream>

class complex {
public:
    complex(double r, double i) : r(r), i(i) {}
    
    double& real() { return r; }
    double& imag() { return i; }

private:
    double r, i;
};

inline double& real(complex& c) { return c.real(); }

inline const double& real(const complex& c) { return c.r; }

int main() {
    complex c = {1, 2};
    
    c.real() += 1;
    real(c) += 1;
    
    std::cout << c.real() << std::endl;
}