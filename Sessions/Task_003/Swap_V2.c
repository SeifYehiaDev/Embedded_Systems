/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 27/05/2023
 * */

#include <stdio.h>

//                                                 _Question_
                                        /*Swap two numbers way two*/
//                                                 _Solution_
void main() {
    int firstNumber = 5, secondNumber = 4;
    printf("Before Swap:\n");
    printf("First number is %d and second number is %d\n", firstNumber, secondNumber);
    firstNumber = firstNumber + secondNumber; // 5 + 4 = 9
    secondNumber = firstNumber - secondNumber; // 9 - 4 = 5
    firstNumber = firstNumber - secondNumber; // 9 - 5 = 4
    printf("After Swap:\n");
    printf("First number is %d and second number is %d", firstNumber, secondNumber);
}

//                                                 _Output_
/*
Before Swap:
First number is 5 and second number is 4
After Swap:
First number is 4 and second number is 5
 */
