#include "search_algos.h"

/**
 * recursive_binary_search - Searches for a value in a sorted array of integers
 * using the Binary search algorithm, recursively.
 * @array: A pointer to the first element of the array to search in.
 * @left: The starting index of the (sub)array to search.
 * @right: The ending index of the (sub)array to search.
 * @value: The value to search for.
 *
 * Return: The index where value is located or -1 if
 * value is not present in array or if array is NULL.
 */
int recursive_binary_search(int *array, size_t left, size_t right, int value)
{
	size_t midway;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (midway = left; midway < right; midway++)
		printf("%d, ", array[midway]);
	printf("%d\n", array[midway]);

	midway = left + (right - left) / 2;
	if (array[midway] == value && (midway == left || array[midway - 1] != value))
	{
		return (midway);
	}

	if (array[midway] >= value)
			return (recursive_binary_search(array, left, midway, value));
	return (recursive_binary_search(array, midway + 1, right, value));
}

/**
 * advanced_binary - Searches for a value in a sorted array of integers.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in the array
 * @value: The value to search for.
 *
 * Return: The index where value is located or -1 if
 * value is not present in array or if array is NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (recursive_binary_search(array, 0, size - 1, value));
}
