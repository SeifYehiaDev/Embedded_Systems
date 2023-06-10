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
    signed int number;
    unsigned int sumOfEven = 0;
    unsigned char numberOFOdd = 0;
    do {
        printf("Enter an even number: ");
        scanf("%d", &number);
        if (number & 1) numberOFOdd++;
        else printf("The sum is %u\n", sumOfEven += number);
    } while (numberOFOdd < 2);
    printf("bye");
}

//                                                 _Output_
/*
Enter an even number: 2147483646
The sum is 2147483646
Enter an even number: 4
The sum is 2147483650
Enter an even number: 1
Enter an even number: 2
The sum is 2147483652
Enter an even number: 8
The sum is 2147483660
Enter an even number: 10000000
The sum is 2157483660
Enter an even number: 9
bye
 */