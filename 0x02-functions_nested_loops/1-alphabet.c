#include "main.h"

/**
 * print_alphabet - print all lowercase alphabets
 */

void print_alphabet(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		_putchar(x);
		x++;
	}

	_putchar('\n');
}
