#include "main.h"
/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: a pointer to a string of 1 and 0 chars
 *
 * Return: the converted number or 0 for anything else
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (!b)
		return (0);
	while (*b)
	{
	if (*b != '0' && *b != '1')
	{
		return (0);
	}
		num = num << 1;
		if (*b == '1')
			num |= 1;
		b++;
	}
	return (num);
}