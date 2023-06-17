# 0x16. C - Doubly Linked Lists

## Project Requirements
- The code should follow the formatting standards of the Betty style.
- It should be compiled with `gcc` version 4.8.4 (C90) using the flags `-Wall`, `-Werror`, `-Wextra`, and `-pedantic`.
- Global variables are not allowed.
- Each file should contain no more than 5 functions.
- The only allowed C standard library functions are `malloc`, `free`, `printf`, and `exit`.
- Function prototypes should be included in a header file named `lists.h`.
- Header files should have include guards.

### Project Data Structure
```c
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * for Holberton project
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;
```

## File Descriptions
- **0-print_dlistint.c:** This file contains a function that prints all the elements of a `dlistint_t` list.
- **1-dlistint_len.c:** This file contains a function that returns the number of elements in a linked `dlistint_t` list.
- **2-add_dnodeint.c:** This file contains a function that adds a new node at the beginning of a `dlistint_t` list.
- **3-add_dnodeint_end.c:** This file contains a function that adds a new node at the end of a `dlistint_t` list.
- **4-free_dlistint.c:** This file contains a function that frees a `dlistint_t` list.
- **5-get_dnodeint.c:** This file contains a function that returns the nth node of a `dlistint_t` linked list.
- **6-sum_dlistint.c:** This file contains a function that returns the sum of all the data (n) of a `dlistint_t` linked list.
- **7-insert_dnodeint.c:** This file contains a function that inserts a new node at a given position.
- **8-delete_dnodeint.c:** This file contains a function that deletes the node at index `index` of a `dlistint_t` linked list.

## Author: SARAHEMMY
