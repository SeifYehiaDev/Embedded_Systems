/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 27/05/2023
 * */

#include <stdio.h>

//                                                 _Question_
        /*Write a program to calculate the power of a number, The number and its power are input from user.*/
//                                                 _Solution_
void main() {
    float number, power;
    double result = 1.0, index;
    printf("Enter the base number: ");
    scanf("%f", &number);
    printf("Enter the power: ");
    scanf(" %f", &power);
    for (index = 1.0; index <= ((power < 0) ? power * -1 : power); result *= number, index++);
    printf("%.1f power %.1f = %.2f", number, power, (power > 0) ? result : 1.0 / result);
}

//                                                 _Output_
/*
Enter the base number: -2 
Enter the power: -5
-2.0 power -5.0 = -0.03
 */