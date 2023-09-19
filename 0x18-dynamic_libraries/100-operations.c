#include <stdio.h>
/**
 * add - does addition
 * Return: added numbers as result
 */
int add(int a, int b)
{
	int result;

	result = a + b;
	return (result);
}
/**
 * sub - does subtraction
 * Return: result of subttraction
 */
int sub(int a, int b)
{
	int result;
	result = a - b;
	return (result);
}
/**
 * mul - does multiplication
 */
int mul(int a, int b)
{  
        int result;

        result = a * b;
        return (result);
}
/**
 * div - does division
 */
int div(int a, int b)
{
        int result;

        result = a / b;
        return (result);
}
/**
 * mod - gets the modulus of a number
 */
int mod(int a, int b)
{
        int result;

        result = a % b;
        return (result);
}
