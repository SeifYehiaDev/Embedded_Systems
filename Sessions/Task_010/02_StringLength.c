/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 01/09/2023
 * */

#include <stdio.h>
//                                                 _Question_
                                /*Write a C function to return length of string.*/
//                                                 _Solution_
int stringLength(const char arrayOfString[]) {
    int index;
    for (index = 0; arrayOfString[index]; index++);
    return index;
}

int main() {
    char name[100] = "Seif Yehia";
    printf("Length of \"%s\" is %d.", name, stringLength(name));
    return 0;
}

//                                                 _Output_
/*
Length of "Seif Yehia" is 10.
 */