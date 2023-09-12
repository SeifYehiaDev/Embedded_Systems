/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 12/09/2023
 * */

#include <stdio.h>
#include <stdlib.h>
//                                                 _Question_
                    /*Write a C function to return long even word in string.*/
//                                                  _Solution_
char *getLongEvenString_V1(const char string[]) {
    int lastIndex = 0, length = 0, count = 0, x, y;
    for (int index = 0; string[index]; index++) {
        if (string[index] == ' ') {
            if (count % 2 == 0 && count >= length) {
                length = count;
                lastIndex = index - 1;
            }
            count = 0;
        } else if (string[index + 1] == '\0') {
            count++;
            if (count % 2 == 0 && count >= length) {
                length = count;
                lastIndex = index;
            }
        } else count++;
    }
    char *longWord = (char *) malloc(sizeof(char) * (length + 1));
    for (x = 0, y = lastIndex - length + 1; x < length; longWord[x] = string[y], x++, y++);
    longWord[x] = '\0';
    return longWord;
}

char *getLongEvenString_V2(const char string[]) {
    int lastIndex = 0, length = 0, count = 0, x, y;
    for (int index = 0; string[index]; index++) {
        if (string[index] == ' ' || string[index + 1] == '\0') {
            if (!string[index + 1]) count++;
            if (count % 2 == 0 && count >= length) {
                length = count;
                lastIndex = (string[index] == ' ') ? index - 1 : index;
            }
            count = 0;
        } else count++;
    }
    char *longWord = (char *) malloc(sizeof(char) * (length + 1));
    for (x = 0, y = lastIndex - length + 1; x < length; longWord[x] = string[y], x++, y++);
    longWord[x] = '\0';
    return longWord;
}

int main() {
    char string[] = "Seif Yehiaaaaaaa Esmail";
    char *newString = getLongEvenString_V1(string);
    printf("The long even word in \"%s\" is : %s", string, newString);
    free(newString);
    return 0;
}

//                                                 _Output_
/*
The long even word in "Seif Yehiaaaaaaa Esmail" is : Esmail
 */