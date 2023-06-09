/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 27/05/2023
 * */

#include <stdio.h>
int abs(int number);

//                                                 _Question_
        /*Write a program that take two numbers and calculate the reminder without using % operation.*/
//                                                 _Solution_
void main() {
    signed int firstNumber, secondNumber, remainder;
    unsigned char isNegative;
    printf("Enter two integers: ");
    scanf("%d %d", &firstNumber, &secondNumber);
    if (!secondNumber) {
        printf("Error: you cannot divide by zero.");
        return;
    }
    printf("%d %% %d = ", firstNumber, secondNumber);
    isNegative = firstNumber < 0;
    firstNumber = abs(firstNumber);
    secondNumber = abs(secondNumber);
    remainder = firstNumber;
    while (remainder >= secondNumber) remainder -= secondNumber;
    printf("%d", (isNegative) ? -remainder : remainder);
}

int abs(int number) {
    return (number < 0) ? number * -1 : number;
}

//                                                 _Output One_
/*
Enter two integers: 10 8
10 % 8 = 2
 */

//                                                 _Output Two_
/*
Enter two integers: -10 -8
-10 % -8 = -2
 */

//                                                 _Output Three_
/*
Enter two integers: -10 8
-10 % 8 = -2
 */

//                                                 _Output Four_
/*
Enter two integers: 10 -8
10 % -8 = 2
 */

//                                                 _Output Five_
/*
Enter two integers: 10 0
Error: you cannot divide by zero.
 */