#include "main.h"

/**
 * *_strcat - is a function that concatenates two strings
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	while (*dest)
		dest++;

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}

	return (dest);
}
