#include "main.h"
#include <stdio.h>

/**
 * get_endianness - checks the endianness
 * union - checks for endianness
 * Return: 1 for big endian or 0 nfor little endian
 */
int get_endianness(void)
{
	union
	{
		int int_value;
		char byte_value[sizeof(int)];
	} data;

	data.int_value = 1;

	return ((data.byte_value[0] == 1) ? 1 : 0);
}
