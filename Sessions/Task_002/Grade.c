/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 24/05/2023
 * */

#include <stdio.h>
//                                                 _Question_
                                /*Write a program to find grade of student*/
//                                                 _Solution_
void main() {
    double grade;
    printf("Enter your grade: ");
    scanf("%lf", &grade);
    if (grade > 100.0 || grade < 0.0)
        printf("Error: your grade is invalid.");
    else
        printf("Your grade is %c",
               (grade >= 80) ? 'A' : (grade >= 70) ? 'B' : (grade >= 60) ? 'C' : (grade >= 50) ? 'D' : 'F');
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