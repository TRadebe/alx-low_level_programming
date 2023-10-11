#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers using
 *                 the Linear search algorithm.
 *
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: If the value is found, the index of the first occurrence
 *         in the array; otherwise, -1.
 */

int linear_search(int *array, size_t size, int value)
{
	/* Check if the array is NULL */
	if (array == NULL)
		return (-1);

	/* Iterate through the array to find the value */
	for (size_t i = 0; i < size; i++)
	{
		/* Print the current element being checked */
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		/* Check if the current element is equal to the value */
		if (value == array[i])
			return (i); /* Value found, return the index */
	}

	/* Value not found in the array */
	return (-1);
}
