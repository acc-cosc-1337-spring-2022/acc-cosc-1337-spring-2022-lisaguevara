#include <iostream>
#include <string>

using std::cout, std::cin, std::string;
/* Fucntion prototype for int value-return function naamed factorial
that accepts int parameter num
*/
int factorial(int num);

/* Fucntion prototype for int value-return function naamed gcd
that accepts int parameter num1 and int num2
*/
int gcd(int num1, int num2);

// Function signature void function named run_menu
void run_menu();

// Function signature void function named display_menu
void display_menu();

/* Function signature for int value-return function named
* handle_menu_choice that accepts int parameter choice
*/ 
int handle_menu_choice(int choice);

/* Function signature for string value-return function 
* named confirm_choice 
*/
string confirm_choice();

// Function signature void function named process_factorial
void process_factorial();

// Function signature void function named process_gcd
void process_gcd();