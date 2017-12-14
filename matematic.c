#include <stdio.h>

/*
 * Даны натуральные числа М и N. Вывести старшую цифру дробной части и младшую цифру целой части числа M/N
 */

int main()
{
    int M, N;
    double result, z;
    scanf(" %d %d", &M, &N);
    printf("%d %d", (M / N) % 10, ((M * 10) / N) % 10);
    printf("\n");
    return 0;
}
