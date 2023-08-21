/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 17/08/2023
 * */

#include <stdio.h>
#include <stdlib.h>

//                                                 _Question_
                                 /*Merge two arrays with different size.*/
//                                                 _Solution_
int *mergeArrays(const int firstArray[], const int firstSize, const int secondArray[], const int secondSize) {
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
    int secondArray[] = {15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};
    int *mergedArray = mergeArrays(firstArray, sizeof(firstArray) / sizeof(firstArray[0]), secondArray,sizeof(secondArray) / sizeof(secondArray[0]));
    printf("First  Array: ");
    displayArray(firstArray, sizeof(firstArray) / sizeof(firstArray[0]));
    printf("\nSecond Array: ");
    displayArray(secondArray, sizeof(secondArray) / sizeof(secondArray[0]));
    printf("\nMerged Array: ");
    displayArray(mergedArray,sizeof(firstArray) / sizeof(firstArray[0]) + sizeof(secondArray) / sizeof(secondArray[0]));
    free(mergedArray);
    return 0;
}

//                                                 _Output_
/*
First  Array: 10 11 12 13 14                                  
Second Array: 15 16 17 18 19 20 21 22 23 24 25                
Merged Array: 10 15 11 16 12 17 13 18 14 19 20 21 22 23 24 25 
 */