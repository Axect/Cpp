#include <iostream>

using namespace std;

class student {
    private:
        const char* name;
        int age;
        const char* hobby;
    public:
        void ShowInfo();
        void Study();
        void Sleep();
        // Constructor 
        student(const char* _name, int _age, const char* _hobby) {
            name = _name;
            age = _age;
            hobby = _hobby;
        }
        // Default Constructor
        student() {
            cout << "Default Constructor" << endl;
            name = "Axect";
            age = 24;
            hobby = "coding";
        }
};

void student::ShowInfo() {
    cout << "이름: " << name << " 나이: " << age << " 취미: " << hobby << endl;
}

void student::Study() {
    cout << "공부!" << endl;
}

void student::Sleep() {
    cout << "잠!" << endl;
}

int main() {
    // Constructor can be implicit.
    student stu("김철수", 16, "컴퓨터게임");
    // Default should be explicit!
    student stu2 = student();

    stu.ShowInfo();
    stu2.ShowInfo();

    stu.Study();
    stu.Sleep();
}