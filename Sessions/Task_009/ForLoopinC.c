/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 18/08/2023
 * */

#include <stdio.h>

//                                                 _Question_
/*Write a C program print the English representation of it in lowercase. That is "one" for 1, "two" for 2, and so on.*/
//                                                 _Solution_
int main() {
    const char numbers[11][10] = {"even", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine","odd"};
    int a, b;
    scanf("%d\n%d", &a, &b);
    for (int number = a; number <= b; number++)
        printf("%s\n", (number <= 9) ? numbers[number] : (number & 1) ? numbers[10] : numbers[0]);
    return 0;
}

//                                                 _Output_
/*
8
11
eight
nine
even
odd
 */