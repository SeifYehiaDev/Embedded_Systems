/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 27/05/2023
 * */

#include <stdio.h>

//                                                 _Question_
        /*Write a program to take 2 numbers from user and calculate sum of all numbers between them.*/
//                                                 _Solution_
void main() {
    int firstNumber, secondNumber, sum = 0, index;
    printf("Enter two numbers: ");
    scanf("%d %d", &firstNumber, &secondNumber);
    if (firstNumber > secondNumber)
        firstNumber = (firstNumber + secondNumber) - (secondNumber = firstNumber);
    for (index = firstNumber + 1; index < secondNumber; sum += index, index++);
    printf("The sum of numbers between %d and %d is %d.", firstNumber, secondNumber, sum);
}

//                                                 _Output_
/*
Enter two numbers: 20 10
The sum of numbers between 10 and 20 is 135.
 */
