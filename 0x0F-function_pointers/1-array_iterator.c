#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - repertitive for each element
 * @array: array
 * @size: array size
 * @action: pointer to the function
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !size || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
