#include "main.h"

/**
 * *string_touper - changes all lowercase letters of a string to uppercase
 * @str: input string
 * Return: new Uppercase string
 */

char *string_toupper(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		if ((str[count] >= 'a') && (str[count] <= 'z'))
		{
			str[count] = str[count] - 32;
		}
		count++;
	}

	return (str);
}
