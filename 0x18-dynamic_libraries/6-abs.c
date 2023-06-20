#include "main.h"
/**
 * _abs - computes the absolute value of an integer.
 * @n: integer to compute
 * Return: 0 means success
 */
int _abs(int n)
{
	if (n < 0)
	{
	return (n * (-1));
	}
	else if (n == 0)
	{
	return (0);
	}
	else
	{
	return (n);
	}
	return (0);
}
