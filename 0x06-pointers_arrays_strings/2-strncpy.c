#include "main.h"

/**
 * _strncpy - copies n characters of a string
 * @dest: destination string
 * @src: input string to copy from
 * @n: numberr of characters to copy
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int dlen = 0;
	int i = 0;
	char *p = char *r = dest;

	while (*dest != '\0')
	{
		dlen++;
		dest++;
	}

	while (i <= dlen)
	{
		if (i < n)
		{
			*(p + i) = *(src + i);
		}
		else
		{
			*(dest + i) = '\0';
		}
		i++;
	}

	return (r);
}
