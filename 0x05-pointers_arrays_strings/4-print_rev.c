#include "main.h"

/**
 * print_rev - prints input string in reverse
 * @s: input string
 * Return: nothing
 */

void print_rev(char *s)
{
	int l = 0;
	int i;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	s--;

	i = l;

	while (i > 0)
	{
		_putchar(*s);
		s--;
		i--;
	}

	_putchar('\n');
}
