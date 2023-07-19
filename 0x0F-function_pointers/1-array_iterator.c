#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a fuction given as a parameter
 * @size: is the size of the array
 * @action: a pointer to the function you need to use
 * @array: a pointer array
 * Return: Nothing!
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
