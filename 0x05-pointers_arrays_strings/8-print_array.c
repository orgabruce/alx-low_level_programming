#include "main.h"

/**
 * print_array - this function prints n elements of an array
 * @a: array of integers
 * @n: number of elements in array
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d, ", a[i]);
		i++;
	}

	printf("\n");
}
