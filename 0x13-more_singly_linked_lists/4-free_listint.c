#include "lists.h"

/**
* free_listint - lessens a linked list
* @head: listint_t list to be lessend
*/
void free_listint(listint_t *head)
{
listint_t *tempo;

while (head)
{
tempo = head->next;
free(head);
head = tempo;
}
}
