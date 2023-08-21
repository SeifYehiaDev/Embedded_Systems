/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 21/08/2023
 * */

#include <stdio.h>

//                                                 _Question_
/*Write a C function to take 10 mono numbers (from 0to 9) from user and return the most repeated one,
if user enter number bigger than 9 return -1(don’t use arrays).*/
//                                                 _Solution_
int findMostRepeated() {
    int frequency[10] = {0}, number, maxFrequency = 1, mostRepeatedNumber = -2;
    for (int index = 0; index < 10; index++) {
        printf("Enter number %s%d: ", (index + 1 <= 9) ? "0" : "", index + 1);
        scanf("%d", &number);
        if (number < 0 || number > 9)
            return -1;
        frequency[number]++;
    }
    for (int index = 0; index < 10; index++)
        if (frequency[index] > maxFrequency) {
            maxFrequency = frequency[index];
            mostRepeatedNumber = index;
        }
    return mostRepeatedNumber;
}

int main() {
    int result = findMostRepeated();
    (result == -1) ? printf("Invalid input. Entered number is bigger than 9.") :
    (result == -2) ? printf("No number Repeated.") : printf("The most repeated number is: %d.", result);
    return 0;
}

//                                                 _Output One_
/*
Enter number 01: 1
Enter number 02: 2
Enter number 03: 2
Enter number 04: 3
Enter number 05: 4
Enter number 06: 5
Enter number 07: 6
Enter number 08: 7
Enter number 09: 8
Enter number 10: 9
The most repeated number is: 2.
 */

//                                                 _Output Two_
/*
Enter number 01: 0
Enter number 02: 1
Enter number 03: 2
Enter number 04: 3
Enter number 05: 4
Enter number 06: 5
Enter number 07: 6
Enter number 08: 7
Enter number 09: 8
Enter number 10: 9
No number Repeated.
 */

//                                                 _Output Three_
/*
Enter number 01: 1
Enter number 02: 2
Enter number 03: 3
Enter number 04: 6
Enter number 05: 6
Enter number 06: 10
Invalid input. Entered number is bigger than 9.
 */