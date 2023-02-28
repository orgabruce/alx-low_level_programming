#include "main.h"

/**
 * swap_int - this function swaps the values of two integers variables
 * @a: integer input one
 * @b: integer input two
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
