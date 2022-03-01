#include "dna.h"

// factorial function block
int factorial(int num) {
    int sum = 1;
    while(num > 0) {
        sum *= num;
        num--;
    }
    return sum;
}

// gcd function block
int gcd(int num1, int num2) {
    do {
        if (num1 < num2) {
            auto temp = num1;
            num1 = num2;
            num2 = temp;
        }
        if (num1 > num2) {
            num1 -= num2;
        }
    } while (num1 != num2);

    return num1;
}

// run_menu function block
void run_menu(){
    int choice;
    do {
        // Display menu
        display_menu();
        // Ask for user input
        cout << "Enter a menu option number: ";
        cin >> choice;
        cout << "\n"; // print a blank line
        // Handle menu choice
        choice = handle_menu_choice(choice);
    } while (choice != 3);
}

// display_menu function block
void display_menu() {
    cout << "\n\tMain Menu\t\n";
    cout << "1 - Factorial\n";
    cout << "2 - Greatest Common Divisor\n";
    cout << "3 - Exit\n\n";
}

// handle_menu_choice function block
int handle_menu_choice(int choice) {
    string confirm;
    switch (choice) {
        case 1:
            process_factorial();
            break;
        case 2:
            process_gcd();
            break;
        case 3:
            confirm = confirm_choice();

            if (confirm == "y") {
                cout << "Exiting program.";
            } else {
                choice = 0;
            }
            break;
        default:
            cout << "Invalid Entry\n";
    }
    return choice;
}

// confirm_choice function block
string confirm_choice() {
    string confirm;
    cout << "Are you sure you want to exit? y/n: ";
    cin >> confirm;
    // Validate entry
    while (confirm != "y" && confirm != "n") {
        cout << "Invalid entry\n";
        cout << "Are you sure you want to exit? y/n: ";
        cin >> confirm;
    }
    return confirm;
}

// process_factorial function block
void process_factorial() {
    int num1, sum;
     // Ask for user input
    cout << "Enter a number: "; // between 0 and 31????
    cin >> num1; // Needs validation
    // Call factorial function
    sum = factorial(num1);
    // Display factorial output
    cout << "\nThe factorial of " << num1 << " is " << sum << "\n";
}

// process_gcd function block
void process_gcd() {  
    int num1, num2, gcd1;  
    // Ask for user input
    cout << "This function requires two numbers\n";
    cout << "Enter your first number: ";
    cin >> num1;
    cout << "Enter your second number: ";
    cin >> num2;
    // Call factorial function
    gcd1 = gcd(num1, num2);
    // Display factorial output
    cout << "\nThe greatest common divisor of " 
    << num1 << " and " << num2 << " is " << gcd1 << "\n";
}