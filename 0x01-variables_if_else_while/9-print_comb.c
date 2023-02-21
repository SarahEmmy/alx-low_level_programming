#include <stdio.h>
/**
  * main -  prints all possible combinations of single-digit numbers
  *
  * Return: 0 means success
  */
int main(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num + 0);
		if (num != 57)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
