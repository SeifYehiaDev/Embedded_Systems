/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 01/09/2023
 * */

#include <stdio.h>
//                                                 _Question_
                        /*Write a C function to print string without knowing size.*/
//                                                 _Solution_
void displayString(const char arrayOfString[]) {
    for (int index = 0; arrayOfString[index]; index++)
        printf("%c", arrayOfString[index]);
}

int main() {
    char name[] = {'S', 'e', 'i', 'f', ' ', 'Y', 'e', 'h', 'i', 'a', '\0'};
    displayString(name);
    return 0;
}

//                                                 _Output_
/*
Seif Yehia
 */