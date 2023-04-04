#include "lists.h"
/**
 * print_listint_safe - function that prints a linked list with a loop safely.
 * @head: pointer to the 1st node of the linked list
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *slow, *fast;
    size_t count = 0;

    if (!head)
        return (0);

    slow = head;
    fast = head->next;

    while (fast && fast < slow)
    {
        printf("[%p] %d\n", (void *)slow, slow->n);
        count++;
        slow = slow->next;
        fast = fast->next ? fast->next->next : NULL;
    }

    if (fast)
    {
        printf("[%p] %d\n", (void *)slow, slow->n);
        count++;
        printf("-> [%p] %d\n", (void *)fast, fast->n);
        return (count);
    }

    while (slow)
    {
        printf("[%p] %d\n", (void *)slow, slow->n);
        count++;
        slow = slow->next;
    }

    return (count);
}
