#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked listint_t list
 * @h: pointer to the head of the list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current;
	unsigned int element_count; /* counter for number of elements */

	current = h;
	element_count = 0;
	while (current != NULL)
	{
		current = current->next;
		element_count++;
	}

	return (element_count);
}
