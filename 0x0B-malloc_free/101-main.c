#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **strtow(char *str);

void print_tab(char **tab)
{
	int i;

	for (i = 0; tab[i] != NULL; ++i)
	{
		printf("%s\n", tab[i]);
	}
}

	int main(void)
{
	char **tab;
	char *str = "      ALX School         #cisfun      ";

	tab = strtow(str);
	if (tab == NULL)
	{
		printf("Failed\n");
		return (1);
	}
print_tab(tab);
free(tab); /* free the memory allocated by strtow() */
return (0);
}
