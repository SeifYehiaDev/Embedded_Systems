/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 08/08/2023
 * */

#include <stdio.h>

//                                                 _Question_
                        /*Search number in the array and return count of repeat.*/
//                                                 _Solution_

void printArray(int array[], int size) {
    for (int x = 0; x < size; x++)
        printf("%d ", array[x]);
}

int linearSearch(const int array[], int size, int number, int *repeat) {
    int isFind = -1, repeatCount = 0;
    for (int index = 0; index < size; index++)
        if (array[index] == number) {
            isFind = index;
            repeatCount++;
        }
    *repeat = repeatCount;
    return isFind;
}

int main() {
    int repeat = 0, numbers[] = {-1, 0, 1, 2, 2, 2, 2, 2, 2, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 14, 15, 16, 17, 18, 19,20};
    printf("Numbers in array are :\n");
    printArray(numbers, sizeof(numbers) / sizeof(numbers[0]));
    printf("\nThe index of element 2 is %d and repeat ",
           linearSearch(numbers, sizeof(numbers) / sizeof(numbers[0]), 2, &repeat));
    printf("%d.\n", repeat);
    printf("The index of element -2 is %d and repeat ",
           linearSearch(numbers, sizeof(numbers) / sizeof(numbers[0]), -2, &repeat));
    printf("%d.", repeat);
    return 0;
}

//                                                 _Output_
/*
Numbers in array are :
-1 0 1 2 2 2 2 2 2 2 3 4 5 6 7 8 9 10 11 12 14 15 16 17 18 19 20
The index of element 2 is 9 and repeat 7.
The index of element -2 is -1 and repeat 0.
 */