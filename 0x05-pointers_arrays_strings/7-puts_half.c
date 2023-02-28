#include "main.h"

/**
 * puts_half - this function prints half of a string followed by a new line
 * @str: input string
 * Return: nothing
 */

void puts_half(char *str)
{
	int a, n, length;

	length = 0;

	while (str != '\0')
	{
		length++;
		str++;
	}

	n = (length / 2);

	if ((length % 2) == 1)
		n = ((length + 1) / 2);

	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
