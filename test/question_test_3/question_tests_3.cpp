#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question3.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test get_fib_sequence")
{
	REQUIRE(get_fib_sequence(5) == "0 1 1 2 3 ");
	REQUIRE(get_fib_sequence(7) == "0 1 1 2 3 5 8 ");
	REQUIRE(get_fib_sequence(10) == "0 1 1 2 3 5 8 13 21 34 ");
	REQUIRE(get_fib_sequence(12) == "0 1 1 2 3 5 8 13 21 34 55 89 ");
}
