#include "main.h"

/**
 * _memcpy - fuction copies n bytes of src to dest
 * @dest: destination
 * @src: source
 * @n: number of bytes to copy
 * Return: pointer to destination dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c = 0;

	while (c < n)
	{
		dest[c] = src[c];
		c++;
	}
	return (dest);
}
