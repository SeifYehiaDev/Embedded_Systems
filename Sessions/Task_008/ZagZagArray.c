/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 21/08/2023
 * */

#include <stdio.h>

//                                                 _Question_
/*Write a C function to swap first index of fistArray with last index of second array and last index of firstArray with first index of second array.*/
//                                                 _Solution_
void swapTwoArrays(int firstArray[], int secondArray[], const int size) {
    for (int index = 0; index < size; index++)
        firstArray[index] = (firstArray[index] + secondArray[size - index - 1]) - (secondArray[size - index - 1] = firstArray[index]);
}

void displayArray(const int array[], const int size) {
    for (int index = 0; index < size; index++)
        printf("%d ", array[index]);
}

int main() {
    int firstMaxNumber, secondMaxNumber;
    int firstArray[] = {1, 2, 3, 4, 5};
    int secondArray[] = {10, 20, 30, 40, 50};
    printf("First Array: ");
    displayArray(firstArray, sizeof(firstArray) / sizeof(firstArray[0]));
    printf("\nSecond Array: ");
    displayArray(secondArray, sizeof(secondArray) / sizeof(secondArray[0]));
    printf("\nAfter swapping:\n");
    swapTwoArrays(firstArray, secondArray, sizeof(firstArray) / sizeof(firstArray[0]));
    printf("First Array: ");
    displayArray(firstArray, sizeof(firstArray) / sizeof(firstArray[0]));
    printf("\nSecond Array: ");
    displayArray(secondArray, sizeof(secondArray) / sizeof(secondArray[0]));
    return 0;
}

//                                                 _Output_
/*
First Array: 1 2 3 4 5
Second Array: 10 20 30 40 50
After swapping:
First Array: 50 40 30 20 10
Second Array: 5 4 3 2 1
 */