/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 27/05/2023
 * */

#include <stdio.h>
#include <limits.h>

//                                                 _Question_
                /*Write a prgoram that takes three integers and print the maximum number*/
//                                                 _Solution_
void main() {
    int number, maxNumber = INT_MIN, index;
    for (index = 0; index < 3; index++) {
        printf("Enter the number %d: ", index + 1);
        scanf("%d", &number);
        if (number > maxNumber)
            maxNumber = number;
    }
    printf("The maximum number is %d", maxNumber);
}

//                                                 _Output_
/*
Enter the number 1: 1
Enter the number 2: 2
Enter the number 3: 3
The maximum number is 3
 */
