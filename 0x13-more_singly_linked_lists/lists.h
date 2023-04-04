// Include guard
#ifndef LISTS_H
#define LISTS_H

// Include necessary libraries
#include <stdio.h>
#include <stdlib.h>

// Define a struct for the linked list
typedef struct Node {
    int data;
    struct Node *next;
} Node;

// Declare functions for linked list manipulation
size_t printList(const Node *head);
size_t listLength(const Node *head);
Node *addToBeginning(Node **head, const int data);
Node *addToEnd(Node **head, const int data);
void freeList(Node *head);
void freeList2(Node **head);
int pop(Node **head);
Node *getNodeAtIndex(Node *head, unsigned int index);
int sumList(Node *head);
Node *insertAtIndex(Node **head, unsigned int index, int data);
int deleteAtIndex(Node **head, unsigned int index);
Node *reverseList(Node **head);
size_t printSafe(const Node *head);
size_t freeSafe(Node **head);
Node *findLoop(Node *head);

#endif // End include guard
