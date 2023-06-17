#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at a given index of a doubly linked list
 * @head: double pointer to the head of the list
 * @index: index of the node to be deleted
 * Return: 1 if deletion succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_node = *head;

	if (*head == NULL)
		return (-1);
	while (index > 0)
	{
		if (current_node == NULL)
			return (-1);
		current_node = current_node->next;
		index--;
	}
	if (current_node == *head)
	{
		*head = current_node->next;
		if (current_node->next)
			current_node->next->prev = NULL;
	}
	else
	{
		current_node->prev->next = current_node->next;
		if (current_node->next)
			current_node->next->prev = current_node->prev;
	}
	free(current_node);
	return (1);
}
