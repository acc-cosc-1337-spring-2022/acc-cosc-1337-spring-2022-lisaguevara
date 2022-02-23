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
