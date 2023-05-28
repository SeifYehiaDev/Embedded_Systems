/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 28/05/2023
 * */

#include <stdio.h>
#include <math.h>

//                                                 _Question_
            /*Write a program that reads a positive integer and checks if it is a perfect square.*/
//                                                 _Solution_
void main() {
    signed number;
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    if (number < 0) {
        printf("Error: the number should be a positive number.");
        return;
    }
    printf("%d %s a perfect square.", number, (pow(sqrt(number), 2) == number) ? "is" : "is not");
}

//                                                 _Output One_
/*
Enter a positive integer: 9
9 is a perfect square.
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