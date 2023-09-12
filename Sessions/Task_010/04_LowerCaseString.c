/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 01/09/2023
 * */

#include <stdio.h>
//                                                 _Question_
                    /*Write a C function to convert string from uppercase to lowercase.*/
//                                                 _Solution_
void toLowerCase(char string[]) {
    for (int index = 0; string[index]; index++)
        if (string[index] >= 'A' && string[index] <= 'Z')
            string[index] += 'a' - 'A';
}

int main() {
    char upperCaseName[] = "SEIF YEHIA";
    printf("Uppercase name is \"%s\".\n", upperCaseName);
    toLowerCase(upperCaseName);
    printf("LowerCase name is \"%s\".", upperCaseName);
    return 0;
}

//                                                 _Output_
/*
Uppercase name is "SEIF YEHIA".
LowerCase name is "seif yehia".
 */