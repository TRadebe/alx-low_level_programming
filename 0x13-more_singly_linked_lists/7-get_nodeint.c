#include "lists.h"

/**
* get_nodeint_at_index - returns the node at a specific index in a linked list
* @head: 1st node in the linked list
* @index: index of the node to return
*
* Return: pointer to the current node. else must be NULL
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *tempo = head;
while (tempo && i < index)
{
tempo = tempo->next;
i++;
}
return (tempo ? tempo : NULL);
}
