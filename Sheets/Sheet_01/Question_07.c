/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 27/05/2023
 * */

#include <stdio.h>

//                                                 _Question_
                /*Write a program that reads a positive integer and computes the factorial.*/
//                                                 _Solution_
void main() {
    int number, index, fact = 1;
    printf("Enter a positive number: ");
    scanf("%d", &number);
    if (number < 0) {
        printf("Error: your enter a negative number can't calculate the factorial.");
        return;
    }
    for (index = 1; index <= number; fact *= index, index++);
    printf("Factorial %d is %d.", number, fact);
}

//                                                 _Output One_
/*
Enter a positive number: 6
Factorial 6 is 720.
 */

//                                                 _Output One_
/*
Enter a positive number: -6
Error: your enter a negative number can't calculate the factorial.
 */