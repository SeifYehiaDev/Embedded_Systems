/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 27/05/2023
 * */

#include <stdio.h>

//                                                 _Question_
        /*Write a program that take two numbers and calculate the reminder without using % operation.*/
//                                                 _Solution_
void main() {
    int firstNumber, secondNumber;
    printf("Enter two integers to calculate reminder: ");
    scanf("%d %d", &firstNumber, &secondNumber);
    (secondNumber == 0) ? printf("Error: You can't calculate the reminder by zero") :
    printf("%d %% %d = %d\n", firstNumber, secondNumber, firstNumber - (firstNumber / secondNumber * secondNumber));
}

//                                                 _Output One_
/*
Enter two integers to calculate reminder: 10 8
10 % 8 = 2
 */

//                                                 _Output Two_
/*
Enter two integers to calculate reminder: -10 8
-10 % 8 = -2
 */

//                                                 _Output Three_
/*
Enter two integers to calculate reminder: 10 -8
10 % -8 = 2
 */

//                                                 _Output Four_
/*
Enter two integers to calculate reminder: -10 -8
-10 % -8 = -2
 */

//                                                 _Output Five_
/*
Enter two integers to calculate reminder: -10 -2
-10 % -2 = 0
 */

//                                                 _Output Six_
/*
Enter two integers to calculate reminder: 10 0
Error: You can't calculate the reminder by zero
 */