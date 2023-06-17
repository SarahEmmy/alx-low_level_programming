#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to a pointer of the first node of the dlistint_t list
 * @n: integer to be included in the new node
 * Return: address of the new element or NULL if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *current;

	current = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = current;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		while (current->next != NULL)
		{
			new_node->prev = current;
			current = current->next;
		}
		current->next = new_node;
	}

	return (new_node);
}
