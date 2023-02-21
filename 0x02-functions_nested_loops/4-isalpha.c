#include "main.h"

/**
 * _isalpha - checks if input is an alphabet, whether lower or upper
 * @c: input parameter
 * Return: 1 if input is alphabet and 0 if not
 */

int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
