/*
 * Author : Seif Yehia Esmail AbdelAal
 * My accounts on social media (facebook , linkedin , instagram , github) : SeifYehiaDev
 * Created on : 17/08/2023
 * */

#include <stdio.h>

//                                                 _Question_
/*You are in charge of the cake for a child's birthday.You have decided the cake will have one candle for each year of their total age. They will only be able to blow out the tallest of the candles. Count how many candles are tallest.*/
//                                                 _Solution_
int scanArray(int array[], int maxSize) {
    int size, index = -1;
    scanf("%d", &size);
    for (index = 0; index < size && index < maxSize; index++)
        scanf("%d", &array[index]);
    return index;
}

int birthdayCakeCandles_V1(int candles_count, int *candles) {
    int maxSize = 0, count = 0;
    for (int candle = 0; candle < candles_count; candle++)
        if (candles[candle] > maxSize) maxSize = candles[candle];
    for (int candle = 0; candle < candles_count; candle++)
        if (candles[candle] == maxSize) count++;
    return count;
}

int birthdayCakeCandles_V2(int candles_count, int *candles) {
    int maxSize = 0, count = 1;
    for (int candle = 0; candle < candles_count; candle++) {
        if (candles[candle] >= maxSize) {
            count = (candles[candle] == maxSize) ? count + 1 : 1;
            maxSize = candles[candle];
        }
    }
    return count;
}

int main() {
    int array[100];
    scanArray(array, 100);
    printf("birthdayCakeCandles_V1() return %d.\n", birthdayCakeCandles_V1(10, array));
    printf("birthdayCakeCandles_V2() return %d.", birthdayCakeCandles_V2(10, array));
    return 0;
}

//                                                 _Output_
/*
10
18 90 90 13 90 75 90 8 90 43
birthdayCakeCandles_V1() return 5.
birthdayCakeCandles_V2() return 5.
 */