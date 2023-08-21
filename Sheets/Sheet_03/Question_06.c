/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 19/08/2023
 * */

#include <stdio.h>

//                                                 _Question_
                    /*Write a C function to take an array and reverse its elements.*/
//                                                 _Solution_
void reverseArray_V1(int array[], int size) {
    int temp;
    for (int x = 0, y = size - 1; y >= x; x++, y--) {
        temp = array[x];
        array[x] = array[y];
        array[y] = temp;
    }
}

void reverseArray_V2(int array[], int size) {
    for (int x = 0; x <= size / 2; x++)
        array[x] = (array[x] + array[size - x - 1]) - (array[size - x - 1] = array[x]);
}

void displayArray(const int array[], int size) {
    for (int index = 0; index < size; index++)
        printf("%d ", array[index]);
}

int main() {
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    printf("Original array: ");
    displayArray(array, sizeof(array) / sizeof(array[0]));
    reverseArray_V1(array, sizeof(array) / sizeof(array[0])); // Reverse array using first function.
    printf("\nReversed array: ");
    displayArray(array, sizeof(array) / sizeof(array[0]));
    reverseArray_V2(array, sizeof(array) / sizeof(array[0])); // Reverse array using second function.
    printf("\nOriginal array: ");
    displayArray(array, sizeof(array) / sizeof(array[0]));
    return 0;
}

//                                                 _Output_
/*
Original array: 1 2 3 4 5 6 7 8 9 10 11 12
Reversed array: 12 11 10 9 8 7 6 5 4 3 2 1
Original array: 1 2 3 4 5 7 6 8 9 10 11 12
 */