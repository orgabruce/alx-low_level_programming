#include "main.h"

/**
 * print_last_digit - checks last digit
 * @x: input integer
 * Return: last digit of input
 */

int print_last_digit(int x)
{
	int d;

	if (x < 0)
		x = x * (-1);

	d = x % 10;

	_putchar(d + '0');

	return (d);
}
