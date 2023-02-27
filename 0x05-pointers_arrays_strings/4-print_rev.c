#include "main.h"

/**
  * print_rev - prints a string, followed by a new line, to stdout
  * @s: string to be reversed
  *
  */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	for (i = i - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
