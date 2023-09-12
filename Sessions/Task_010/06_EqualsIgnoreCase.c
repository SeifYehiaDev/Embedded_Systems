/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 01/09/2023
 * */

#include <stdio.h>
//                                                 _Question_
                                /*Write a C function to compare two string.*/
//                                                  _Solution_
char toLowerCase(const char letter) {
    return (letter >= 'A' && letter <= 'Z') ? letter + ('a' - 'A') : letter;
}

int equalsIgnoreCase(const char firstString[], const char secondString[]) {
    int isEqual = 1;
    for (int index = 0; (firstString[index] || secondString[index]) && isEqual; index++)
        if (toLowerCase(firstString[index]) != toLowerCase(secondString[index])) isEqual = 0;
    return isEqual;
}

int main() {
    printf("\"Seif\" %s equal \"Seif\".\n", (equalsIgnoreCase("Seif", "Seif")) ? "is" : "is not");
    printf("\"Seif\" %s equal \"SEIF\".\n", (equalsIgnoreCase("Seif", "SEIF")) ? "is" : "is not");
    printf("\"Seif\" %s equal \"Yehia\".", (equalsIgnoreCase("Seif", "Yehia")) ? "is" : "is not");
    return 0;
}

//                                                 _Output_
/*
"Seif" is equal "Seif".
"Seif" is equal "SEIF".
"Seif" is not equal "Yehia".
 */