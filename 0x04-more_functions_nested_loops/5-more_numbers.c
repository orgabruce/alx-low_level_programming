#include "main.h"

/**
 * more_numbers - prints numbers 0 - 14, 10 tmes
 * Return: nothing
 */

void more_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		int j = 0;

		while (j < 15)
		{
			_putchr(j + '0');
			j++;
		}

		_putchar('\n');
		i++;
	}
}
