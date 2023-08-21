/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 08/08/2023
 * */

#include <stdio.h>

//                                                 _Question_
                                    /*Remove prime number from array.*/
//                                                 _Solution_

void printArray(int array[], int size) {
    for (int x = 0; x < size; x++)
        printf("%d ", array[x]);
}

int isPrime(int number) {
    int isPrimeNumber = number >= 2;
    for (int divisor = 2; divisor <= number / 2 && isPrimeNumber; divisor++)
        if (number % divisor == 0) isPrimeNumber = 0;
    return isPrimeNumber;
}

void removePrimeInArray(int array[], int size) {
    for (int index = 0; index < size; index++)
        if (isPrime(array[index])) array[index] = 0;
}

int main() {
    int numbers[] = {-1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 14, 15, 16, 17, 18, 19, 20};
    printf("Numbers in array are :\n");
    printArray(numbers, sizeof(numbers) / sizeof(numbers[0]));
    printf("\nAfter remove prime number from array are:\n");
    removePrimeInArray(numbers, sizeof(numbers) / sizeof(numbers[0]));
    printArray(numbers, sizeof(numbers) / sizeof(numbers[0]));
    return 0;
}

//                                                 _Output_
/*
Numbers in array are :
-1 0 1 2 3 4 5 6 7 8 9 10 11 12 14 15 16 17 18 19 20
After remove prime number from array are:
-1 0 1 0 0 4 0 6 0 8 9 10 0 12 14 15 16 0 18 0 20
 */