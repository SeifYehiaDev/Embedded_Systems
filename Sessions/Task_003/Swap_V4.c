/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 27/05/2023
 * */

#include <stdio.h>

//                                                 _Question_
                                        /*Swap two numbers way Four*/
//                                                 _Solution_
void main() {
    int firstNumber = 5, secondNumber = 4;
    printf("Before Swap:\n");
    printf("First number is %d and second number is %d\n", firstNumber, secondNumber);
    firstNumber = (firstNumber + secondNumber) - (secondNumber = firstNumber);
    /*
     * firstNumber = (5 + 4) - (5) = 4
     * secondNumber = 5
     * */
    printf("After Swap:\n");
    printf("First number is %d and second number is %d\n", firstNumber, secondNumber);
}

//                                                 _Output_
/*
Before Swap:
First number is 5 and second number is 4
After Swap:
First number is 4 and second number is 5
 */
