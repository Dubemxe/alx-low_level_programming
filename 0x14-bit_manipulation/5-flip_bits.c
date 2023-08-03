#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get
 * from one number to another.
 * @n: input value
 * @m: input value
 *
 * Return: the number of bit
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flip = 0;
	unsigned long int xor_result = n ^ m;

	while (xor_result)
	{
		flip += xor_result & 1;
		xor_result >>= 1;
	}
	return (flip);
}
