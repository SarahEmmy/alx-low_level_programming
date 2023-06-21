#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _putchar - Writes a character to the standard output
 * @c: The character to be written
 *
 * Return: On success, the character written.
 * On error, -1 is returned,
 * and errno is set appropriately.
 */
int _putchar(char c)
{

	return (putchar(c));
}

/**
 * main - Entry point of the program
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	char *str = "My Dyn Lib";
	int length;

	length = _strlen(str);
	if (length >= 0)
	{
		printf("%d\n", length);
		return (EXIT_SUCCESS);
	}
	else
	{
		 fprintf(stderr, "Error: Invalid string\n");
		return (EXIT_FAILURE);
	}
}
