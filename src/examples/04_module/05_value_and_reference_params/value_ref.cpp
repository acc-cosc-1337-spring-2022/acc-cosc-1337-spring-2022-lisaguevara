#include "value_ref.h"

/*
Write function code for pass_by_val_and_ref with
a value int num1 and ref int num2 parameter.
The function assigns 20 to num1 and 50 to num2

@param int val
@param int& val

@return does not return a value
*/
void pass_by_val_and_ref(int num1, int &num2) {
    num1 = 20;
    num2 = 50;
}


/*
Function pass_by_const_ref 

Try to assign a value to num1, generates error.
@param const int& num

@return does not return a value
*/
void pass_by_const_ref(const int &num) {
    //num = 20; // Compiler won't let the const change
}