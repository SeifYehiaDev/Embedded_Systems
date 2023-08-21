/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 21/08/2023
 * */

#include <stdio.h>
#include <limits.h>

//                                                 _Question_
                /*Write a C function to take an array and return two maximum numbers.*/
//                                                 _Solution_
void twoMaxNumber(const int array[], const int size, int *const firstMaxNumber, int *const secondMaxNumber) {
    *firstMaxNumber = INT_MIN;
    *secondMaxNumber = INT_MIN;
    for (int index = 0; index < size; index++)
        if (array[index] > *secondMaxNumber && array[index] != *firstMaxNumber) {
            if (array[index] > *firstMaxNumber) {
                *secondMaxNumber = *firstMaxNumber;
                *firstMaxNumber = array[index];
            } else
                *secondMaxNumber = array[index];
        }
}

void displayArray(const int array[], const int size) {
    for (int index = 0; index < size; index++)
        printf("%d ", array[index]);
}

int main() {
    int firstMaxNumber, secondMaxNumber;
    int firstArray[] = {10, 2, 3, 4, 10, 15, 5, 6, 7, 8, 9, 15, 0, -1, -2};
    int secondArray[] = {-1, -2, -3, -4, -5, -1, -6, -7, -8, -2};
    twoMaxNumber(firstArray, sizeof(firstArray) / sizeof(firstArray[0]), &firstMaxNumber, &secondMaxNumber);
    printf("First Array: ");
    displayArray(firstArray, sizeof(firstArray) / sizeof(firstArray[0]));
    printf("\nThe first maximum number in firstArray is : %d.\n", firstMaxNumber);
    printf("The second maximum number in firstArray is : %d.", secondMaxNumber);
    printf("\n-------------------------------------------------------------------------\n");
    twoMaxNumber(secondArray, sizeof(secondArray) / sizeof(secondArray[0]), &firstMaxNumber, &secondMaxNumber);
    printf("Second Array: ");
    displayArray(secondArray, sizeof(secondArray) / sizeof(secondArray[0]));
    printf("\nThe first maximum number in secondArray is : %d.\n", firstMaxNumber);
    printf("The second maximum number in secondArray is : %d.", secondMaxNumber);
    return 0;
}

//                                                 _Output_
/*
First Array: 10 2 3 4 10 15 5 6 7 8 9 15 0 -1 -2
The first maximum number in firstArray is : 15.
The second maximum number in firstArray is : 10.
-------------------------------------------------------------------------
Second Array: -1 -2 -3 -4 -5 -1 -6 -7 -8 -2
The first maximum number in secondArray is : -1.
The second maximum number in secondArray is : -2.
 */