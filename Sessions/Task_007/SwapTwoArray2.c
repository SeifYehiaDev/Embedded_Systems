/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 08/08/2023
 * */

#include <stdio.h>

//                                                 _Question_
                                  /*Swap two arrays with different size.*/
//                                                 _Solution_
void printArray(int array[], int size) {
    for (int x = 0; x < size; x++)
        printf("%d ", array[x]);
}

void swapArray(int firstArray[], int firstSize, int secondArray[], int secondSize) {
    int minSize = (firstSize < secondSize) ? firstSize : secondSize;
    for (int index = 0; index < minSize; index++)
        firstArray[index] = (firstArray[index] + secondArray[index]) - (secondArray[index] = firstArray[index]);
}

int main() {
    int firstArray[] = {1, 2, 3, 4, 5};
    int secondArray[] = {6, 7, 8, 9, 10, 11, 12, 13, 15, 16, 17, 18, 19, 20};
    printf("The first array is:\n");
    printArray(firstArray, sizeof(firstArray) / sizeof(firstArray[0]));
    printf("\nThe second array is:\n");
    printArray(secondArray, sizeof(secondArray) / sizeof(secondArray[0]));
    swapArray(firstArray, sizeof(firstArray) / sizeof(firstArray[0]),
              secondArray, sizeof(secondArray) / sizeof(secondArray[0]));
    printf("\nAfter swapping:\n");
    printf("The first array is:\n");
    printArray(firstArray, sizeof(firstArray) / sizeof(firstArray[0]));
    printf("\nThe second array is:\n");
    printArray(secondArray, sizeof(secondArray) / sizeof(secondArray[0]));
    return 0;
}

//                                                 _Output_
/*
The first array is:
1 2 3 4 5
The second array is:
6 7 8 9 10 11 12 13 15 16 17 18 19 20
After swapping:
The first array is:
6 7 8 9 10
The second array is:
1 2 3 4 5 11 12 13 15 16 17 18 19 20
 */