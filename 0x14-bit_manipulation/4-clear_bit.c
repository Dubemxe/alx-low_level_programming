#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 in a given index
 * @n: a pointer to the input value
 * @index: the index value
 *
 * Return: 1 if it worked or 0 if there is an error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n &= ~(1UL << index);

	return (1);
}
