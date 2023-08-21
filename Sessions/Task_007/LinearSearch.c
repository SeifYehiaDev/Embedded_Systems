/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 08/08/2023
 * */

#include <stdio.h>

//                                                 _Question_
                                        /*Search number in the array.*/
//                                                 _Solution_

void printArray(int array[], int size) {
    for (int x = 0; x < size; x++)
        printf("%d ", array[x]);
}

int linearSearch(const int array[], int size, int number) {
    for (int index = 0; index < size; index++)
        if (array[index] == number)
            return index;
    return -1;
}

int main() {
    int numbers[] = {-1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 14, 15, 16, 17, 18, 19, 20};
    printf("Numbers in array are :\n");
    printArray(numbers, sizeof(numbers) / sizeof(numbers[0]));
    printf("\n100 in the array? %d\n", linearSearch(numbers, sizeof(numbers) / sizeof(numbers[0]), 100));
    printf("0 in the array? %d", linearSearch(numbers, sizeof(numbers) / sizeof(numbers[0]), 0));
    return 0;
}

//                                                 _Output_
/*
Numbers in array are :
-1 0 1 2 3 4 5 6 7 8 9 10 11 12 14 15 16 17 18 19 20
100 in the array? -1
0 in the array? 1
 */