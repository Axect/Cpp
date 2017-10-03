#include <iostream>

using namespace std;

void swap(int* x, int* y);
void swap2(int& x, int& y);

int main() {
    int x=2;
    int y=1;
    cout << x << " " << y << endl;
    swap(&x, &y);
    cout << x << " " << y << endl;
    swap2(x, y);
    cout << x << " " << y << endl;
    return 0;   
}

void swap(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void swap2(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}