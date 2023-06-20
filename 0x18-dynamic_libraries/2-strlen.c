#include "main.h"

/**
  * _strlen - returns length of a string
  * @s: string to be counted
  * Return: 0 means success
  */
int _strlen(char *s)
{
	int count = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		count++;
		i++;
	}
	return (count);
}
