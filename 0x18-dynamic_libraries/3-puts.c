#include "main.h"
#include <unistd.h>
/**
  * _puts - prints a string, followed by a new line, to stdout
  * @str: string to be printed
  *
  */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		str++;
	}
	_putchar('\n');
}
