#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to a pointer of the head of the list
 * @idx: index of the new node
 * @n: data for the new node
 * Return: address of the new node or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current_node;
	dlistint_t *new_node;
	unsigned int i;

	current_node = *h;

	if (h == NULL)
		return (NULL);
	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && current_node != NULL; i++)
			current_node = current_node->next;
	}
	if (idx > i + 1)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;
		*h = new_node;
		return (new_node);
	}
	if (idx == i)
	{
		new_node->prev = current_node;
		new_node->next = NULL;
		current_node->next = new_node;
		return (new_node);
	}
	new_node->prev = current_node;
	new_node->next = current_node->next;
	current_node->next = new_node;
	return (new_node);
}
