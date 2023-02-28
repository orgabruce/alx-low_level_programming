#include "main.h"

/**
 * puts2 - prints one character out of every two iteratively
 * @s: the input string
 * Return: nothing
 */

void puts2(char *s)
{
	int length = 0;
	int i;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	for (i = 0; i < length; i++)
	{
		if ((i % 2) == 0)
		{
			_putchar(s[i]);
			_putchar(' ');
		}
	}
	_putchar('\n');
}
