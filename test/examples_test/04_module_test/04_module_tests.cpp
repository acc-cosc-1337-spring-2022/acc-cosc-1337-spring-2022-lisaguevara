#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "while.h"
#include "value_ref.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test sum_of_squares function") {
	REQUIRE(14 == sum_of_sqaures(3));
}

TEST_CASE("Value of reference parameters") {
	int num1 = 0;
	int num2 = 5;
	pass_by_val_and_ref(num1, num2);

	REQUIRE(num1 == 0);
	REQUIRE(num2 == 50);
}
