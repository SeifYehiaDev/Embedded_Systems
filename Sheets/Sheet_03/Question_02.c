/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 18/08/2023
 * */

#include <stdio.h>

//                                                 _Question_
        /*Write a C function to return the maximum and minimum number in an array and their indexes.*/
//                                                 _Solution_
void findMinAndMax(const int array[], int size, int *const minNumber, int *const indexOfMin, int *const maxNumber, int *const indexOfMax) {
    *minNumber = array[0];
    *maxNumber = array[0];
    for (int index = 0; index < size; index++) {
        if (array[index] >= *maxNumber) {
            *maxNumber = array[index];
            *indexOfMax = index;
        }
        else if (array[index] <= *minNumber) {
            *minNumber = array[index];
            *indexOfMin = index;
        }
    }
}

int main() {
    int maxNum, minNum, indexOfMax, indexOfMin;
    int array[] = {-1, 2, 3, 100, 5, 5, 5, 5, 6, -1, 7, 8, 8, 9, 100};
    findMinAndMax(array, sizeof(array) / sizeof(array[0]), &minNum, &indexOfMin, &maxNum, &indexOfMax);
    printf("The maximum number in array is %d at index %d.\n", maxNum, indexOfMax);
    printf("The minimum number in array is %d at index %d.", minNum, indexOfMin);
    return 0;
}

//                                                 _Output_
/*
The maximum number in array is 100 at index 14.
The minimum number in array is -1 at index 9.
*/