/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 17/08/2023
 * */

#include <stdio.h>

//                                                 _Question_
                                /*Received Array and return a new prime array.*/
//                                                 _Solution_
void printArray(int array[], int size) {
    for (int index = 0; index < size; index++)
        printf("%d ", array[index]);
}

int isPrimeNumber(int number) {
    int isPrime = number >= 2;
    for (int divisor = 2; divisor <= number / 2 && isPrime; divisor++)
        if (number % divisor == 0) isPrime = 0;
    return isPrime;
}

int primeArray(int array[], int size, int primeArray[]) {
    int x, y;
    for (x = 0, y = 0; x < size; x++)
        if (isPrimeNumber(array[x])) primeArray[y++] = array[x];
    return y;
}

int main() {
    int firstArray[] = {-1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int secondArray[100] = {0};
    int size = primeArray(firstArray, sizeof(firstArray) / sizeof(firstArray[0]), secondArray);
    printf("The original array is:\n");
    printArray(firstArray, sizeof(firstArray) / sizeof(firstArray[0]));
    printf("\nThe prime array is:\n");
    printArray(secondArray, size);
    return 0;
}

//                                                 _Output_
/*
The original array is:
-1 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15
The prime array is:
2 3 5 7 11 13
 */