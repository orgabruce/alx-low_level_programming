#include "main.h"

/**
 * _strchr - function locates a character in a string
 * @s: pointer to first string character
 * @c: character to search for
 * Return: 0 meaning success
 */

char *_strchr(char *s, char c)
{
	int c = 0;

	while (s[c] >= '\0')
	{
		if (s[c] == c)
			return (&s[c]);
		c++;
	}
	return (0);
}
