#include "main.h"

/**
 * _isupper -looks out for only upper case letters
 * @c: input varialble
 * Return: 1 if input is uppercase and 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
