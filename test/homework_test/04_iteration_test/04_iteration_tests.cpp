#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "dna.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test factorial function") {
	REQUIRE(factorial(3) == 6);
	REQUIRE(factorial(5) == 120);
	REQUIRE(factorial(6) == 720);
}

TEST_CASE("Test gcd function") {
	REQUIRE(gcd(5, 15) == 5);
	REQUIRE(gcd(21, 28) == 7);
	REQUIRE(gcd(25, 100) == 25);
}

TEST_CASE("Test the validation process of confirm_choice function") {
	/* When prompted, user must enter "n" first, then "y" 
	 * for the entire test case to be considered passing.
	 * However, this test is meant to confirm that the function
	 * will output "invalid entry" if "n" or "y" aren't entered.
	 */
	REQUIRE(confirm_choice() == "n");
	REQUIRE(confirm_choice() == "y");
}

TEST_CASE("Tests the handle_menu_choice function returns 0"){
	/* Returns 0 if choice is 3 and user confirms they do NOT
	* want to exit
	*/
	REQUIRE(handle_menu_choice(3) == 0);
}

TEST_CASE("Tests the handle_menu_choice function returns 3"){
	/* Returns 3 if choice is 3 and user confirms they DO
	* want to exit
	*/
	REQUIRE(handle_menu_choice(3) == 3);
}