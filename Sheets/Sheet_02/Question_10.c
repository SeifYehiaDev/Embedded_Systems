/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 16/07/2023
 * */

#include <stdio.h>
//                                                 _Question_
/*Write c function to count the max number of zeros between two ones in the binary representation of a number
(296384-> {1001000010111000000} return 4).*/
//                                                 _Solution_
int countMaxZerosBetweenOnes(unsigned int number) {
    int maxZeros = 0, zerosCount = 0, foundOne = 0;
    while (number) {
        if (number & 1) {
            if (foundOne) {
                if (zerosCount > maxZeros)
                    maxZeros = zerosCount;
                zerosCount = 0;
            } else
                foundOne = 1;
        } else if (foundOne)
            zerosCount++;
        number >>= 1;
    }

    return maxZeros;
}

int main() {
    unsigned int number ;
    printf("Enter a number to find maximum zero's between two ones: ");
    scanf("%u",&number);
    printf("Max zeros between ones: %d\n", countMaxZerosBetweenOnes(number));
}


//                                                 _Output_
/*
Enter a number to find maximum zero's between two ones: 296384
Max zeros between ones: 4
 */