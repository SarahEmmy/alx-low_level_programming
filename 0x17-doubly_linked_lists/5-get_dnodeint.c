#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node to be returned
 * Return: pointer to the node or NULL if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current_node;
	unsigned int i, node_count;

	current_node = head;

	for (node_count = 0; head != NULL; node_count++)
		head = head->next;

	if (index > node_count)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		if (current_node == NULL)
			return (NULL);
		current_node = current_node->next;
	}

	return (current_node);
}
