/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 19/08/2023
 * */

#include <stdio.h>

//                                                 _Question_
                /*Write c function to find the most repeated number in an array of integers.*/
//                                                 _Solution_
int findMostRepeatedNumber(const int array[], int size) {
    int mostRepeatedNum = 0, maxCount = 0, count = 0;
    for (int x = 0; x < size; count = 0, x++) {
        for (int y = x + 1; y < size; y++)
            if (array[x] == array[y]) count++;
        if (count > maxCount) {
            maxCount = count;
            mostRepeatedNum = array[x];
        }
    }
    return mostRepeatedNum;
}

int main() {
    int numbers[] = {4, 2, 5, 2, 8, 2, 9, 4, 5, 5, 5, 5, 5, 5, 5};
    printf("The most repeated number is: %d.", findMostRepeatedNumber(numbers, sizeof(numbers) / sizeof(numbers[0])));
    return 0;
}

//                                                 _Output_
/*
The most repeated number is: 5.
 */