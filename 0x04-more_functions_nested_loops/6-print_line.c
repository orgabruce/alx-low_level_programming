#include "main.h"

/**
 * print_line - prints a straight line
 * @n: input parameter
 * Return: nothing
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i = 0;

		while (i < n)
		{
			_putchar('_');
			i++;
		}

		_putchar('\n');
	}
}
