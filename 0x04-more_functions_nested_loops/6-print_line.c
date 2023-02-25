#include "main.h"

/**
  * print_line - draws a straight line in the terminal.
  *
  * @n: number of times the character _ should be printed
  */
void print_line(int n)
{
	int lines;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (lines = 1; lines <= n; lines++)
		{
		_putchar('_');
		}
		_putchar('\n');
	}
}
