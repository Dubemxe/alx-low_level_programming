#include "main.h"
/**
 * print_last_digit - prints last digits of the number
 * @n: The number to treated
 * Return: The value of the last digit of the number
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
	last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}

