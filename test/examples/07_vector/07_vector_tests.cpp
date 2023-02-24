#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "function_vec.h"
#include<vector>

using std::vector;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test vector val, ref, and const params")
{
	vector<int> n1 {0, 1, 2};
	vector<int> n2 {0, 1, 2};
	vector<int> n3 {0, 1, 2};

	vector<int> n1expected {0, 1, 2};
	vector<int> n2expected {0, 1, 2};
	vector<int> n3expected {0, 1, 2};
}