#include <iostream>

class A {
public:
    A() {
        int x;

        asm(
            "movq %1, %%rax;"
            "cmpq %%rsp, %%rax;"
            "jbe Heap;"
            "movl $1,%0;"
            "jmp Done;"
            "Heap:"
            "movl $0,%0;"
            "Done:"
            : "=r" (x)
            : "r" (this)
        );

        std::cout << (x ? "Stack" : "Heap") << std::endl;
    }
};

class B {
private:
    A a;
};

int main() {
    A a;
    A *b = new A;
    A c;
    B x;
    B *y = new B;
    return 0;
}
