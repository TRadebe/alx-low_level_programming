#include "lists.h"

/**
* sum_listint - calculates the sum of all the data in a listint_t list
* @head:1st  node in the linked list
*
* Return: final sum
*/

int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *tempo = head;

while (tempo)
{
sum += tempo->n;
tempo = tempo->next;
}
return (sum);
}
