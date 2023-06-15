# Doubly Linked List Operations

This repository contains C code for various operations on a doubly linked list. The provided functions allow you to manipulate and perform common operations on a doubly linked list.

## Functions

The following functions are available:

1. `print_dlistint` - Prints all the elements of a doubly linked list.
2. `add_dnodeint` - Adds a new node at the beginning of a doubly linked list.
3. `add_dnodeint_end` - Adds a new node at the end of a doubly linked list.
4. `free_dlistint` - Frees the memory allocated for a doubly linked list.
5. `get_dnodeint_at_index` - Returns the nth node of a doubly linked list.
6. `sum_dlistint` - Returns the sum of all the data in a doubly linked list.
7. `insert_dnodeint_at_index` - Inserts a new node at a given position in a doubly linked list.
8. `delete_dnodeint_at_index` - Deletes the node at a given index in a doubly linked list.

## Usage

To use these functions in your C program, include the `lists.h` header file in your source file and compile it with the corresponding implementation file(s).

```c
#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

int main(void)
{
    dlistint_t *head = NULL;

    /* Example usage of the doubly linked list functions */

    /* Create and print a doubly linked list */
    add_dnodeint(&head, 1);
    add_dnodeint(&head, 2);
    add_dnodeint(&head, 3);
    print_dlistint(head);

    /* Insert a node at a specific index */
    insert_dnodeint_at_index(&head, 1, 10);
    print_dlistint(head);

    /* Delete a node at a specific index */
    delete_dnodeint_at_index(&head, 2);
    print_dlistint(head);

    /* Free the memory allocated for the doubly linked list */
    free_dlistint(head);

    return 0;
}
