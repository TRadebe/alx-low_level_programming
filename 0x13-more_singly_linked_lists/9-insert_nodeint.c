#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a specified positon
 * @head: pointer to the 1st node in the list
 * @idx: index to which the new node is added
 * @n: Insert in the new node
 *
 * Return: pointer to the new node. else  NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *new;
listint_t *tempo = *head;

new = malloc(sizeof(listint_t));
if (!new || !head)
return (NULL);
new->n = n;
new->next = NULL;
if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}
for (i = 0; tempo && i < idx; i++)
{
if (i == idx - 1)
{
new->next = tempo->next;
tempo->next = new;
return (new);
}
else
tempo = tempo->next;
}
return (NULL);
}
