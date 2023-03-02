#include "main.h"

/**
 * revere_array - reverse array content
 * @a: pointer to array
 * @n: array size
 */

void reverse_array(int *a, int n)
{
	int i, temp;
	for (i = 0; i < (n / 2); i++)
	{
	    temp = arr[i];
	    arr[i] = arr[n - 1 - i];
	    arr[n - 1 - i] = temp;
	}
}
