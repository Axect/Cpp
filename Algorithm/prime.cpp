#include <iostream>

using namespace std;

type Integer = typename;

template <RandomAccessIterator I, Integer N>
void mark_sieve(I first, I last, N factor) {
    assert(first != last);
    *first = false;
    while (last - first > factor) {
        first = first + factor;
        *first = false;
    }
}


int main(int argc, char const *argv[])
{
    /* code */
    

    return 0;
}
