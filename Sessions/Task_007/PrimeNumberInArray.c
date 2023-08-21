/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 08/08/2023
 * */

#include <stdio.h>

//                                                 _Question_
                    /*Print prime numbers in array and return the number of prime number.*/
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

int primeArray(int array[], int size) {
    int count = 0;
    for (int index = 0; index < size; index++)
        if (isPrime(array[index])) {
            printf("%d ", array[index]);
            count++;
        }
    return count;
}

int main() {
    int numberOfPrime, numbers[] = {-1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 14, 15, 16, 17, 18, 19, 20};
    printf("Numbers are :\n");
    printArray(numbers, sizeof(numbers) / sizeof(numbers[0]));
    printf("\nPrime numbers in array:\n");
    numberOfPrime = primeArray(numbers, sizeof(numbers) / sizeof(numbers[0]));
    printf("\nNumber of prime number are %d", numberOfPrime);
    return 0;
}

//                                                 _Output_
/*
Numbers are :
-1 0 1 2 3 4 5 6 7 8 9 10 11 12 14 15 16 17 18 19 20
Prime numbers in array:
2 3 5 7 11 17 19
Number of prime number are 7
 */