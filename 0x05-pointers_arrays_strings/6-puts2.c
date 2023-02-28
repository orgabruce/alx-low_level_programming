#include "main.h"

/**
 * puts2 - prints one character out of every two iteratively
 * @s: the input string
 * Return: nothing
 */

void puts2(char *str)
{
	int length = 0;
	int i;

	while (*str != '\0')
	{
		length++;
		str++;
	}

	while (*str != '\0')
	{
		for (i = 0; i < length; i++)
		{
			if ((i % 2) == 0)
			{
				_putchar(str[i]);
			}
		}
		str++;
	}
	_putchar('\n');
}
