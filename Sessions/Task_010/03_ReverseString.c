/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 01/09/2023
 * */

#include <stdio.h>
//                                                 _Question_
                                /*Write a C function to reverse string.*/
//                                                 _Solution_
int stringLength(const char arrayOfString[]) {
    int index;
    for (index = 0; arrayOfString[index]; index++);
    return index;
}

void reverseString(char string[]) {
    char temp;
    int length = stringLength(string);
    for (int index = 0; index < length / 2; index++) {
        temp = string[index];
        string[index] = string[length - index - 1];
        string[length - index - 1] = temp;
    }
}

int main() {
    char fullName[] = "Seif Yehia";
    printf("The original string is \"%s\".\n", fullName);
    reverseString(fullName);
    printf("The first reverse string is \"%s\".\n", fullName);
    reverseString(fullName); // return to original name
    printf("The second reverse string is \"%s\".", fullName);
    return 0;
}

//                                                 _Output_
/*
The original string is "Seif Yehia".      
The first reverse string is "aiheY fieS". 
The second reverse string is "Seif Yehia".
 */