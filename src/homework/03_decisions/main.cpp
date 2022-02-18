#include<iostream>
using std::cout; using std::cin; using std::string;
//write include statements
#include "decisions.h"

int main() 
{
	// Declare variables
	int menu_choice;
	int grade;

	// Display main menu
	cout << "\n\tMAIN MENU\t\n";
	cout << "1 - Letter grade using if\n";
	cout << "2 - Letter grade using switch\n";
	cout << "3 - Exit program\n\n";
	// Gather user menu choice
	cout << "Enter your menu choice number: ";
	cin >> menu_choice;

	// Gather grade input based on menu_choice
	if (menu_choice == 1 || menu_choice == 2) {
		cout << "\nEnter a grade between 0-100: ";
		cin >> grade;

		if (grade < 0 || grade > 100){
			cout << "Grade entered is out of range\n";
			menu_choice = -1;
		}
	}

	switch (menu_choice) {
		case 1:
			cout << "\n" << grade << " converts to letter grade: " << get_letter_grade_using_if(grade);
			break;
		case 2:
			cout << "\n" << grade << " converts to letter grade: " << get_letter_grade_using_switch(grade);
			break;
		case 3: 
		case -1:
			cout << "Exiting program...";
			break;
		default: 
			cout << "Menu choice must be between 1-3.\nExiting program...";
	}
	return 0;
}