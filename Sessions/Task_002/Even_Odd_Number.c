/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 24/05/2023
 * */

#include <stdio.h>
//                                                 _Question_
                            /*Write a program test the number is even or odd*/
//                                                 _Solution_
void main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("%d is %s.", number, (number % 2 == 0) ? "even" : "odd");
}

//                                                 _Output One_
/*
Enter a number: 5
5 is odd.
 */

//                                                 _Output Two_
/*
Enter a number: 6
6 is even.
 */