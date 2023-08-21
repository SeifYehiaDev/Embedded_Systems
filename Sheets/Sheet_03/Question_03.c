/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 18/08/2023
 * */

#include <stdio.h>

//                                                 _Question_
        /*Write a C function that return 0 if a given number is a power of 3 otherwise return 1.*/
//                                                 _Solution_
int isPowerOfThree(int number) {
    int isPowerThree = 1;
    for (int index = 0; index * index * index <= number; index++)
        if (index * index * index == number) isPowerThree = 0;
    return isPowerThree;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("%d %s a power of 3.", num, (isPowerOfThree(num)) ? "is not" : "is");
    return 0;
}

//                                                 _Output One_
/*
Enter a number: 216
216 is a power of 3.
 */

//                                                 _Output Two_
/*
Enter a number: 217
217 is not a power of 3.
 */