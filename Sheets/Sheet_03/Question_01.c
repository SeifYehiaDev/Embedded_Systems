/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 18/08/2023
 * */

#include <stdio.h>

//                                                 _Question_
/*Write a C function to return the index of LAST occurrence of a number in a given array. Array index start from 0. If the item is not in the list return -1.*/
//                                                 _Solution_
int linearSearch_V1(const int array[], int size, int element) {
    int isFind = -1;
    for (int index = 0; index < size; index++)
        if (array[index] == element) isFind = index;
    return isFind;
}

int linearSearch_V2(const int array[], int size, int element) {
    int isFind = -1;
    for (int index = size - 1; index >= 0 && isFind == -1; index--)
        if (array[index] == element) isFind = index;
    return isFind;
}

int main() {
    int array[] = {1, 2, 3, 4, 5, 5, 5, 5, 6, 7, 8, 8, 9, 10};
    int target = 10; // int target = 12; // Test two numbers
    int isFind = linearSearch_V2(array, sizeof(array) / sizeof(array[0]), target);
    (isFind != -1) ? printf("Last occurrence of %d is at index %d.", target, isFind) : printf("%d is not found in the array.", target);
    return 0;
}

//                                                 _Output One_
/*
12 is not found in the array.
*/

//                                                 _Output Two_
/*
Last occurrence of 10 is at index 13.
*/x