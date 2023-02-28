#include "main.h"

/**
 * _puts - this prints a string to stdout
 * @str: input string
 * Return: nothing
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
