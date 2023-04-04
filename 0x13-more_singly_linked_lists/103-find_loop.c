#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to the head of the linked list
 *
 * Return: the node where the loop starts, or NULL if there's no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
    if (!head) {
        return NULL;
    }

    listint_t *slow = head;
    listint_t *fast = head;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) {
            break;
        }
    }

    if (!fast || !fast->next) {
        // No loop found
        return NULL;
    }

    slow = head;
    while (slow != fast) {
        slow = slow->next;
        fast = fast->next;
    }

    return slow;
}

