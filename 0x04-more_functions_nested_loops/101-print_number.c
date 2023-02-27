#include "main.h"
#include <stdio.h>

/**
 * print_number - prints an integer
 * @n: the integer to be printed
 */
void print_number(int n)
{
    int divisor = 1;

    if (n < 0) {
        _putchar('-');
        n = -n;
    }

    while (n / divisor > 9)
        divisor *= 10;

    while (divisor != 0) {
        _putchar(n / divisor + '0');
        n %= divisor;
        divisor /= 10;
    }
}
