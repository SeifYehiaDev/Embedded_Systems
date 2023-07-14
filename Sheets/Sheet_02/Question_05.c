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

void toBinary_V2(int number) {
    signed short bit, isFinedOne = 0, digit;
    for (bit = sizeof(number) * 8 - 1; bit >= 0; bit--) {
        digit = number >> bit & 1;
        if (isFinedOne == 0 && digit == 0) continue;
        if (isFinedOne == 0 && digit) isFinedOne = 1;
        printf("%d", digit);
    }
}

int main() {
    signed int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("The binary representation of %d is ", number);
    toBinary_V1(number);
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