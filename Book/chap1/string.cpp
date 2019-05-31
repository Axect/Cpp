#include <string>
#include <sstream>
#include <iostream>

using namespace std;

int main() {
    stringstream s;
    for (int i=1; i<=10; i++)
        s << i << " times" << endl;
    string st = s.str();
    cout << st << endl;
}
