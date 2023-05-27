/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 27/05/2023
 * */

#include <stdio.h>
#include <math.h>

//                                                 _Question_
            /*Write a program that take two numbers and multiply them without using * operation.*/
//                                                 _Solution_
void main() {
    int firstNumber, secondNumber, index, product = 0;
    printf("Enter two integers to multiply: ");
    scanf("%d %d", &firstNumber, &secondNumber);
    for (index = 1; index <= ((firstNumber < secondNumber) ? firstNumber : secondNumber); index++)
        product += (firstNumber > secondNumber) ? firstNumber : secondNumber;
    printf("%d * %d = %d", firstNumber, secondNumber, product);
}

//                                                 _Output_
/*
Enter two integers to multiply: 2 3
2 * 3 = 6
 */
