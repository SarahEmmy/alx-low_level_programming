#include "lists.h"

/**
 * sum_dlistint - returns the sum of all data (n) of a dlistint_t linked list
 * @head: pointer to the head of the list
 * Return: sum of all data in the list
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current_node;
	int sum;

	if (head == NULL)
		return (0);

	current_node = head;
	sum = 0;

	while (current_node->next != NULL)
	{
		sum += current_node->n;
		current_node = current_node->next;
	}
	sum += current_node->n;

	return (sum);
}
