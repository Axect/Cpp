#include <iostream>

using namespace std;

namespace Test {
    void Add() {
        cout << "Add" << endl;
    }
}

using Test::Add;

int main() {
    Add();

    return 0;
}