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
    int number, totalNumber, index, sum = 0;
    printf("Enter the total numbers: ");
    scanf("%d", &totalNumber);
    for (index = 1; index <= totalNumber; sum += number, index++) {
        printf("Enter number %d: ", index);
        scanf("%d", &number);
    }
    printf("The sum of numbers is %d", sum);
}

//                                                 _Output_
/*
Enter the total numbers: 5
Enter number 1: 2
Enter number 2: 3
Enter number 3: 4
Enter number 4: 5
Enter number 5: 6
The sum of numbers is 20
 */
