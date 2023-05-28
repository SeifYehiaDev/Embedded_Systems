/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 28/05/2023
 * */

#include <stdio.h>

//                                                 _Question_
                /*Write a program that reads a positive integer and checks if it is a prime.*/
//                                                 _Solution_
void main() {
    signed number;
    unsigned divisor;
    unsigned char isPrime = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    if (number < 0) {
        printf("Error: the number should be a positive number.");
        return;
    }
    for (divisor = 2; divisor <= number / 2 && isPrime; divisor++)
        if (number % divisor == 0) isPrime = 0;
    printf("%d %s a prime number.", number, (isPrime) ? "is" : "isn't");
}

//                                                 _Output One_
/*
Enter a positive integer: 227
227 is a prime number.
 */

//                                                 _Output Two_
/*
Enter a positive integer: 228
228 isn't a prime number.
 */

//                                                 _Output Three_
/*
Enter a positive integer: -228
Error: the number should be a positive number.
 */