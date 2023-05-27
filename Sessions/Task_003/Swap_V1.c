/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 27/05/2023
 * */

#include <stdio.h>

//                                                 _Question_
                                        /*Swap two numbers way one*/
//                                                 _Solution_
void main() {
    int firstNumber = 5, secondNumber = 4, temp;
    printf("Before Swap:\n");
    printf("First number is %d and second number is %d\n", firstNumber, secondNumber);
    temp = firstNumber; // temp = 5
    firstNumber = secondNumber; // firstNumber = 4
    secondNumber = temp; // secondNumber = 5
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
