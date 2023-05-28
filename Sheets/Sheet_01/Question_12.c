/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 28/05/2023
 * */

#include <stdio.h>

//                                                 _Question_
/*write a program to take even numbers from user and print the sum of them after each entry if the user enters 2 odd number the program print "bye" and stopped.*/
//                                                 _Solution_
void main() {
    signed number, sumOfEven = 0;
    unsigned char numberOFOdd = 0;
    do {
        printf("Enter an even number: ");
        scanf("%d", &number);
        if (number % 2 == 0)
            printf("The sum is %d\n", sumOfEven += number);
        else
            numberOFOdd++;
    } while (numberOFOdd < 2);
    printf("bye");
}

//                                                 _Output_
/*
Enter an even number: 2
The sum is 2
Enter an even number: 4
The sum is 6
Enter an even number: 5
Enter an even number: 8
The sum is 14
Enter an even number: 10
The sum is 24
Enter an even number: 3
bye
 */