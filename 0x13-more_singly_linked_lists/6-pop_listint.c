#include "lists.h"

/**
 * pop_listint - delete head node of a linked list
 * @head: point the first element in the linked list
 *
 * Return: the data inside the elements that was deleted,
 * else 0
 */
int pop_listint(listint_t **head)
{
listint_t *tempo;
int num;

if (!head || !*head)
return (0);
num = (*head)->n;
tempo = (*head)->next;
free(*head);
*head = tempo;
return (num);
}
