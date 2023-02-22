#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints numbers starting from n to 98
 * @n: start number
 * Return: nothing
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		int i = n;

		while (i <= 98)
		{
			if (i == 98)
			{
				printf("%d\n", i);
			}
			else
			{
				printf("%d ,", i);
			}
			i++;
		}
	}
	else if (n > 98)
	{
		int i = n;

		while (i >= 98)
		{
			if (i == 98)
			{
				printf("%d\n", i);
			}
			else
			{
				printf("%d ,", i);
			}
		}
	}
}

