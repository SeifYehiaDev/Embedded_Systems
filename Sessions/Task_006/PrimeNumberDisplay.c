/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 27/07/2023
 * */

#include <stdio.h>

//                                                 _Question_
                                        /*Displaying Prime Numbers.*/
//                                                 _Solution_
int isPrimeNumber(int number) {
    int isPrime = number >= 2;
    for (int divisor = 2; divisor <= (number / 2) && isPrime; divisor++)
        if (number % divisor == 0) isPrime = 0;
    return isPrime;
}

void generatePrime_V1(int numberOfPrime) {
    int count = 0, number = 2;
    while (count < numberOfPrime) {
        if (isPrimeNumber(number)) printf("%-3d%s", number, (++count % 10 != 0) ? " " : "\n");
        number++;
    }
}

void generatePrime_V2(int numberOfPrime) {
    int count = 0;
    for (int number = 2; numberOfPrime; number++)
        if (isPrimeNumber(number)) {
            printf("%-3d%s", number, (++count % 10 != 0) ? " " : "\n");
            numberOfPrime--;
        }
}

int main() {
    int number;
    printf("Enter the count of the prime numbers to display: ");
    scanf("%d", &number);
    printf(" \nThe first %d prime numbers are: \n", number);
    generatePrime_V1(number);
    printf("===========================================================================\n");
    printf("The first %d prime numbers are: \n", number);
    generatePrime_V2(number);
    return 0;
}

//                                                 _Output_
/*
Enter the count of the prime numbers to display: 100

The first 100 prime numbers are:       
2   3   5   7   11  13  17  19  23  29 
31  37  41  43  47  53  59  61  67  71 
73  79  83  89  97  101 103 107 109 113
127 131 137 139 149 151 157 163 167 173
179 181 191 193 197 199 211 223 227 229
233 239 241 251 257 263 269 271 277 281
283 293 307 311 313 317 331 337 347 349
353 359 367 373 379 383 389 397 401 409
419 421 431 433 439 443 449 457 461 463
467 479 487 491 499 503 509 521 523 541
===========================================================================
The first 100 prime numbers are:
2   3   5   7   11  13  17  19  23  29
31  37  41  43  47  53  59  61  67  71
73  79  83  89  97  101 103 107 109 113
127 131 137 139 149 151 157 163 167 173
179 181 191 193 197 199 211 223 227 229
233 239 241 251 257 263 269 271 277 281
283 293 307 311 313 317 331 337 347 349
353 359 367 373 379 383 389 397 401 409
419 421 431 433 439 443 449 457 461 463
467 479 487 491 499 503 509 521 523 541
 */