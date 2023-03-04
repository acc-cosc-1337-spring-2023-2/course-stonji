#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "expressions.h"
#include "casting.h"
#include "constants.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify operator_precedence_1", "validation order of operations") {
	REQUIRE(operator_precedence_1(3, 6, 3) == 5);
}

TEST_CASE("Verify operator_precedence_2", "validation use of parenthesis") {
	REQUIRE(operator_precedence_2(3, 6, 3) == 27);
}

TEST_CASE("Verify convert int to double", "int converted to double") {
	REQUIRE(convert_to_double(10, .5) == 5);
}

TEST_CASE ("Verify get area of circle") {
	REQUIRE(get_area_of_circle(10) == 314.159);
}