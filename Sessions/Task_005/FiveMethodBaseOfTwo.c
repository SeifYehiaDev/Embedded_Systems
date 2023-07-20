/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 20/07/2023
 * */

#include <stdio.h>
#include <math.h>

//                                                 _Question_
                            /*Five methods to find if number is base of two or not.*/
//                                                 _Solution_
int isBaseOfTwo_V1(int number) {
    int isBaseOfTwo = 0, index;
    for (index = 1; index <= number && !isBaseOfTwo; index *= 2)
        isBaseOfTwo = index == number;
    return isBaseOfTwo;
}

int isBaseOfTwo_V2(int number) {
    int isBaseOfTwo = number > 0;
    while (number > 1 && isBaseOfTwo) {
        if (number % 2 != 0) isBaseOfTwo = 0;
        number /= 2;
    }
    return isBaseOfTwo;
}

int isBaseOfTwo_V3(int number) {
    int count = 0;
    while (number && count <= 1) {
        count += number & 1;
        number >>= 1;
    }
    return count == 1;
}

int power(int x, int y) {
    int pow = 1, num;
    for (num = 1; num <= y; pow *= x, num++);
    return pow;
}

int isBaseOfTwo_V4(int number) {
    int isBaseOfTwo = 0, index;
    for (index = 0; (power(2, index) <= number) && !isBaseOfTwo; index++)
        isBaseOfTwo = power(2, index) == number;
    return isBaseOfTwo;
}

int isBaseOfTwo_V5(int number) {
    return number > 0 && (number & (number - 1)) == 0;
}

int isBaseOfTwo_V6(int number) {
    return number > 0 && (log2(number) == (int) log2(number));
}

int isBaseOfTwo_V7(int number) {
    int isBaseOfTwo = 0, bit = 0;
    while (((1 << bit) <= number) && !isBaseOfTwo)
        isBaseOfTwo = (1 << bit++) == number;
    return isBaseOfTwo;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("isBaseOfTwo_V1()====> %d %s base of two.\n", number, (isBaseOfTwo_V1(number)) ? "is" : "is not");
    printf("isBaseOfTwo_V2()====> %d %s base of two.\n", number, (isBaseOfTwo_V2(number)) ? "is" : "is not");
    printf("isBaseOfTwo_V3()====> %d %s base of two.\n", number, (isBaseOfTwo_V3(number)) ? "is" : "is not");
    printf("isBaseOfTwo_V4()====> %d %s base of two.\n", number, (isBaseOfTwo_V4(number)) ? "is" : "is not");
    printf("isBaseOfTwo_V5()====> %d %s base of two.\n", number, (isBaseOfTwo_V5(number)) ? "is" : "is not");
    printf("isBaseOfTwo_V6()====> %d %s base of two.\n", number, (isBaseOfTwo_V6(number)) ? "is" : "is not");
    printf("isBaseOfTwo_V7()====> %d %s base of two.", number, (isBaseOfTwo_V7(number)) ? "is" : "is not");
    return 0;
}

//                                                 _Output One_
/*
Enter a number: 256
isBaseOfTwo_V1()====> 256 is base of two.
isBaseOfTwo_V2()====> 256 is base of two.
isBaseOfTwo_V3()====> 256 is base of two.
isBaseOfTwo_V4()====> 256 is base of two.
isBaseOfTwo_V5()====> 256 is base of two.
isBaseOfTwo_V6()====> 256 is base of two.
isBaseOfTwo_V7()====> 256 is base of two.
 */

//                                                 _Output Two_
/*
Enter a number: 1
isBaseOfTwo_V1()====> 1 is base of two.
isBaseOfTwo_V2()====> 1 is base of two.
isBaseOfTwo_V3()====> 1 is base of two.
isBaseOfTwo_V4()====> 1 is base of two.
isBaseOfTwo_V5()====> 1 is base of two.
isBaseOfTwo_V6()====> 1 is base of two.
isBaseOfTwo_V7()====> 1 is base of two.
 */

//                                                 _Output Three_
/*
Enter a number: -1
isBaseOfTwo_V1()====> -1 is not base of two.
isBaseOfTwo_V2()====> -1 is not base of two.
isBaseOfTwo_V3()====> -1 is not base of two.
isBaseOfTwo_V4()====> -1 is not base of two.
isBaseOfTwo_V5()====> -1 is not base of two.
isBaseOfTwo_V6()====> -1 is not base of two.
isBaseOfTwo_V7()====> -1 is not base of two.
 */

//                                                 _Output Four_
/*
Enter a number: 0
isBaseOfTwo_V1()====> 0 is not base of two.
isBaseOfTwo_V2()====> 0 is not base of two.
isBaseOfTwo_V3()====> 0 is not base of two.
isBaseOfTwo_V4()====> 0 is not base of two.
isBaseOfTwo_V5()====> 0 is not base of two.
isBaseOfTwo_V6()====> 0 is not base of two.
isBaseOfTwo_V7()====> 0 is not base of two.
 */

//                                                 _Output Five_
/*
Enter a number: 129
isBaseOfTwo_V1()====> 129 is not base of two.
isBaseOfTwo_V2()====> 129 is not base of two.
isBaseOfTwo_V3()====> 129 is not base of two.
isBaseOfTwo_V4()====> 129 is not base of two.
isBaseOfTwo_V5()====> 129 is not base of two.
isBaseOfTwo_V6()====> 129 is not base of two.
isBaseOfTwo_V7()====> 129 is not base of two.
 */