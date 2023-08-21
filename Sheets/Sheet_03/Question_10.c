/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 20/08/2023
 * */

#include <stdio.h>
#include <stdlib.h>

//                                                 _Question_
/*Write c function to take 2 arrays and return an array by merging them like this arr1={1,2,3,4,5},
arr2={11,12,13,14,15} return arr3={1,11,2,12,3,13,4,14,5,15}.*/
//                                                 _Solution_

// This function work with same size of arrays only.
int *mergeArrays_V1(const int firstArray[], const int firstSize, const int secondArray[], const int secondSize) {
    int *MergedArray = (int *) malloc(sizeof(int) * (firstSize + secondSize));
    for (int x = 0, y = 0; x < firstSize + secondSize; x++)
        MergedArray[x] = (x & 1) ? secondArray[y++] : firstArray[y];
    return MergedArray;
}

// This function work with different and same size of arrays.
int *mergeArrays_V2(const int firstArray[], const int firstSize, const int secondArray[], const int secondSize) {
    int minSize = (firstSize < secondSize) ? firstSize : secondSize;
    int *MergedArray = (int *) malloc(sizeof(int) * (firstSize + secondSize));
    for (int x = 0, y = 0; x < minSize; x++, y++) {
        MergedArray[y] = firstArray[x];
        MergedArray[++y] = secondArray[x];
    }
    if (firstSize != secondSize)
        for (int x = minSize * 2; x < firstSize + secondSize; x++)
            MergedArray[x] = (firstSize > secondSize) ? firstArray[x - minSize] : secondArray[x - minSize];
    return MergedArray;
}

void displayArray(const int array[], const int size) {
    for (int index = 0; index < size; index++)
        printf("%d ", array[index]);
}

int main() {
    int firstArray[] = {10, 11, 12, 13, 14};
    int secondArray[] = {15, 16, 17, 18, 19,};
    int thirdArray[] = {10, 11, 12, 13, 14};
    int forthArray[] = {15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};
    int *mergedArray_V1 = mergeArrays_V1(firstArray, sizeof(firstArray) / sizeof(firstArray[0]), secondArray, sizeof(secondArray) / sizeof(secondArray[0]));
    int *mergedArray_V2 = mergeArrays_V2(thirdArray, sizeof(thirdArray) / sizeof(thirdArray[0]), forthArray, sizeof(forthArray) / sizeof(forthArray[0]));
    printf("First  Array: ");
    displayArray(firstArray, sizeof(firstArray) / sizeof(firstArray[0]));
    printf("\nSecond Array: ");
    displayArray(secondArray, sizeof(secondArray) / sizeof(secondArray[0]));
    printf("\nMerged Array: ");
    displayArray(mergedArray_V1, sizeof(firstArray) / sizeof(firstArray[0]) + sizeof(secondArray) / sizeof(secondArray[0]));
    free(mergedArray_V1);
    printf("\n--------------------------------------------------------------\n");
    printf("Third  Array: ");
    displayArray(thirdArray, sizeof(thirdArray) / sizeof(thirdArray[0]));
    printf("\nForth  Array: ");
    displayArray(forthArray, sizeof(forthArray) / sizeof(forthArray[0]));
    printf("\nMerged Array: ");
    displayArray(mergedArray_V2, sizeof(thirdArray) / sizeof(thirdArray[0]) + sizeof(forthArray) / sizeof(forthArray[0]));
    free(mergedArray_V2);
    return 0;
}

//                                                 _Output_
/*
First  Array: 10 11 12 13 14
Second Array: 15 16 17 18 19
Merged Array: 10 15 11 16 12 17 13 18 14 19
--------------------------------------------------------------
Third  Array: 10 11 12 13 14
Forth  Array: 15 16 17 18 19 20 21 22 23 24 25
Merged Array: 10 15 11 16 12 17 13 18 14 19 20 21 22 23 24 25
 */