/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 01/09/2023
 * */

#include <stdio.h>
//                                                 _Question_
                                /*Write a C function to compare two string.*/
//                                                 _Solution_
int stringLength(const char string[]) {
    int index;
    for (index = 0; string[index]; index++);
    return index;
}

int isEquals_V1(const char firstString[], const char secondString[]) {
    int isEqual = stringLength(firstString) == stringLength(secondString);
    for (int index = 0; firstString[index] && isEqual; index++)
        if (firstString[index] != secondString[index]) isEqual = 0;
    return isEqual;
}

int isEquals_V2(const char firstString[], const char secondString[]) {
    int isEqual = 1;
    for (int index = 0; (firstString[index] || secondString[index]) && isEqual; index++)
        if (firstString[index] != secondString[index]) isEqual = 0;
    return isEqual;
}

int main() {
    printf("\"Seif\" %s equal \"Seif\".\n", (isEquals_V1("Seif", "Seif")) ? "is" : "is not");
    printf("\"Seif\" %s equal \"SEIF\".\n", (isEquals_V1("Seif", "SEIF")) ? "is" : "is not");
    printf("\"Seif\" %s equal \"fies\".\n", (isEquals_V1("Seif", "fies")) ? "is" : "is not");
    printf("\"Seif\" %s equal \"Yehia\".", (isEquals_V1("Seif", "Yehia")) ? "is" : "is not");
    printf("\n----------------- isEquals_V2 -----------------\n");
    printf("\"Seif\" %s equal \"Seif\".\n", (isEquals_V2("Seif", "Seif")) ? "is" : "is not");
    printf("\"Seif\" %s equal \"SEIF\".\n", (isEquals_V2("Seif", "SEIF")) ? "is" : "is not");
    printf("\"Seif\" %s equal \"fies\".\n", (isEquals_V2("Seif", "fies")) ? "is" : "is not");
    printf("\"Seif\" %s equal \"Yehia\".\n", (isEquals_V2("Seif", "Yehia")) ? "is" : "is not");
    printf("\"Seif\" %s equal \"Seif Yehia\".", (isEquals_V2("Seif", "Seif Yehia")) ? "is" : "is not");
    return 0;
}

//                                                 _Output_
/*
"Seif" is equal "Seif".
"Seif" is not equal "SEIF".
"Seif" is not equal "fies".
"Seif" is not equal "Yehia".
----------------- isEquals_V2 -----------------
"Seif" is equal "Seif".
"Seif" is not equal "SEIF".
"Seif" is not equal "fies".
"Seif" is not equal "Yehia".
"Seif" is not equal "Seif Yehia".
 */