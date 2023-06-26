#include <stdio.h>
#include "main.h"
/**
 * swap_int - swaps two integer in a function
 * @a: First integer to be swapped
 * @b: Second integer to be swapped with
 *
 * Return: Nothing!
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
