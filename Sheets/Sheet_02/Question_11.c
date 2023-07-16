/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 16/07/2023
 * */

#include <stdio.h>
#include <limits.h>
//                                                 _Question_
/*Write c function to count the max number of zeros between two ones in the binary representation of a number
(296384-> {1001000010111000000} return 4).*/
//                                                 _Solution_
int findMaxXOR(int l, int r) {
    int x, y, maxXOR = INT_MIN;
    for (x = l; x <= r; x++)
        for (y = x; y <= r; y++)
            if ((x ^ y) > maxXOR) maxXOR = x ^ y;
    return maxXOR;
}

int main() {
    int l, r;
    printf("Enter the value of L: ");
    scanf("%d", &l);
    printf("Enter the value of R: ");
    scanf("%d", &r);
    ((l >= 1 && l <= r) && (r >= l && r <= 1000)) ?
    printf("Maximum XOR value is %d.", findMaxXOR(l, r)) : printf("Error: invalid input.");
}

//                                                 _Output One_
/*
Enter the value of L: 10
Enter the value of R: 15
Maximum XOR value is 7.
 */

//                                                 _Output Two_
/*
Enter the value of L: 20
Enter the value of R: 10
Error: invalid input.
 */