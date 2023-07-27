/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 27/07/2023
 * */

#include <stdio.h>

//                                                 _Question_
                            /*Swap number using function(call by Reference).*/
//                                                 _Solution_
void swapNumber_V1(int *pFirstNumber, int *pSecondNumber) {
    int temp = *pFirstNumber;
    *pFirstNumber = *pSecondNumber;
    *pSecondNumber = temp;
}

void swapNumber_V2(int *pFirstNumber, int *pSecondNumber) {
    *pFirstNumber = (*pFirstNumber + *pSecondNumber) - (*pSecondNumber = *pFirstNumber);
}

int main() {
    int firstNumber = 10, secondNumber = 20;
    printf("Before swap:\n");
    printf("FirstNumber = %d , SecondNumber = %d\n", firstNumber, secondNumber);
    swapNumber_V1(&firstNumber, &secondNumber); // Call by Reference.
    printf("After swap:\n");
    printf("FirstNumber = %d , SecondNumber = %d\n", firstNumber, secondNumber);
    printf("Return to original:\n");
    swapNumber_V2(&firstNumber, &secondNumber); // Call by Reference.
    printf("FirstNumber = %d , SecondNumber = %d", firstNumber, secondNumber);
    return 0;
}

//                                                 _Output_
/*
Before swap:
FirstNumber = 10 , SecondNumber = 20
After swap:
FirstNumber = 20 , SecondNumber = 10
Return to original:
FirstNumber = 10 , SecondNumber = 20
 */
