#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

/* LIBRARIES */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* STRUCTS */
/**
 * struct listint_s - Singly Linked List Node
 * @n: Integer value stored in the node
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: Defines a structure for a singly linked list node
 * used in Holberton project.
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - Singly Linked List with an Express Lane
 * @n: Integer value stored in the node
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 *
 * Description: Defines a structure for a singly linked list node with an
 *              express lane used in the Holberton project.
 */
typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;

/* PROTOTYPES */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);

/* UTILITIES */
listint_t *create_list(int *array, size_t size);
void free_list(listint_t *list);
void print_list(const listint_t *list);

#endif
