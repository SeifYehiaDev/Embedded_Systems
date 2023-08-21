/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 20/08/2023
 * */

#include <stdio.h>

//                                                 _Question_
            /*Write a C function to take 2 arrays and swap them (try with 2 different sizes).*/
//                                                 _Solution_
void swapTwoArrays(int firstArray[], int firstSize, int secondArray[], int secondSize) {
    const int minSize = (firstSize < secondSize) ? firstSize : secondSize;
    for (int index = 0; index < minSize; index++)
        firstArray[index] = (firstArray[index] + secondArray[index]) - (secondArray[index] = firstArray[index]);
}

void displayArray(int array[], int size) {
    for (int index = 0; index < size; index++)
        printf("%d ", array[index]);
}

int main() {
    int firstArray[] = {10, 11, 12, 13, 14};
    int secondArray[] = {15, 16, 17, 18, 19, 20, 21, 22, 23};
    const int firstSize = sizeof(firstArray) / sizeof(firstArray[0]),
              secondSize = sizeof(secondArray) / sizeof(secondArray[0]);
    printf("First  array: ");
    displayArray(firstArray, firstSize);
    printf("\nSecond array: ");
    displayArray(secondArray, secondSize);
    swapTwoArrays(firstArray, firstSize, secondArray, secondSize);
    printf("\nAfter swap two Arrays:");
    printf("\nFirst  array: ");
    displayArray(firstArray, firstSize);
    printf("\nSecond array: ");
    displayArray(secondArray, secondSize);
    return 0;
}

//                                                 _Output_
/*
First  array: 10 11 12 13 14
Second array: 15 16 17 18 19 20 21 22 23
After swap two Arrays:
First  array: 15 16 17 18 19
Second array: 10 11 12 13 14 20 21 22 23 
 */