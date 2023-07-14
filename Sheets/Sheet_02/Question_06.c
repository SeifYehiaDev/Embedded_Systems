/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 14/07/2023
 * */

#include <stdio.h>
//                                                 _Question_
            /*Write c code to reverse bits in an 8-bit number (149->10010101 return 169->10101001).*/
//                                                 _Solution_
int reverseBit(char number) {
    int reverseBinary = 0, bits = 0;
    for (bits = 0; bits < sizeof(number) * 8; bits++)
        if (number >> bits & 1) reverseBinary |= 1 << (7 - bits); // set number of bit 1.
    return reverseBinary;
}

int main() {
    signed int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("The binary reverse representation of %d is %d.", number, reverseBit(number));
    return 0;
}


//                                                 _Output One_
/*
Enter a number: 149
The binary reverse representation of 149 is 169.
 */

//                                                 _Output Two_
/*
Enter a number: 5
The binary reverse representation of 5 is 160.
 */