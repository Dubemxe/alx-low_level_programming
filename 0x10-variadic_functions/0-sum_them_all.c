#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns the sum
 * @n: the first param
 *
 * Return: Always the sum of two params
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum = 0;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	if (n == 0)
		return (0);
	}
	va_end(ap);
	return (sum);
}
