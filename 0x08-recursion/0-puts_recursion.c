#include "main.h"

/**
 * _puts_recursion - function prints a string followed by a new line
 * @s: pointer to first string character
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_put_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
