#include "main.h"

/**
 * _strlen - checks the length of a string
 * @s: input string
 * Return: the length of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	return (i);
}
