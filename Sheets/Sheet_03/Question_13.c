/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 21/08/2023
 * */

#include <stdio.h>

//                                                    _Question_
/*Write c function to take an array and return the biggest difference between 2 numbers in the array
(the smaller number must come first in the array) {10,1,5,3,6,8,7,2}->return 7 difference between 1,8.*/
//                                                 _Solution_
int maxDifference(const int array[], const int size) {
    int maxDiff = 0;
    for (int x = 0; x < size; x++)
        for (int y = x + 1; y < size; y++)
            if (array[x] < array[y] && array[y] - array[x] > maxDiff)
                maxDiff = array[y] - array[x];
    return maxDiff;
}

int main() {
    int array[] = {10, 1, 5, 3, 6, 8, 7, 2};
    printf("The biggest difference between two numbers is: %d.",
           maxDifference(array, sizeof(array) / sizeof(array[0])));
    return 0;
}

//                                                 _Output_
/*
The biggest difference between two numbers is: 7.
 */