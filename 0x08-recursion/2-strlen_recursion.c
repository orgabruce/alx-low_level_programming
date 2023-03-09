#include "main.h"

/**
 * _strlen_recursion - function checks string length
 * @s: input string
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	int slength = 0;

	if (*s)
	{
		slength = 1 + _strlen_recursion(s + 1);
	}

	return (slength);
}
