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
		int i = 0;

		while (i < n)
		{
			int j = 0;

			while (j < n)
			{
				if (j == i)
				{
					_putchar('\\');
				}
				else if (j < i)
				{
					_putchar(' ');
				}

				j++;
			}
		}

		_putchar('\n');
		i++;
	}
}
