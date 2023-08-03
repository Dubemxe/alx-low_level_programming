#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 1 for big endian or 0 nfor little endian
 */
int get_endianness(void)
{
	unsigned int int_value = 1;
	char *byte_value = (char *) &int_value;

	return (*byte_value);
}
