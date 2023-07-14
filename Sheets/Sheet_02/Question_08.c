/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 14/07/2023
 * */

#include <stdio.h>

//                                                 _Question_
/*Write a full C program to take 4 choose from user:
1-Set bit.
2-Clear bit
3-Toggle bit.
4-Read bit.
then take number, and bit number. print the number after set, clear, or toggle if 1,2 or 3 is selected.
print the bit value if 4 is selected.*/
//                                                 _Solution_
void main() {
    signed int choice, bitNumber, number;
    do {
        printf("1- Set bit.\n2- Clear bit.\n3- Toggle bit.\n4- Read bit.\n5- Exist.\n");
        printf(" Enter your choice: ");
        scanf("%d", &choice);
        if (choice < 1 || choice > 5) {
            printf("!!!Error: Invalid choice, please try again!!!\n");
            printf("____________________________________________________________________\n");
            continue;
        }
        if (choice == 5) break;
        printf(" Enter a number: ");
        scanf("%d", &number);
        printf(" Enter a bit number between (0-31): ");
        scanf("%d", &bitNumber);
        if (bitNumber < 0 || bitNumber > 31) {
            printf("!!!Error: Invalid bit number, please try again!!!\n");
            printf("____________________________________________________________________\n");
            continue;
        }
        printf("The result is %d\n",
               (choice == 1) ? number | (1 << bitNumber) : (choice == 2) ? number & (~(1 << bitNumber)) :
               (choice == 3) ? number ^ (1 << bitNumber) : (number >> bitNumber) & 1);
        printf("____________________________________________________________________\n");
    } while (1);
    printf("The program ended.");
}


//                                                 _Output_
/*
1- Set bit.
2- Clear bit.
3- Toggle bit.
4- Read bit.
5- Exist.
 Enter your choice: 1
 Enter a number: 5
 Enter a bit number between (0-31): 3
The result is 13
____________________________________________________________________
1- Set bit.
2- Clear bit.
3- Toggle bit.
4- Read bit.
5- Exist.
 Enter your choice: 2
 Enter a number: 13
 Enter a bit number between (0-31): 3
The result is 5
____________________________________________________________________
1- Set bit.
2- Clear bit.
3- Toggle bit.
4- Read bit.
5- Exist.
 Enter your choice: 3
 Enter a number: 5
 Enter a bit number between (0-31): 2
The result is 1
____________________________________________________________________
1- Set bit.
2- Clear bit.
3- Toggle bit.
4- Read bit.
5- Exist.
 Enter your choice: 4
 Enter a number: 5
 Enter a bit number between (0-31): 2
The result is 1
____________________________________________________________________
1- Set bit.
2- Clear bit.
3- Toggle bit.
4- Read bit.
5- Exist.
 Enter your choice: 1
 Enter a number: 20
 Enter a bit number between (0-31): 32
!!!Error: Invalid bit number, please try again!!!
____________________________________________________________________
1- Set bit.
2- Clear bit.
3- Toggle bit.
4- Read bit.
5- Exist.
 Enter your choice: 6
!!!Error: Invalid choice, please try again!!!
____________________________________________________________________
1- Set bit.
2- Clear bit.
3- Toggle bit.
4- Read bit.
5- Exist.
 Enter your choice: 5
The program ended.
 */