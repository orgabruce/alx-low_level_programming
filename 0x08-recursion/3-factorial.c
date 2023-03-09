#include "main.h"

/**
 * factorial - gives the factorial of a given number
 * @n: input number
 * Return: factorial of number if 0 or more
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
