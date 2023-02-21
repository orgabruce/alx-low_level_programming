#include "main.h"

/**
 * _islower - this programs checks if character is lowercase or not
 * @c: character passed
 * Return: (1) if input is lowercase
 * Return: (0) if input is not
 */

int _islower(int c)
{
	if ((c <= 'a') && (c <= 'z'))
		return (1);
	else
		return (0);
}
