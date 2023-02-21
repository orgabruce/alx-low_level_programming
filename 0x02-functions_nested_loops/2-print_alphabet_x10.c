#include "main.h"

/**
 * print_alphabet_x10 - this prints all lowercase letter 10 times
 */

void print_alphabet_x10(void)
{
	int i = 1;

	while (i <= 10)
	{
		char x = 'a';

		while (x <= 'z')
		{
			_putchar(x);
			x++;
		}

		_putchar('\n');

		i++;
	}
}
