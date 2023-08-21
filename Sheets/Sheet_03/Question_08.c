/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 20/08/2023
 * */

#include <stdio.h>

//                                                 _Question_
/*Write a C function that return the count of the longest consecutive occurrence of a given number in an array.
 Array= {1,2,2,3,3,3,3,4,4,4,4,3,3,3} and searching for 3 -> result = 4.*/
//                                                 _Solution_
int longestConsecutiveOccurrence(const int array[], int size, int element) {
    int maxCount, count = 0;
    for (int index = 0; index < size; index++) {
        if (array[index] == element) {
            count++;
            if (count > maxCount) maxCount = count;
        } else count = 0;
    }
    return maxCount;
}

int main() {
    int array[] = {1, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4, 3, 3, 3};
    printf("The count of the longest consecutive occurrence of %d in an array is: %d times.", 3,
           longestConsecutiveOccurrence(array, sizeof(array) / sizeof(array[0]), 3));
    return 0;
}

//                                                 _Output_
/*
The count of the longest consecutive occurrence of 3 in an array is: 4 times.
 */