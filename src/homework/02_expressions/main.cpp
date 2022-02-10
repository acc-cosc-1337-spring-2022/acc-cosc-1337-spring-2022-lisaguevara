//write include statements
#include "../src/homework/02_expressions/expressions.h"
#include<iostream>

//write namespace using statement for cout
using std::cin, std::cout;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	// Declare variables
	double meal_amount, tip_rate, tip_amount, tax_amount, total;
	// Request cost of meal input from user and assign to meal_amount
	cout<<"Enter the cost of your meal: ";
	cin>>meal_amount;
	// Calculate sales tax based on user entry
	tax_amount = get_sales_tax_amount(meal_amount);
	// Request tip rate input from user and assign to tip_rate
	cout<<"Enter tip percentage (ex. 20): ";
	cin>>tip_rate;
	// Divide tip_rate by 100 to attain percentage
	tip_rate = tip_rate / 100;
	// Calculate tip amount based on user entry
	tip_amount = get_tip_amount(meal_amount, tip_rate);

	// Calculate total payment owed
	total = meal_amount + tax_amount + tip_amount;

	// Display receipt
	cout<<"\n";
	cout<<"------Receipt------\n";
	cout<<"Meal Amount:\t"<< meal_amount<<"\n";
	cout<<"Sales Tax:\t" << tax_amount<<"\n";
	cout<<"Tip Amount:\t"<< tip_amount<<"\n";
	cout<<"Total:\t\t"<< total<<"\n";

	return 0;
}
