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
	// TODO write your code
}
