/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 28/05/2023
 * */

#include <stdio.h>

//                                                 _Question_
            /*Write a program that reads a positive integer and checks if it is a perfect square.*/
//                                                 _Solution_
void main() {
    signed int number;
    unsigned int index;
    unsigned char isPerfectSquare = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    if (number < 0) {
        printf("Error: the number should be a positive number.");
        return;
    }
    for (index = 1; index * index <= number && !isPerfectSquare; index++)
        if (index * index == number) isPerfectSquare = 1;
    printf("%02d %s a perfect square.", number, (isPerfectSquare) ? "is" : "is not");
}

//                                                 _Output One_
/*
Enter a positive integer: 9
09 is a perfect square.
 */

//                                                 _Output Two_
/*
Enter a positive integer: 10
10 is not a perfect square.
 */

//                                                 _Output Three_
/*
Enter a positive integer: -10
Error: the number should be a positive number.
 */