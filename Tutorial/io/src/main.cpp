#ifdef __TEST__
#include <gtest/gtest.h>
#endif

#include <iostream>

using namespace std;

int main(int argc, char ** argv) {
#ifdef __TEST__
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
#endif
	char name[10];
    int age;

    cin >> name >> age;
    cout<< "Your name is " << name << " and age is " << age << endl;
}
