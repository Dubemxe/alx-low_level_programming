#include "search_algos.h"

/**
 * binary_search - earches for a value in a sorted array of integers
 * using the Binary search algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where value is located or -1 if
 * value is not present in array or if array is NULL.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, midway;

	if (array == NULL)
		return (-1);
	while (left <= right)
	{
		printf("Searching in array: ");
		for (midway = left; midway < right; midway++)
			printf("%d, ", array[midway]);
		printf("%d\n", array[midway]);

		midway = left + (right - left) / 2;
		if (array[midway] == value)
		{
			return (midway);
		}

		if (array[midway] < value)
			left = midway + 1;
		else
		{
			right = midway - 1;
		}
	}
	return (-1);
}
