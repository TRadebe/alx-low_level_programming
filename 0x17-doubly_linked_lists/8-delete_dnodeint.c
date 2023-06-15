#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given index of a dlistint_t linked list.
 * @head: Pointer to the address of the head of the list.
 * @index: Index of the node that should be deleted.
 * Return: 1 if deletion is successful, -1 if it fails.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current, *temp;
unsigned int i;

if (*head == NULL)
return (-1);

current = *head;
if (index == 0)
{
*head = current->next;
if (*head != NULL)
(*head)->prev = NULL;
free(current);
return (1);
}

for (i = 0; i < index - 1; i++)
{
if (current == NULL)
return (-1);
current = current->next;
}

if (current == NULL || current->next == NULL)
return (-1);

temp = current->next;
current->next = temp->next;
if (current->next != NULL)
current->next->prev = current;
free(temp);

return (1);
}
