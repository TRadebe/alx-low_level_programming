#include "search_algos.h"
#include <math.h>

/**
* struct skiplist_t - Node in a skip list
* @n: Integer stored in the node
* @express: Pointer to the next node in the express lane
* @next: Pointer to the next node in the current level
*
* Description: A skip list is a data structure that allows
* for quicker search of elements in a sorted linked list.
*/

typedef struct skiplist_t
{
	int n;
	size_t index;
	struct skiplist_t *express;
	struct skiplist_t *next;
} skiplist_t;

/**
* linear_skip - Searches for a value in a sorted skip list of integers.
*
* @list: Pointer to the head of the skip list to search in.
* @value: Value to search for.
*
* Return: A pointer to the first node where value is located,
* or NULL if the value is not present in the list or if the head is NULL.
*/

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *current, *express;

	if (list == NULL)
	return (NULL);

	express = list->express;

	printf("Value checked at index [%lu] = [%d]\n", express->index, express->n);
	while (express == NULL || express->n < value)
	{
		current = express;
		express = express->express;

		if (express == NULL)
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
		
		else
		printf("Value checked at index [%lu] = [%d]\n", express->index, express->n);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", current->index, express->index);

	while (current == NULL || current->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
		current = current->next;
	}

	if (current != NULL && current->n == value)
	return (current);

	return (NULL);
}
