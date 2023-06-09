/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 27/05/2023
 * */

#include <stdio.h>

//                                                 _Question_
/*Write a program to take numbers from user and calculate the sum of them (let users choose the No of numbers).*/
//                                                 _Solution_
void main() {
    signed int number, totalNumber;
    unsigned int index, sum = 0;
    printf("Enter the total numbers: ");
    scanf("%d", &totalNumber);
    if (totalNumber < 0) {
        printf("Error: the total number should be positive number.");
        return;
    }
    for (index = 1; index <= totalNumber; sum += number, index++) {
        printf("Enter number %u: ", index);
        scanf("%d", &number);
    }
    printf("The sum of numbers is %u.", sum);
}

//                                                 _Output One_
/*
Enter the total numbers: 3
Enter number 1: 2147483647
Enter number 2: 2
Enter number 3: 1
The sum of numbers is 2147483650.
 */

//                                                 _Output Two_
/*
Enter the total numbers: -5
Error: the total number should be positive number.
 */