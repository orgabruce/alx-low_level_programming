#include "main.h"

/**
 * _strncat - this function contenates two strings
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: number of characters to consider in the second string
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (*(dest + i))
	{
		i++;
	}

	while (j < n)
	{
		*(dest + i) = *(src + j);

		if (*(src + j))
		{
			i++;
			j++;
		}
		else
			break;
	}

	return (dest);
}

