/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 16/07/2023
 * */

#include <stdio.h>

//                                                 _Question_
                                /*What happened in division by zero and why?*/
//                                                 _Solution_


int abs(int number) {
    return (number < 0) ? -number : number;
}

int division(int firstNumber, int secondNumber) {
    int div = 0,
    isNegative = (firstNumber >> (sizeof(firstNumber) * 8 - 1) & 1) || (secondNumber >> (sizeof(secondNumber) * 8 - 1) & 1);
    firstNumber = abs(firstNumber);
    secondNumber = abs(secondNumber);
    while (firstNumber >= secondNumber) {
        firstNumber -= secondNumber;
        div++;
    }
    return (isNegative) ? -div : div;
}

int main() {
    printf("6 / -2 = %d\n", division(6, -2));
    printf("What happened in division by zero?\n");
    printf("Run time error.\n");
    printf("Why?\n");
    printf("Because when subtract firstNumber from secondNumber.\nThe first number will still be greater than the second number and can't get out of the loop(infinite loop).\nlook my function in line #18.");
    return 0;
}

//                                                 _Output_
/*
6 / -2 = -3
What happened in division by zero?
Run time error.
Why?
Because when subtract firstNumber from secondNumber.
The first number will still be greater than the second number and can't get out of the loop(infinite loop).
look my function in line #18.
 */