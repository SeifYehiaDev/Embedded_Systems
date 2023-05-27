/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 27/05/2023
 * */

#include <stdio.h>

//                                                 _Question_
/*Write a program that takes a year as input and determines whether it is a leap year or not. (Leap year that contains Day 29th Feb (366 Days)*/
//                                                 _Solution_
void main() {
    int year;
    printf("Enter year: (e.g., 2023): ");
    scanf("%d", &year);
    printf("%d %s a leap year.", year, (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ? "is" : "isn't");
}

//                                                 _Output One_
/*
Enter year: (e.g., 2023): 2023
2023 isn't a leap year.
 */

//                                                 _Output Two_
/*
Enter year: (e.g., 2023): 2024
2024 is a leap year.
 */
