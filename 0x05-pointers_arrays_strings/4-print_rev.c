#include "main.h"

/**
 * print_rev - prints input string in reverse
 * @s: input string
 * return: 0 means success
 */

void print_rev(char *s)
{
	int l = 0;
	int i = l;

	while (*s != '\0')
	{
		l++;
		s++;
	}

	while (i > 0)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
