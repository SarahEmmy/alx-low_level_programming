#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locates a character in a string.
 * @s: The string to be searched.
 * @c: The character to be located.
 *
 * Return: If the character is found - a pointer to the first occurrence.
 *         If the character is not found - NULL.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != 0)
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	if (c == 0)
		return (s + i);
	return (0);
}
