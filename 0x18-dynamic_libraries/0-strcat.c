#include "main.h"

/**
* _strcat - concatenates two strings.
* @dest: destination string
* @src: source string
*/
char *_strcat(char *dest, char *src)
{
	char *result = dest;
	int j;
	while (*dest != '\0')
	{
		dest++;
	}
	for (j = 0; src[j] != '\0'; j++, dest++)
	{
		*dest = src[j];
	}
	*dest = '\0';
	return (result);
}
