#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastd = n % 10;

	printf("Last digit of %d", n);
		if (lastd > 5)
		{
			printf("is %d and is greater than 5\n", lastd);
		}
		else if (lastd < 6 && lastd != 0)
		{
			printf("is %d and is less than 6 and not 0\n", lastd);
		}
		else
		{
			printf("and is 0");
		}
	return (0);
}
