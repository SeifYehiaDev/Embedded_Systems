/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 27/05/2023
 * */

#include <stdio.h>
#include <limits.h>

//                                                 _Question_
/*Write a program to take numbers from user and find the max and min from them (let users choose the No of numbers).*/
//                                                 _Solution_
void main() {
    int number, totalNumber, index, maxNumber = INT_MIN, minNumber = INT_MAX;
    printf("Enter the total numbers: ");
    scanf("%d", &totalNumber);
    for (index = 1; index <= totalNumber; index++) {
        printf("Enter number %d: ", index);
        scanf("%d", &number);
        if (number > maxNumber)
            maxNumber = number;
        if (number < minNumber)
            minNumber = number;
    }
    printf("The minimum number is %d\nThe maximum number is %d", minNumber, maxNumber);
}

//                                                 _Output_
/*
Enter the total numbers: 4
Enter number 1: 77
Enter number 2: 69
Enter number 3: -5
Enter number 4: 1
The minimum number is -5
The maximum number is 77
 */
