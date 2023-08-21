/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 20/08/2023
 * */

#include <stdio.h>

//                                                    _Question_
/*Write c function to take an array (with unknown size) contain 2 zeros swap the 3 element after the first zero with
the 3 element after the second zero ( x,x,x,0,1,2,3,xxxx,0,5,6,7,xxxx ->swap 1,2,3 with 5,6,7).*/
//                                                 _Solution_
void swapElements(int array[]) {
    int indexOfElements[6], countOfZero = 0, index = 0, y = 0;
    while (countOfZero <= 2) {
        if (array[index] == 0) {
            for (int x = 0; x < 3; x++)
                indexOfElements[y++] = ++index;
            countOfZero++;
        }
        index++;
    }
    for (int x = 0; x < 3; x++)
        array[indexOfElements[x]] = (array[indexOfElements[x]] + array[indexOfElements[x + 3]]) - (array[indexOfElements[x + 3]] = array[indexOfElements[x]]);
}

void displayArray(const int array[], const int size) {
    for (int index = 0; index < size; index++)
        printf("%d ", array[index]);
}

int main() {
    int array[] = {1, 2, 3, 0, 1, 2, 3, 4, 0, 5, 6, 7, 8};
    printf("Original array: ");
    displayArray(array, sizeof(array) / sizeof(array[0]));
    swapElements(array);
    printf("\nArray after swapping: ");
    displayArray(array, sizeof(array) / sizeof(array[0]));
    return 0;
}

//                                                 _Output_
/*
Original array: 1 2 3 0 1 2 3 4 0 5 6 7 8
Array after swapping: 1 2 3 0 5 6 7 4 0 1 2 3 8
 */