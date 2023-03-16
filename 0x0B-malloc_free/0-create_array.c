#include "main.h"
#include <stdlib.h>

/**
 * create_array -  array of size size with char c
 * @size: array size
 * @c: char to assign
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
