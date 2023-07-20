/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 20/07/2023
 * */

#include <stdio.h>

//                                                 _Question_
                /*Write a program to count the number of 1’s in an unsigned 32-bit integer.*/
//                                                 _Solution_

// This function work with positive number only
int countOnesInBinary_V1(int number) {
    unsigned char count = 0;
    while (number) {
        count += number & 1;
        number >>= 1;
    }
    return count;
}

// This function work with positive number and negative number.
int countOnesInBinary_V2(int number) {
    unsigned char count = 0, bit;
    for (bit = 0; bit < sizeof(number) * 8; bit++)
        count += (number >> bit) & 1;
    return count;
}

void main() {
    signed int number;
    printf("Enter an integer number: ");
    scanf("%d", &number);
    printf("The number of ones in %d is %d.", number,
           (number > 0) ? countOnesInBinary_V1(number) : countOnesInBinary_V2(number));
}


//                                                 _Output One_
/*
Enter a positive number: 255
The number of ones in 255 is 8.
 */

//                                                 _Output Two_
/*
Enter an integer number: -1
The number of ones in -1 is 32.
 */