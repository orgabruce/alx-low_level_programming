#include "main.h"

/**
 * _strchr - function locates a character in a string
 * @s: pointer to first string character
 * @c: character to search for
 * Return: pointer to character
 */

char *_strchr(char *s, char c)
{
	unsigned int c = 0;

	while (*(s + c) != c)
	{
		c++;
	}
	return (s + c);
}
