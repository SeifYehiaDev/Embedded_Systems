/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 14/07/2023
 * */

#include <stdio.h>

//                                                 _Question_
                    /*Write c code to sum numbers from 1 to 100 (without loop).*/
//                                                 _Solution_
int sumNumber_V1(int firstNumber, int lastNumber) {
    int sum = 0, index;
    for (index = firstNumber; index <= lastNumber; sum += index, index++);
    return sum;
}

int sumNumber_V2(int firstNumber, int lastNumber) {
    return (lastNumber - firstNumber + 1) * (firstNumber + lastNumber) / 2;
}

void main() {
    int firstNumber, lastNumber;
    printf("Enter the starting and ending numbers for the summation: ");
    scanf("%d", &firstNumber);
    scanf("%d", &lastNumber);
    if (firstNumber > lastNumber) firstNumber = (firstNumber + lastNumber) - (lastNumber = firstNumber); // swap numbers
    printf("The sum of numbers from %d to %d (using loop) is %d.\n", firstNumber, lastNumber,
           sumNumber_V1(firstNumber, lastNumber));
    printf("The sum of numbers from %d to %d (without loop) is %d.", firstNumber, lastNumber,
           sumNumber_V2(firstNumber, lastNumber));
}


//                                                 _Output_
/*
Enter the starting and ending numbers for the summation: 100 1
The sum of numbers from 1 to 100 (using loop) is 5050.
The sum of numbers from 1 to 100 (without loop) is 5050.
 */