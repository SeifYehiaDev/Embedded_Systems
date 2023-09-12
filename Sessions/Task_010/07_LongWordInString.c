/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 06/09/2023
 * */

#include <stdio.h>
#include <stdlib.h>
//                                                 _Question_
                            /*Write a C function to return long word in string.*/
//                                                  _Solution_
char *getLongString(const char string[]) {
    int lastIndex = 0, maxString = 0, count = 0, x, y;
    for (int index = 0; string[index]; index++) {
        if (string[index] != ' ') {
            count++;
            if (count >= maxString) {
                maxString = count;
                lastIndex = index;
            }
        } else
            count = 0;
    }
    char *longWord = (char *) malloc(sizeof(char) * (maxString + 1));
    for (x = 0, y = lastIndex - maxString + 1; x < maxString; longWord[x] = string[y], x++, y++);
    longWord[x] = '\0';
    return longWord;
}

int main() {
    char string[] = "I am an embedded software engineer for 6 years.";
    char *newString = getLongString(string);
    printf("The long word in \"%s\" is : %s",string, newString);
    free(newString);
    return 0;
}

//                                                 _Output_
/*
The long word in "I am an embedded software engineer for 6 years." is : engineer
 */