#include <iostream>

class complex {
public:
    // Default constructor
    complex(double r, double i) : r(r), i(i) {}
    
    // Copy constructor with delegate
    complex(const complex& c) : complex{c.r, c.i} {}
    
    // Copy Assign operator
    complex& operator=(const complex& src) {
        r = src.r; i = src.i;
        return *this;
    }
    
    // Move constructor   
    complex(complex&& c) : complex{c.r, c.i} {
        c.r = 0;
        c.i = 0;
    }
    
    // Getter - clumpsy
    double get_r() { return this->r; }
    
    // Access - clumpsy
    void set_r(double r_new) {
        this->r += r_new;
    }
    
    // Access - reference
    double& real() { return this->r; }
    double& imag() { return this->i; }
    
    // Access - const reference
    const double& real() const { return this->r; }
    const double& imag() const { return this->i; }
    
    // Overload - index
    const double& operator[](int i) const {
        switch (i) {
            case 0: return this->r; break;
            case 1: return this->i; break;
        }
    }
    
private:
    double r, i;
};

// Access - natural
inline double& real(complex& c) { return c.real(); }
inline double& imag(complex& c) { return c.imag(); }

// Overload - stream
std::ostream& operator<<(std::ostream& os, const complex& c) { 
    return os << '(' << c.real() << ',' << c.imag() << ')'; 
}

int main() {
    complex c = {1, 2};
    
    c.real() += 1;
    real(c) += 1;
    
    std::cout << c << std::endl;
}