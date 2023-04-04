#include "lists.h"

/**
* find_listint_loop - finds the loop in a linked list
* @head: linked list to search for
*
* Return: address this  node where the loop started. esle NULL
*/

listint_t *find_listint_loop(listint_t *head)
{
listint_t *backward = head;
listint_t *forwad = head;

if (!head)
return (NULL);
while (backward && forwad && forwad->next)
{
forwad = forwad->next->next;
backward = backward->next;
if (forwad == backward)
{
backward = head;
while (backward != forwad)
{
backward = backward->next;
forwad = forwad->next;
}
return (forwad);
}
}
return (NULL);
}
