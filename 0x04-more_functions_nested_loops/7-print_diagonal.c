#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: input parameter
 * Return: nothing
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		if (n == 1)
		{
			_putchar('\\');
			_putchar('\n');
		}
		else
		{
			_putchar('\\');
			_putchar('\n');

			int i = 1;

			while (i < n)
			{
				int j = 0;

				while (j < i)
				{
					_putchar(' ');
					j++;
				}

				_putchar('\\');
				_putchar('\n');
				i++;
			}
		}
	}
}
