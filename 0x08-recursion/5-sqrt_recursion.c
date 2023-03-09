#include "main.h"

/**
 * _sqrt_recursion - calculates the square root of a number
 * @n: input number
 * Return: square root of number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (real_sqrt_recursion_calc(n, 0));
}

/**
 * real_sqrt_recursion_calc - recursively finds the square root of a number
 * @n: number to calculate the sqaure root
 * @i: iteration checker
 * Return: the square root
 */

int real_sqrt_recursion_calc(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (real_sqrt_recursion_calc(n, i + 1));
}
