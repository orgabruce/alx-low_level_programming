#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 * @s: pointer
 * @b: constant byte
 * @n: number of replacements
 * Return: pointe s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c = 0;

	while (c < n)
	{
		s[c] = b;
		c++;
	}
	return (s);
}
