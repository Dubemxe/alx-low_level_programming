#include "search_algos.h"

/**
 * ini_binary_search - earches for a value in a sorted array of integers
 * using the Binary search algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @left: The starting index of the (sub)array to search.
 * @right: The ending index of the (sub)array to search.
 * @value: The value to search for.
 *
 * Return: The index where value is located or -1 if
 * value is not present in array or if array is NULL.
 */
int ini_binary_search(int *array, size_t left, size_t right, int value)
{
	size_t midway;

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

/**
 * exponential_search - Searches for a value in a sorted array
 * of integers using the Exponential search algorithm.
 * @array: A pointer  to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The first index where value is located or -1 if
 * value is not present in array or if array is NULL.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, r;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	r = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, r);
	return (ini_binary_search(array, i / 2, r, value));
}
