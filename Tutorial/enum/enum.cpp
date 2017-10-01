#include <iostream>
#include <string>
#include <map>

using namespace std;

enum Day {
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

Day Convert(string s);

int main() {
    string Test;

    cout << "Input Day: ";
    cin >> Test;

    Day day = Convert(Test);

    switch(day) {
        case Monday:
            cout << "You choose Monday" << endl;
            break;
        case Tuesday:
            cout << "You choose Tuesday" << endl;
            break;
        case Wednesday:
            cout << "You choose Wednesday" << endl;
            break;
        default:
            cout << "You choose other days" << endl;
            break;
    }

    return 0;
}

Day Convert(string s) {
    map<string, Day> m;
    m["Monday"] = Monday;
    m["Tuesday"] = Tuesday;
    m["Wednesday"] = Wednesday;
    m["Thursday"] = Thursday;

    return m[s];
}
