#include "lists.h"

/**
* add_nodeint - It adds a new node at beginning of linked list
* @head: pointer to the 1st node
* @n: data to insert in that new node
*
* Return: pointer to the new node. NULL if not
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *current;

current = malloc(sizeof(listint_t));
if (!current)
return (NULL);
current->n = n;
current->next = *head;
*head = current;
return (current);
}
