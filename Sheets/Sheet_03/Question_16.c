/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 21/08/2023
 * */

#include <stdio.h>

//                                                 _Question_
/*Write a C function to get the nth term of Fibonacci series, and use it to print the first 20 element.*/
//                                                 _Solution_
void displayArray(int array[], int size) {
    for (int index = 0; index < size; index++)
        printf("%d ", array[index]);
}

void fibonacci_V1(int nth) {
    int array[nth];
    for (int index = 0; index < nth; index++)
        array[index] = (index < 2) ? index : array[index - 1] + array[index - 2];
    displayArray(array, nth);
}

int fibonacci_V2(int nth) {
    int x = 0, y = 1, number = 1;
    for (int index = 3; index <= nth; index++) {
        x = y;
        y = number;
        number = x + y;
    }
    return (nth <= 1) ? nth : number;
}

int main() {
    int numTerms = 20;
    printf("Element %d in fibonacci series is %d.\n", numTerms, fibonacci_V2(numTerms-1));
    printf("Fibonacci series - first %d terms:\n", numTerms);
    fibonacci_V1(numTerms);
    return 0;
}

//                                                 _Output_
/*
Element 20 in fibonacci series is 4181.
Fibonacci series - first 20 terms:
0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 1597 2584 4181
 */