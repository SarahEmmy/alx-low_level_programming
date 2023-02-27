#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0.
 */
int main(void)
{
    long n = 612852475143;
    long x;

    for (x = 2; x <= sqrt(n); x++)
    {
        while (n % x == 0)
        {
            n = n / x;
        }
    }

    printf("%ld\n", n);

    return (0);
}
