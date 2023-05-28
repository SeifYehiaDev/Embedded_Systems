/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 28/05/2023
 * */

#include <stdio.h>

//                                                 _Question_
                /*Write a program to sum the digits in a decimal number 145 -> 1+4+5=10.*/
//                                                 _Solution_
void main() {
    signed number;
    unsigned char sumOfDecimal = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    if (number < 0) {
        printf("Error: the number should be a positive number.");
        return;
    }
    while (number > 0) {
        sumOfDecimal += number % 10;
        number /= 10;
    }
    printf("The sum of digits in a decimal is %d", sumOfDecimal);
}

//                                                 _Output One_
/*
Enter a positive integer: 145
The sum of digits in a decimal is 10
 */

//                                                 _Output Two_
/*
Enter a positive integer: 2147483647
The sum of digits in a decimal is 46
 */

//                                                 _Output Three_
/*
Enter a positive integer: -145
Error: the number should be a positive number.
 */