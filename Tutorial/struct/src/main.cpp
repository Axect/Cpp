#include <iostream>
#include <cstring>

using namespace std;

int main() {
	struct STUDENT {
		char Name[30];
		double Score;
	};

    struct STUDENT Axect;

    strcpy(Axect.Name, "Axect");
    Axect.Score = 90.8;

    cout << "Name: " << Axect.Name << endl;
    cout << "Score: " << Axect.Score << endl;
}