#include <ctime>
#include <iostream> 
#include <stdlib.h>
#include <stdio.h>
#define M 10
#define N 5
int main() 
{
    int a[N][M], i, j, max, min;
    srand(time(NULL)); // параметр текущего системного времени, которое при каждом запускe программы будет разным // // Это позволит функции rand() каждый раз генерировать именно случайные числа//
    max = -1;
    for (j=0; j<M; j++) {
        min = 200;
        for (i=0; i<N; i++) {
            a[i][j] = rand() % 200; // генерирует число и далее вычисляется остаток от деления нa 200 от этого числа //
            if (a[i][j] < min) min = a[i][j];
        }
        if (min > max) max = min;
    }
    for (i=0; i<N; i++) {
        for (j=0; j<M; j++)
            printf("%4d", a[i][j]);
        printf("\n");
    }
    printf("Максимальный среди минимальных: %d\n", max);
}
