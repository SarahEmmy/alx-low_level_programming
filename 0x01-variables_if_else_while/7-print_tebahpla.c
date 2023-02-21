#include <stdio.h>

/**
  * main - prints all the numbers of base 16 in lowercase,
  * followed by a new line.
  *
  * Return: 0 means success of program
  */
int main(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num + 0);
	}
	for (num = 'a'; num <= 'f'; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
