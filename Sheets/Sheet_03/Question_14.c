/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 21/08/2023
 * */

#include <stdio.h>

//                                                        _Question_
/*Write c function to find the most repeated number in an array of char (size of the array is very large) try to optimize your code.*/
//                                                 _Solution_
char findMostRepeated(const char array[], const int size) {
    char frequency[256] = {0}, maxFrequency = 0, mostRepeatedNumber = 0;
    for (int index = 0; index < size; index++)
        frequency[array[index] + 128]++;
    for (int index = 0; index < 256; index++)
        if (frequency[index] > maxFrequency) {
            maxFrequency = frequency[index];
            mostRepeatedNumber = (char) (index - 128);
        }
    return mostRepeatedNumber;
}

int main() {
    char array[] = {1, -65, -65, -65, -65, -65, -128, -65, 5, 2, 3, 5, 2, 5, 3, -65, 1, 5};
    printf("The most repeated number in array is: %d.", findMostRepeated(array, sizeof(array) / sizeof(array[0])));
    return 0;
}

//                                                 _Output_
/*
The most repeated number in array is: -65.
 */