/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 14/07/2023
 * */

#include <stdio.h>
//                                                 _Question_
/*write a program to print the binary representation of a number, try not to print zeros on the left (5->print 101).*/
//                                                 _Solution_
void toBinary_V1(int number) {
    signed short bit, isFinedOne = 0;
    for (bit = sizeof(number) * 8 - 1; bit >= 0; bit--) {
        if (isFinedOne == 0 && (number >> bit & 1)) isFinedOne = 1;
        if (isFinedOne) printf("%d", (number >> bit & 1));
    }
}

// This version of function work only with positive number.
void toBinary_V2(int number) {
    int x, y;
    char binary[sizeof(number) * 8];
    for (x = 0; number; binary[x] = number % 2, number /= 2, x++);
    for (y = x - 1; y >= 0; printf("%d", binary[y]), y--);
}

int main() {
    signed int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("The binary representation of %d is ", number);
    (number < 0) ? toBinary_V1(number) : toBinary_V2(number);
    return 0;
}


//                                                 _Output One_
/*
Enter a number: 5
The binary representation of 5 is 101
 */

//                                                 _Output Two_
/*
Enter a number: -1
The binary representation of -1 is 11111111111111111111111111111111
 */