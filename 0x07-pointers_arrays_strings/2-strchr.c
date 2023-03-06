#include "main.h"

/**
 * _strchr - function locates a character in a string
 * @s: pointer to first string character
 * @c: character to search for
 * Return: 0 meaning success
 */

char *_strchr(char *s, char c)
{
	int n = 0;

	while (s[n] >= '\0')
	{
		if (s[n] == c)
			return (&s[n]);
		n++;
	}
	return (0);
}
