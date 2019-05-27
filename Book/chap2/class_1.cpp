#include <iostream>

using namespace std;

class mycomplex {
    public:
        double r, i;
};

int main() {
    mycomplex z, c;
    z.r = 3.5;
    z.i = 2;
    cout << "z is (" << z.r << ", " << z.i << ")\n";
    
    mycomplex* p = &c;
    p->r = 3.5;
    p->i = 4.2;
    
    cout << "c is (" << c.r << ", " << c.i << ")\n";
}
