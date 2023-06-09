/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 27/05/2023
 * */

#include <stdio.h>
int abs(int number);

//                                                 _Question_
            /*Write a program that take two numbers and multiply them without using * operation.*/
//                                                 _Solution_
void main() {
    signed int firstNumber, secondNumber;
    signed long long product = 0L;
    unsigned int index;
    unsigned char isNegative;
    printf("Enter two integers to multiply: ");
    scanf("%d %d", &firstNumber, &secondNumber);
    printf("%d * %d = ", firstNumber, secondNumber);
    isNegative = firstNumber < 0 && secondNumber > 0 || firstNumber > 0 && secondNumber < 0;
    firstNumber = abs(firstNumber);
    secondNumber = abs(secondNumber);
    for (index = 1; index <= ((firstNumber < secondNumber) ? firstNumber : secondNumber); index++)
        product += (firstNumber > secondNumber) ? firstNumber : secondNumber;
    printf("%lld\n", (isNegative) ? -product : product);
}

int abs(int number) {
    return (number < 0) ? number * -1 : number;
}

//                                                 _Output One_
/*
Enter two integers to multiply: 2147483647 2
2147483647 * 2 = 4294967294
 */

//                                                 _Output Two_
/*
Enter two integers to multiply: 2147483647 -2
2147483647 * -2 = -4294967294
 */

//                                                 _Output Three_
/*
Enter two integers to multiply: -2147483647 2
-2147483647 * 2 = -4294967294
 */

//                                                 _Output Four_
/*
Enter two integers to multiply: -2147483647 -2
-2147483647 * -2 = 4294967294
 */