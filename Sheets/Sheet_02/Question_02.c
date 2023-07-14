/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 14/07/2023
 * */

#include <stdio.h>

//                                                 _Question_
/*Write a C program to take a number and a character from user if the number is even print the same character,
if the number is odd print the other case of the character (a->A, B->b).*/
//                                                 _Solution_
unsigned char isLetter(char character) {
    return character >= 'A' && character <= 'z';
}

unsigned char isLowerCase(char letter) {
    return (letter >= 'a' && letter <= 'z');
}

unsigned char isUpperCase(char letter) {
    return (letter >= 'A' && letter <= 'Z');
}

char toLowerCase(char upperLetter) {
    if (isUpperCase(upperLetter))
        return upperLetter + ('a' - 'A');
    return upperLetter;
}

char toUpperCase(char lowerLetter) {
    if (isLowerCase(lowerLetter))
        return lowerLetter - ('a' - 'A');
    return lowerLetter;
}

void main() {
    char letter;
    unsigned int number;
    printf("Enter a number: ");
    scanf("%u", &number);
    printf("Enter a letter: ");
    fflush(stdin);
    scanf("%c", &letter);
    if (!isLetter(letter)) {
        printf("Error: %c is not a letter.", letter);
        return;
    }
    printf("Letter is %c",
           (number & 1) ? isUpperCase(letter) ? toLowerCase(letter) : toUpperCase(letter) : letter);
}


//                                                 _Output One_
/*
Enter a number: 61
Enter a letter: a
Letter is A
 */

//                                                 _Output Two_
/*
Enter a number: 61
Enter a letter: A
Letter is a
 */

//                                                 _Output Three_
/*
Enter a number: 60
Enter a letter: a
Letter is a
 */

//                                                 _Output Four_
/*
Enter a number: 60
Enter a letter: A
Letter is A
 */

//                                                 _Output Five_
/*
Enter a number: 60
Enter a letter: $
Error: $ is not a letter.
 */