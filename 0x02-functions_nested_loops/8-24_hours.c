#include "main.h"

/**
 * jack_bauer - functions that prints every minute of the day
 * Return: nothing
 */

void jack_bauer(void)
{
	int i = 0;
	char c = ':';

	while (i <= 2)
	{
		int j = 0;

		while (j <= 9)
		{
			int k = 0;

			while (k <= 5)
			{
				int l = 0;

				while (l <= 9)
				{
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(c);
					_putchar(k + '0');
					_putchar(l + '0');
					_putchar('\n');

					l++;
				}

				k++;
			}

			j++;
		}

		i++;
	}
}


