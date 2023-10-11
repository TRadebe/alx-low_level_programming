#include "search_algos.h"

/**
 * recursive_search - Recursively searches for a value in an array using Binary
 *
 * @array: Input array.
 * @size: Size of the array.
 * @value: Value to search for.
 *
 * Return: Index of the value if found, otherwise -1.
 */
int recursive_search(int *array, size_t size, int value)
{
	size_t half = size / 2; /* Calculate the middle index */
	size_t i;

	/* Check for invalid input */
	if (array == NULL || size == 0)
		return (-1);

	/* Display the current array being searched */
	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	/* Adjust the middle index for arrays with even size */
	if (half && size % 2 == 0)
		half--;

	/* Check if the value is found at the middle index */
	if (value == array[half])
		return ((int)half);

	/* Recursively search the left or right half based on the value */
	if (value < array[half])
		return (recursive_search(array, half, value));

	half++;

	/* Recursively search the right half */
	return (recursive_search(array + half, size - half, value) + half);
}

/**
 * binary_search - Calls recursive_search to return the index of the number.
 *
 * @array: Input array.
 * @size: Size of the array.
 * @value: Value to search for.
 *
 * Return: Index of the value if found, otherwise -1.
 */
int binary_search(int *array, size_t size, int value)
{
	int index;

	/* Call the recursive_search function */
	index = recursive_search(array, size, value);

	/* Check if the value is found at the returned index */
	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
