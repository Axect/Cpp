#include <iostream>
#include <vector>

using namespace std;

struct State {
    int x;
    int v;
    int t;
};

State Init(void);
void Accel(State& S);
void Move(State& S);

int main() {
    State s = Init();
    cout << "Position: " << s.x << endl;
    cout << "Velocity: " << s.v << endl;
    cout << "Time: " << s.t << endl;
    Accel(s);
    Move(s);
    cout << "Position: " << s.x << endl;
    cout << "Velocity: " << s.v << endl;
    cout << "Time: " << s.t << endl;

    return 0;
}

State Init(void) {
    State S;
    S.x = 0;
    S.v = 0;
    S.t = 0;
    return S;
}

void Accel(State& S) {
    S.v++;
    S.t++;
}

void Move(State& S) {
    S.x += S.v;
    S.t++;
}