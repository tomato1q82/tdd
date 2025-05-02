#include "gmock/gmock.h"
#include "prime_factors_test.cpp"

using namespace testing;



int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}