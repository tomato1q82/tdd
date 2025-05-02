#include <vector>
#include "gmock/gmock.h"
#include "prime_factors.cpp"

TEST(PrimeFactors, PrimeTest){
	PrimeFactors prime_factor;
	std::vector<int> expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
}