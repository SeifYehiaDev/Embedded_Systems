/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 27/07/2023
 * */

#include <stdio.h>

//                                                 _Question_
                                /*Write a function to round float number.*/
//                                                 _Solution_
int roundNumber(double number) {
    return (int) (number + 0.5);
}

int main() {
    printf("round(5.0) = %d\n", roundNumber(5.0));
    printf("round(5.4) = %d\n", roundNumber(5.4));
    printf("round(5.5) = %d\n", roundNumber(5.5));
    printf("round(5.9) = %d", roundNumber(5.9));
}

//                                                 _Output_
/*
round(5.0) = 5
round(5.4) = 5
round(5.5) = 6
round(5.9) = 6
 */
