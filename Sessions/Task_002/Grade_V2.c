/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 28/05/2023
 * */

#include <stdio.h>
//                                                 _Question_
                                /*Write a program to find grade of student*/
//                                                 _Solution_
void main() {
    double degree;
    printf("Enter your degree: ");
    scanf("%lf", &degree);
    printf("Your degree is %s",
           (degree > 100.0 || degree < 0.0) ? "Error: your degree is invalid." : (degree >= 80) ? "A" :
           (degree >= 70) ? "B" : (degree >= 60) ? "C" : (degree >= 50) ? "D" : "F");
}

//                                                 _Output One_
/*
Enter your grade: 103
Error: your grade is invalid.
 */

//                                                 _Output Two_
/*
Enter your grade: 80
Your grade is A
 */

//                                                 _Output Three_
/*
Enter your grade: 49.9
Your grade is F
 */