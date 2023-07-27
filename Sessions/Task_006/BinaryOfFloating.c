/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 27/07/2023
 * */

#include <stdio.h>

//                                                 _Question_
                    /*Write a function to display binary representation of floating point.*/
//                                                 _Solution_
void binary(int number) {
    int isFindOne = 0, digit;
    for (int bit = sizeof(number) * 8 - 1; bit >= 0; bit--) {
        digit = number >> bit & 1;
        if (!isFindOne && digit) isFindOne = 1;
        if (isFindOne) printf("%d", digit);
    }
}

int main() {
    float x = 5.0F;
    int *p = &x;
    printf("5.0 in binary is ");
    binary(*p);
    return 0;
}

//                                                 _Output_
/*
5.0 in binary is 1000000101000000000000000000000
 */
