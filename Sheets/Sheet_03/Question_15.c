/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 21/08/2023
 * */

#include <stdio.h>

//                                                 _Question_
                                    /*Write a C Function that swaps two pointers.*/
//                                                 _Solution_
void swapPointers(int **ptr1, int **ptr2) {
    int *temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    int firstNumber = 5, secondNumber = 10;
    int *ptr1 = &firstNumber, *ptr2 = &secondNumber;
    printf("Before swapping:\n");
    printf("ptr1 points to %d\n", *ptr1);
    printf("ptr2 points to %d\n", *ptr2);
    swapPointers(&ptr1, &ptr2);
    printf("After swapping:\n");
    printf("ptr1 points to %d\n", *ptr1);
    printf("ptr2 points to %d\n", *ptr2);
    return 0;
}

//                                                 _Output_
/*
Before swapping:
ptr1 points to 5
ptr2 points to 10
After swapping:
ptr1 points to 10
ptr2 points to 5
 */