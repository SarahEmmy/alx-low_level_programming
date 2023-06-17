#include "lists.h"

/**
 * print_dlistint - prints all elements of a dlistint_t list
 * @h: pointer to the head of the list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current;
	unsigned int node_count; /* number of nodes */

	current = h;
	node_count = 0;
	while (current != NULL)
	{
		printf("%i\n", current->n);
		current = current->next;
		node_count++;
	}

	return (node_count);
}
