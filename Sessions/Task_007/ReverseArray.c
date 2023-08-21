/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 08/08/2023
 * */

#include <stdio.h>

//                                                 _Question_
                                    /*Reverse array without temp array.*/
//                                                 _Solution_
void printArray(int array[], int size) {
    for (int x = 0; x < size; x++)
        printf("%d ", array[x]);
}

void reverseArray(int array[], int size) {
    for (int index = 0; index < size / 2; index++)
        array[index] = (array[index] + array[size - 1 - index]) - (array[size - 1 - index] = array[index]);
}

int main() {
    int array[] = {1, 2, 3, 4, 5, 6, 7};
    printf("The original array is:\n");
    printArray(array, sizeof(array) / sizeof(array[0]));
    reverseArray(array, sizeof(array) / sizeof(array[0]));
    printf("\nArray after reverse is:\n");
    printArray(array, sizeof(array) / sizeof(array[0]));
    return 0;
}

//                                                 _Output_
/*
The original array is:
1 2 3 4 5 6 7
Array after reverse is:
7 6 5 4 3 2 1
 */