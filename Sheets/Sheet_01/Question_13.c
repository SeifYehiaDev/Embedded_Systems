/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 28/05/2023
 * */

#include <stdio.h>

//                                                 _Question_
        /*You are designing a poster which prints out numbers with a unique style applied to each of them.*/
//                                                 _Solution_
void main() {
    signed number, sumOfHoles = 0, digit;
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    if (number < 0) {
        printf("Error: the number should be a positive number.");
        return;
    }
    while (number > 0) {
        digit = number % 10;
        sumOfHoles += (digit == 8) ? 2 : (digit == 0 || digit == 4 || digit == 6 || digit == 9) ? 1 : 0;
        number /= 10;
    }
    printf("Number of holes are %d", sumOfHoles);
}

//                                                 _Output One_
/*
Enter a positive integer: 3824
Number of holes are 3
 */

//                                                 _Output Two_
/*
Enter a positive integer: -3824
Error: the number should be a positive number.
 */