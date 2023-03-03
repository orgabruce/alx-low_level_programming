#include "main.h"

/**
 **cap_string - function that capitalizes all words of a string
 * @str: input string
 * Return: All Uppercase string
 */

char *cap_string(char *)
{
	int i, j;
	int sep_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*str >= 'a' && *str <= 'z')
	{
		*str -= 32;
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (str[i] == sep_words[j] && str[i+1] >= 'a' && str[i+1] <= 'z')
			{
				str[i + 1] -= 32;
			}
		}
	}

	return (str);
}
