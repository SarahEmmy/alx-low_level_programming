#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int _putchar(char c)
{
	return putchar(c);
}
int main(void)
{
	 char *str = "My Dyn Lib";
	 int length;

	 length = _strlen(str);
	 if (length >= 0) {
		 printf("%d\n", length);
		 return EXIT_SUCCESS;
	 }
	 else {
		 fprintf(stderr, "Error: Invalid string\n");
		 return EXIT_FAILURE;
	 }
}
