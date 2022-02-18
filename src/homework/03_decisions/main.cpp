#include<iostream>
#include<string>
using std::cout; using std::cin; using std::string;
//write include statements
#include "decisions.h"

int main() 
{
	// Initialize constants for main menue
	const int USE_IF = 1;
	const int USE_SWITCH = 2;
	const int EXIT = 3;

	// Declare variables
	int menu_choice;
	int grade;
	string letter_grade;

	// Display main menu
	cout << "\n\tMAIN MENU\t\n";
	cout << "1 - Letter grade using if\n";
	cout << "2 - Letter grade using switch\n";
	cout << "3 - Exit program\n\n";
	// Gather user menu choice
	cout << "Enter your menu choice number: ";
	cin >> menu_choice;

	// Gather grade input based on menu_choice
	if (menu_choice == USE_IF || menu_choice == USE_SWITCH) {
		cout << "\nEnter a grade between 0-100: ";
		cin >> grade;

		if (grade < 0 || grade > 100){
			cout << "Grade entered is out of range\n";
			menu_choice = -1;
		}
	}

	switch (menu_choice) {
		case USE_IF:
			letter_grade = get_letter_grade_using_if(grade);
			cout << "\n" << grade << " converts to letter grade: " << letter_grade;
			break;
		case USE_SWITCH: 
			letter_grade = get_letter_grade_using_switch(grade);
			cout << "\n" << grade << " converts to letter grade: " << letter_grade;
			break;
		case EXIT: 
		case -1:
			cout << "Exiting program...";
			break;
		default: 
			cout << "Menu choice must be between 1-3.\nExiting program...";
	}

	return 0;
}