#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "if.h"
#include "if_else_if.h"
#include "switch.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test or result", "or truth table")
{
	
}

TEST_CASE ("Test logical order of precedence")
{
	REQUIRE(get_order_of_ops(true, true, true) == true);
}

TEST_CASE ("Test is overtime", "greater than 40 returns true")
{
	REQUIRE(is_overtime(39) == false);
	REQUIRE(is_overtime(40) == false);
	REQUIRE(is_overtime(41) == true);
}

TEST_CASE("Test is even")
{
	REQUIRE(is_even(2) == true);
	REQUIRE(is_even(6) == true);
	REQUIRE(is_even(7) == false);
}

TEST_CASE("Test get generation")
{
	REQUIRE(get_generation(2010) == "Centenial");
	REQUIRE(get_generation(1990) == "Millenial");
	REQUIRE(get_generation(1970) == "Generation X");
	REQUIRE(get_generation(1950) == "Baby Boomer");
	REQUIRE(get_generation(1930) == "Silent Generation");
	REQUIRE(get_generation(1900) == "Invalid year");
}

TEST_CASE("Test switch case")
{
	REQUIRE(menu(0) == "Invalid option");
	REQUIRE(menu(1) == "Option 1");
	REQUIRE(menu(2) == "Option 2");
	REQUIRE(menu(3) == "Option 3");
	REQUIRE(menu(4) == "Option 4");
	REQUIRE(menu(5) == "Invalid option");
}