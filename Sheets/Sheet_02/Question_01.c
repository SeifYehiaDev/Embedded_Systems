/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 14/07/2023
 * */

#include <stdio.h>

//                                                 _Question_
        /*Write a program that reads the radius of a circle and calculates the area and circumference.*/
//                                                 _Solution_
void main() {
    const double PI = 3.141592654;
    double radius;
    printf("Enter a number for radius: ");
    scanf("%lf", &radius);
    if (radius < 0) {
        printf("Error: The radius should be a positive number.");
        return;
    }
    printf("The area for the circle of radius %.2lf is %.2lf\n", radius, PI * radius * radius);
    printf("The circumference for the circle of radius %.2lf is %.2lf", radius, 2 * PI * radius);
}


//                                                 _Output_
/*
Enter a number for radius: 30.51
The area for the circle of radius 30.51 is 2924.38
The circumference for the circle of radius 30.51 is 191.70
 */