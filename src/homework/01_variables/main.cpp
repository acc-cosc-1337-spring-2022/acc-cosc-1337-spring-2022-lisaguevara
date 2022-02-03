//write include statements
#include<iostream>
#include "variables.h"

//write namespace using statement for cout
using std::cin, std::cout;

int main()
{
	int num;
	cout<<"Enter a number: ";
	cin>>num;

	int result = multiply_numbers(num);
	cout<<"Result with entered value: "<<result<<"\n";

	int num1 = 4;
	result = multiply_numbers(num1);
	cout<<"Result with num1 variable: "<<result<<"\n";

	return 0;
}
