#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

int main(void)
{
        listint_t *head = NULL;
        listint_t *new_node = NULL;
        size_t num_nodes;

        /* create the first node */
        head = malloc(sizeof(listint_t));
        if (head == NULL) {
                printf("Error: unable to allocate memory\n");
                return 1;
        }
        head->n = 8;
        head->next = NULL;

        /* create a new node and insert it at the beginning*/
        new_node = malloc(sizeof(listint_t));
        if (new_node == NULL) {
                printf("Error: unable to allocate memory\n");
                return 1;
        }
        new_node->n = 9;
        new_node->next = head;
        head = new_node;

        /* print the list*/
        num_nodes = print_listint(head);
        printf("Number of nodes: %lu\n", num_nodes);

        return 0;
}
