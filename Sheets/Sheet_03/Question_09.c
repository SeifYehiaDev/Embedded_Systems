/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 20/08/2023
 * */

#include <stdio.h>

//                                                 _Question_
/*Write a C function that return the count of the longest consecutive occurrence of any number ,and return the number.
 Array={1,2,2,3,3,3,3,4,4,4,4,4,3,3,3} result -> 5 ,number -> 4.*/
//                                                 _Solution_
void findLongestConsecutive(const int array[], const int size, int *maxNumber, int *maxCount) {
    int count = 1;
    *maxCount = 0;
    for (int index = 1; index < size; index++) {
        if (array[index] == array[index - 1]) {
            count++;
            if (count > *maxCount) {
                *maxCount = count;
                *maxNumber = array[index];
            }
        } else
            count = 1;
    }
}

int main() {
    int maxNumber, maxCount;
    int array[] = {1, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4, 4, 3, 3, 3};
    findLongestConsecutive(array, sizeof(array) / sizeof(array[0]), &maxNumber, &maxCount);
    printf("The longest consecutive occurrence is %d times of the number %d.", maxCount, maxNumber);
    return 0;
}

//                                                 _Output_
/*
The count of the longest consecutive occurrence of 3 in an array is: 4.
 */