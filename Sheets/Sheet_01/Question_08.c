/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 27/07/2023
 * */

#include <stdio.h>

//                                                 _Question_
                /*Write a program that reads a positive integer and checks if it is a prime.*/
//                                                 _Solution_
int isPrimeNumber(int number) {
    int isPrime = number > 2;
    for (int divisor = 2; divisor <= number / 2 && isPrime; divisor++)
        if (number % divisor == 0)isPrime = 0;
    return isPrime;
}

int main() {
    signed int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("%d %s a prime number.", number, (isPrimeNumber(number)) ? "is" : "isn't");
    return 0;
}

//                                                 _Output One_
/*
Enter a number: 227
227 is a prime number.
 */

//                                                 _Output Two_
/*
Enter a number: 228
228 isn't a prime number.
 */

//                                                 _Output Three_
/*
Enter a number: -228
-228 isn't a prime number.
 */