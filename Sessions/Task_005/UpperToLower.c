/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 20/07/2023
 * */

#include <stdio.h>

//                                                 _Question_
                            /*Change character form Uppercase to lower case*/
//                                                 _Solution_
char toLowerCase_V1(char letter) {
    return (letter >= 'A' && letter <= 'Z') ? letter + ('a' - 'A') : letter;
}

char toLowerCase_V2(char letter) {
    return (letter >= 'A' && letter <= 'Z') ? letter | ' ' : letter;
}

int main() {
    char letter;
    printf("Enter an upper case letter: ");
    scanf("%c", &letter);
    printf("\"%c\" after conversion to lowercase is \"%c\".\n", letter, toLowerCase_V1(letter));
    printf("\"%c\" after conversion to lowercase is \"%c\".", letter, toLowerCase_V2(letter));
    return 0;
}

//                                                 _Output One_
/*
Enter an upper case letter: A
"A" after conversion to lowercase is "a".
"A" after conversion to lowercase is "a".
 */

//                                                 _Output Two_
/*
Enter an upper case letter: b
"b" after conversion to lowercase is "b".
"b" after conversion to lowercase is "b".
 */

//                                                 _Output Three_
/*
Enter an upper case letter: @
"@" after conversion to lowercase is "@".
"@" after conversion to lowercase is "@".
 */