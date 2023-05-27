/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 27/05/2023
 * */

#include <stdio.h>

//                                                 _Question_
/*Write a program that takes an integer as input and checks if it is a palindrome (reads the same forwards and backwards)*/
//                                                 _Solution_
void main() {
    int number, copyNumber, reverseNumber = 0;
    printf("Enter a two-digit integer: ");
    scanf("%d", &number);
    copyNumber = number;
    while (copyNumber > 0) {
        reverseNumber = (reverseNumber * 10) + (copyNumber % 10);
        copyNumber /= 10;
    }
    printf("%d %s a palindrome.", number, (number == reverseNumber) ? "is" : "isn't");
}

//                                                 _Output One_
/*
Enter a two-digit integer: 123
123 isn't a palindrome.
 */

//                                                 _Output Two_
/*
Enter a two-digit integer: 121
121 is a palindrome
 */