/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 16/07/2023
 * */

#include <stdio.h>

//                                                 _Question_
                            /*Take 3 number and get min without <,>,<=.>=,/.*/
//                                                 _Solution_

// This function work with unsigned number only.
unsigned int min(unsigned int firstNumber, unsigned int secondNumber, unsigned int thirdNumber) {
    unsigned min = 0;
    while (firstNumber-- && secondNumber-- && thirdNumber--) min++;
    return min;
}

int main() {
    unsigned int firstNumber, secondNumber, thirdNumber;
    printf("Enter three unsigned integers: ");
    scanf("%u %u %u", &firstNumber, &secondNumber, &thirdNumber);
    printf("The minimum value is %d.", min(firstNumber, secondNumber, thirdNumber));
}

//                                                 _Output One_
/*
Enter three unsigned integers: 65522 665462 564320
The minimum value is 65522.
 */

//                                                 _Output Two_
/*
Enter three unsigned integers: 0 15 18
The minimum value is 0.
 */