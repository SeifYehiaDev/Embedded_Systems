/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 18/08/2023
 * */

#include <stdio.h>
#include <stdlib.h>

//                                                 _Question_
/*Write a C function that take two numbers and return array contain all numbers between the two given numbers.
 numbers 2,6->return array contain [3,4,5]).*/
//                                                 _Solution_
int *numbers(const int start, const int end, int *const size) {
    if (start >= end) {
        *size = 0;
        return NULL;
    }
    *size = end - start - 1;
    int *array = (int *) malloc(*size * sizeof(start)); // return void pointer and cast this pointer to integer.
    for (int index = 0; index < *size; index++)
        array[index] = start + index + 1;
    return array;
}

void displayArray(const int array[], const int size) {
    for (int index = 0; index < size; index++)
        printf("%d ", array[index]);
}

int main() {
    int start = 2, end = 6, size;
    int *array = numbers(start, end, &size);
    if (array == NULL) printf("Invalid input.");
    else {
        printf("Numbers between %d and %d: ", start, end);
        displayArray(array, size);
    }
    free(array); // remove array from dynamic allocation (heap memory) to prevent (memory leak & Fragmentation).
    return 0;
}

//                                                 _Output_
/*
Numbers between 2 and 6: 3 4 5
 */