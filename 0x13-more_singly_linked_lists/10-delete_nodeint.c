#include "lists.h"

int delete_nodeint_at_index(listint_t **head, unsigned int index) {
  // Declare temporary variables
  listint_t *temp = *head;
  listint_t *current = NULL;
  unsigned int i = 0;

  // Check if head is null
  if (*head == NULL)
    return -1;

  // If deleting first node
  if (index == 0) {
    *head = (*head)->next;
    free(temp);
    return 1;
  }

  // Traverse to the node before the node to be deleted
  while (i < index - 1) {
    if (!temp || !(temp->next))
      return -1;
    temp = temp->next;
    i++;
  }

  // Delete the node
  current = temp->next;
  temp->next = current->next;
  free(current);

  return 1;
}
