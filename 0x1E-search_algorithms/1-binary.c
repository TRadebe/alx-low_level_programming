#include "search_algos.h"

/**
* recursive_search - Recursively searches for a value in a sorted array of
* integers using the Binary search algorithm.
*
* @array: Pointer to the first element of the array.
* @size: Number of elements in the array.
* @value: Value to search for.
*
* Return: If the value is found, the index where it's located; otherwise, -1.
*/

int recursive_search(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t i;

	/* Check for invalid array or size */
	if (array == NULL || size == 0)
		return (-1);

	/* Display the current subarray being searched */
	printf("Searching in array:");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? "" : ",", array[i]);

	printf("\n");

	/* Adjust mid-point if size is even */
	if (half && size % 2 == 0)
		half--;

	/* Check if the value is at the middle of the current subarray */
	if (value == array[half])
	return ((int)half);

	/* Recursively search the left or right half based on the value */
	if (value < array[half])
		return (recursive_search(array, half, value));

	half++; /* Move to the right half */
	return (recursive_search(array + half, size - half, value) + half);
}

/**
* binary_search - Calls recursive_search to return the index of the number.
*
* @array: Pointer to the first element of the array.
* @size: Number of elements in the array.
* @value: Value to search for.
*
* Return: If the value is found, the index where it's located; otherwise, -1.
*/

int binary_search(int *array, size_t size, int value)
{
	int index;

	/* Call recursive_search to perform binary search */
	index = recursive_search(array, size, value);

	/* Check if the value is not present in the array */
	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
