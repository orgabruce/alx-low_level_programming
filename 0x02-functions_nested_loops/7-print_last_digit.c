#include "main.h"

/**
 * print_last_digit - checks last digit
 * @x: input integer
 * Return: last digit of input
 */

int print_last_digit(int x)
{
	int d = x % 10;

	if (d < 0)
		d = d * (-1);

	_putchar(d + '0');

	return (0);
}
