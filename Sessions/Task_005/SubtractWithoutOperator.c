/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 20/07/2023
 * */

#include <stdio.h>

//                                                 _Question_
                                        /*Subtract without use ' - '.*/
//                                                 _Solution_
int subtract(int x, int y) {
    return x + (~y + 1);
}

int main() {
    int firstNumber, secondNumber;
    printf("Enter the first number = ");
    scanf("%d", &firstNumber);
    printf("Enter the second number = ");
    scanf("%d", &secondNumber);
    printf("%d - %d = %d.", firstNumber, secondNumber, subtract(firstNumber, secondNumber));
    return 0;
}

//                                                 _Output_
/*
Enter the first number = 100
Enter the second number = 30
100 - 30 = 70.
 */