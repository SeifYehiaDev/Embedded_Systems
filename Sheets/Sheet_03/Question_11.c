/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 20/08/2023
 * */

#include <stdio.h>
#include <stdlib.h>

//                                                    _Question_
/*Write a c function that removes the repeated number of an input sorted array and return a new array without the repeated numbers.*/
//                                                 _Solution_
int *removeDuplicates(const int array[], int size, int *newSize) {
    int newSizeIndex = 0;
    if (size == 0) {
        *newSize = 0;
        return NULL;
    }
    int *arrayWithoutDuplicates = (int *) malloc(sizeof(array[0]) * size);
    for (int x = 0; x < size; x++)
        if (array[x] != array[x + 1]) arrayWithoutDuplicates[newSizeIndex++] = array[x];
    *newSize = newSizeIndex ; // return a size of arrayWithoutDuplicates.
    return arrayWithoutDuplicates;
}

void displayArray(const int array[], const int size) {
    for (int index = 0; index < size; index++)
        printf("%d ", array[index]);
}

int main() {
    int numbers[] = {1, 1, 2, 2, 2, 3, 4, 4, 5, 6, 6};
    int newSize = 0;
    int *arrayWithoutDuplicates = removeDuplicates(numbers, sizeof(numbers) / sizeof(numbers[0]), &newSize);
    printf("Original array: ");
    displayArray(numbers,sizeof(numbers) / sizeof(numbers[0]));
    printf("\nArray without duplicates: ");
    displayArray(arrayWithoutDuplicates, newSize);
    return 0;
}

//                                                 _Output_
/*
Original array: 1 1 2 2 2 3 4 4 5 6 6
Array without duplicates: 1 2 3 4 5 6
 */