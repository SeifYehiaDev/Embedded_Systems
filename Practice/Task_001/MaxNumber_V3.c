/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 27/05/2023
 * */

#include <stdio.h>

//                                                 _Question_
                /*Write a prgoram that takes three integers and print the maximum number*/
//                                                 _Solution_
void main() {
    int firstNumber, secondNumber, thirdNumber, temp;
    printf("Enter three integers: ");
    scanf("%d %d %d", &firstNumber, &secondNumber, &thirdNumber);
    if (firstNumber > secondNumber) {
        temp = firstNumber;
        firstNumber = secondNumber;
        secondNumber = temp;
    }
    if (secondNumber > thirdNumber) {
        temp = secondNumber;
        secondNumber = thirdNumber;
        thirdNumber = temp;
    }
    if (firstNumber > secondNumber) {
        temp = firstNumber;
        firstNumber = secondNumber;
        secondNumber = temp;
    }
    printf("Maximum number is %d.", thirdNumber);
}

//                                                 _Output One_
/*
Enter three integers: 1 2 3
Maximum number is 3.
 */

//                                                 _Output Two_
/*
Enter three integers: 1 3 3
Maximum number is 3.
 */