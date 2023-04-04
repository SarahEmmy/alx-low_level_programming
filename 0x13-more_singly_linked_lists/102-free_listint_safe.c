#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @head: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **head)
{
	size_t count = 0;
	listint_t *current, *prev;

	if (!head || !*head)
		return (0);

	while (*head)
	{
		current = *head;
		prev = NULL;

		while (current && current > current->next)
		{
			prev = current;
			current = current->next;
			free(prev);
			count++;
		}

		if (!current || current <= prev)
			break;

		*head = current->next;
		free(current);
		count++;
	}

	*head = NULL;

	return (count);
}
