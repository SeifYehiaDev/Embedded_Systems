/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 27/05/2023
 * */

#include <stdio.h>
#include <math.h>

//                                                 _Question_
/*Write a program to calculate the power of a number, The number and its power are input from user.*/
//                                                 _Solution_
void main() {
    float number, power;
    printf("Enter the base number: ");
    scanf("%f", &number);
    printf("Enter the power: ");
    scanf(" %f", &power);
    printf("%.2f power %.2f = %.6lf", number, power, pow(number, power));
}

//                                                 _Output_
/*
Enter the base number: -2
Enter the exponent: -5
-2 power -5 = -0.031250
 */