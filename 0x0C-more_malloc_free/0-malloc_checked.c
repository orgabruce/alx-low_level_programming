#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: input integer
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(sizeof(int) * b);

	if (ptr == NULL)
	{
		return (1);
	}

	return (ptr);
}
