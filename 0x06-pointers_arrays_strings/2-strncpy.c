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
	char *ptr = dest;

	while (*src && n)
	{
		*dest++ = *src++;
		n--;
	}
	while (n--)
		*dest++ = '\0';
	return (ptr);
}
