#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies two positive numbers.
 * @argc: number of arguments
 * @argv: the values in each argc element
 *
 * Description: it's like infinite add but with multiplication
 * Return: print the result. return 0 if success
 */

int main(int argc, char **argv)
{
	int size1 = 0;
	int size2 = 0;
	int product_size = 0;
	int index = 0;
	int tab = 0;
	int j = 0;
	int *product;
	int __attribute__((unused)) overflow = 0;
	
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	while (argv[1][size1])
	{
		if (argv[1][size1] < '0' || argv[1][size1] > '9')
		{
			printf("Error\n");
			return (98);
		}

		size1++;
	}

	while (argv[2][size2])
	{
		if (argv[2][size2] < '0' || argv[2][size2] > '9')
		{
			printf("Error\n");
			return (98);
		}
		size2++;
	}

	product_size = size1 + size2 + 1;
	product = malloc(sizeof(int) * product_size);

	if (!product)
		return (98);

	while (product_size >= 0)
	{
		product[product_size] = 0;
		product_size--;
	}

	size1--;
	size2--;

	while (size2 >= 0)
	{
		index = tab;
		for (j = size1; j >= 0; j--)
		{
			product[index] += (argv[1][j] - '0') * (argv[2][size2] - '0');
			product[index + 1] += product[index] / 10;
			product[index] %= 10;
			index++;
		}
		size2--;
		tab++;
	}

	product_size--;
	
	if (product_size == -1)
		printf("0\n");
	else
	{
		for (index = product_size; index >= 0; index--)

			printf("%d", product[index]);
		printf("\n");
	}

	free(product);
	return (0);
}
