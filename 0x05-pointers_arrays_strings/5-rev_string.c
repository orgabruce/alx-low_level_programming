#include "main.h"

/**
 * rev_string - this creates the reversal of a string
 * @s: Input string
 * Return: nothin
 */

void rev_string(char *s)
{
	int length = 0;
	int i, mid;
	char rev;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	mid = length / 2;

	for (i = 0; i < mid; i++)
	{
		length--;
		rev = s[i];
		s[i] = s[length];
		s[length] = rev;
	}
}
