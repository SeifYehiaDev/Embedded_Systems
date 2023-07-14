/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 14/07/2023
 * */

#include <stdio.h>

//                                                 _Question_
                /*Write c function to take number of lines and draw pattern with '*'.*/
//                                                 _Solution_
void displayPatternA(int lines) {
    int row, col;
    for (row = lines; row >= 1; printf("\n"), row--)
        for (col = 1; col <= row; printf("*"), col++);
}

void displayPatternB(int lines) {
    int row, col;
    for (row = 1; row <= lines; printf("\n"), row++)
        for (col = 1; col <= row; printf("*"), col++);
}

void displayPatternC(int lines) {
    int x, y;
    for (x = 1; x <= lines; printf("\n"), x++)
        for (y = 1; y <= x; printf("*"), y++);
}

void displayPatternD(int lines) {
    int row, col, space;
    for (row = 1; row <= lines; printf("\n"), row++) {
        for (space = 0; space < lines - row; printf(" "), space++);
        for (col = 1; col <= 2 * row - 1; printf("*"), col++);
    }
}

void main() {
    signed int lines;
    printf("Enter the number of lines: ");
    scanf("%d", &lines);
    printf("\nPattern(A)\n");
    displayPatternA(lines);
    printf("\nPattern(B)\n");
    displayPatternB(lines);
    printf("\nPattern(C)\n");
    displayPatternC(lines);
    printf("\nPattern(D)\n");
    displayPatternD(lines);
}

//                                                 _Output_
/*
Enter the number of lines: 7

Pattern(A)
*******
******
*****
****
***
**
*

Pattern(B)
*
**
***
****
*****
******
*******

Pattern(C)
*
**
***
****
*****
******
*******

Pattern(D)
      *
     ***
    *****
   *******
  *********
 ***********
*************
 */