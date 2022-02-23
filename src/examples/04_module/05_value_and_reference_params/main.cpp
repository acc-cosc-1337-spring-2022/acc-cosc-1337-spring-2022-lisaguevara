#include<iostream>

using std::cout;

int main() 
{
	auto num = 5; // int variable
	int &num_ref = num; // int reference variable like a clone

	cout << num << "\n";
	cout << num_ref<<"\n";

	num_ref = 10;
	cout << num << "\n";
	cout << num_ref<<"\n";
	return 0;
}