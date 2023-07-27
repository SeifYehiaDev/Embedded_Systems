/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 27/07/2023
 * */

#include <stdio.h>

//                                                 _Question_
            /*Write function to calculate summation and multiplication and return these result.*/
//                                                 _Solution_
void sumAndMul(int firstNumber, int secondNumber, int *pSum, int *pMul) {
    *pSum = firstNumber + secondNumber;
    *pMul = firstNumber * secondNumber;
}

int main() {
    int firstNumber = 10, secondNumber = 20, summation, multiplication;
    sumAndMul(firstNumber, secondNumber, &summation, &multiplication);
    printf("%d + %d = %d\n", firstNumber, secondNumber, summation);
    printf("%d * %d = %d", firstNumber, secondNumber, multiplication);
    return 0;
}

//                                                 _Output_
/*
10 + 20 = 30
10 * 20 = 200
 */
