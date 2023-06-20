#include "main.h"
/**
 * times_table - prints the 9 times table starting with 0
 *
 * Return: ....
 */
void times_table(void)
{
	int w, x, y, z, d;

	for (w = 0; w <= 9; w++)
	{
	for (x = 0; x <= 9; x++)
	{
	y = w * x;
	if (y < 9)
	{
	z = y % 10;
	d = (y - z) / 10;
	_putchar(44);
	_putchar(32);
	_putchar(d + '0');
	_putchar(z + '0');
	}
	else
	{
	if (x != 0)
	{
	_putchar(44);
	_putchar(32);
	_putchar(32);
	}
	_putchar(y + '0');
	}
	}
	_putchar('\n');
	}
}
