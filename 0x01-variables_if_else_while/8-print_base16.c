#include <stdio.h>
/**
 * main - Empty point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
	{
		if (i < 10)
		{
		putchar('0' + i);
	}
	else
	{
	char hexChar = 'a' + (i - 10);

	putchar(hexChar);
	}
	}
	putchar('\n');
	return (0);
}
