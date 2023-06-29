#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverses the content of an array
 * @a: pointer to the array
 * @n:  is the number of elements of the array
 *
 * Return: Nothing!
 */
void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;

	while (start < end)
	{
		int temp = a[start];

		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}
