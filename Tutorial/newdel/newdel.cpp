#include <iostream>

using namespace std;

int main() {
    int StudentNumber, TotalScore = 0;
    int * StudentScore;
    int i;

    cout << "Input Student Number: ";
    cin >> StudentNumber;
    StudentScore = new int[StudentNumber];

    for (i=0;i<StudentNumber;i++) {
        cout << i+1 << "th Student Score: ";
        cin >> StudentScore[i];
        TotalScore += StudentScore[i];
    }

    cout << "All Students' average score: " << TotalScore / StudentNumber << endl;
    delete []StudentScore;
    return 0;
}