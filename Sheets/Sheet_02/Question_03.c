/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 14/07/2023
 * */

#include <stdio.h>

//                                                 _Question_
            /*Write a program to reverse a number in decimal representation (1205->5021).*/
//                                                 _Solution_

void reverseNumber(int number) {
    while (number) {
        printf("%d", number % 10);
        number /= 10;
    }
}

void main() {
    signed int number;
    printf("Enter a positive number: ");
    scanf("%d", &number);
    if (number < 0) {
        printf("Error: The number should be a positive number.");
        return;
    }
    printf("Reverse number is ");
    reverseNumber(number);
}


//                                                 _Output One_
/*
Enter a positive number: 1205
Reverse number is 5021
 */

//                                                 _Output Two_
/*
Enter a positive number: 102000
Reverse number is 000201
 */

//                                                 _Output Three_
/*
Enter a positive number: -1205
Error: The number should be a positive number.
 */