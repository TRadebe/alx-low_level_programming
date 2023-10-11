#include "search_algos.h"
#include <math.h>

/**
* jump_search - Searches for a value in a sorted array of
* integers using the Jump search algorithm.
*
* @array: Pointer to the first element of the array.
* @size: Number of elements in the array.
* @value: Value to search for.
*
* Return: If the value is found, the index where it's located; otherwise, -1.
*/
int jump_search(int *array, size_t size, int value)
{
	int index, m, k, prev;

	/* Check for invalid array or size */
	if (array == NULL || size == 0)
		return (-1);

	m = (int)sqrt((double)size);
	k = 0;
	prev = index = 0;

	do {
		/* Display the current element being checked */
		printf("Value checked array[%d] = [%d]\n", index, array[index]);

		/* Check if the value is found at the current element */
		if (array[index] == value)
			return (index);

		k++;
		prev = index;
		index = k * m;

	} while (index < (int)size && array[index] < value);

	/* Value is between the previous and current indexes */
	printf("Value found between indexes [%d] and [%d]\n", prev, index);

	/* Linear search between the previous and current indexes */
	for (; prev <= index && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}

	return (-1);
}
