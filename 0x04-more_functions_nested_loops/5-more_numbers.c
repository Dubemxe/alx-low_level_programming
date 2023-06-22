#include "main.h"
/**
 * more_numbers - prints numbers from 0 to 14,
 * 10 times
 * Return: Nothing!
 */
void more_numbers(void)
{
	int i, p;

	for (i = 0; i < 10; i++)
	{
	for (p = 0; p <= 14; p++)
	{
	if (p > 9)
	{
	_putchar('1');
	}
	_putchar(p % 10 + '0');
	}
	_putchar('\n');
	}
}
