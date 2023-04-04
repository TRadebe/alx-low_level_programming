#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the 1st element in the list
 * @index: index that deletes a  node
 *
 * Return: 1 (Success). else  -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *tempo = *head;
listint_t *current = NULL;
unsigned int i = 0;

if (*head == NULL)
return (-1);

if (index == 0)
{
*head = (*head)->next;
free(tempo);
return (1);
}
while (i < index - 1)
{
if (!tempo || !(tempo->next))
return (-1);
tempo = tempo->next;
i++;
}
current = tempo->next;
tempo->next = current->next;
free(current);
return (1);
}
