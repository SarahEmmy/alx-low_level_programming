#include "main.h"
/**
 * print_alphabet_x10 - prints
 * 10 times the alphabet, in lowercase,
 * followed by a new line.
 *
 */
void print_alphabet_x10(void)
{
	char alpha = 'a';
	int count;

	for (count = 0; count < 10; count++)
	{
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
	_putchar(alpha);
	}
	_putchar('\n');
	}
}
