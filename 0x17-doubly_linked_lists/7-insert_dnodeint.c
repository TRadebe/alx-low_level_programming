#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer to the address of the head of the list.
 * @idx: Index of the list where the new node should be added.
 * @n: Data of the new node.
 * Return: Address of the new node, or NULL if it failed.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node, *current_node = *h;
unsigned int i;

if (h == NULL)
return (NULL);

if (idx == 0)
return (add_dnodeint(h, n));

for (i = 0; current_node != NULL; i++)
{
if (i == idx - 1)
break;
current_node = current_node->next;
}

if (current_node == NULL)
return (NULL);

if (current_node->next == NULL)
return (add_dnodeint_end(h, n));

new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->prev = current_node;
new_node->next = current_node->next;
current_node->next->prev = new_node;
current_node->next = new_node;

return (new_node);
}
