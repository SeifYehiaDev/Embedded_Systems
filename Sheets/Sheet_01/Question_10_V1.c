/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 28/05/2023
 * */

#include <stdio.h>

//                                                 _Question_
/*Write a program that reads a positive integer and check if this number is a base of 2 like 1,2,4,8,16,32, 64....*/
//                                                 _Solution_
void main() {
    signed int number;
    unsigned int index;
    unsigned char isBaseOfTwo = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    if (number < 0) {
        printf("Error: the number should be a positive number.");
        return;
    }
    for (index = 1; index * 2 <= number && !isBaseOfTwo; index++)
        if (index * 2 == number) isBaseOfTwo = 1;
    printf("%d %s base of 2.", number, (isBaseOfTwo) ? "is" : "is not");
}

//                                                 _Output One_
/*
Enter a positive integer: 128
128 is base of 2.
 */

//                                                 _Output Two_
/*
Enter a positive integer: 129
129 is not base of 2.
 */

//                                                 _Output Three_
/*
Enter a positive integer: -128
Error: the number should be a positive number.
 */