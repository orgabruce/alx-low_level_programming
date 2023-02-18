#include <stdio.h>

/**
 * main - program to print possible different combinations of three digits
 * Return: (0) means a success
 */

int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		int j = i + 1;

		while (j <= 9)
		{
			int k = j + 1;

			while (k <= 9)
			{
				putchar ('0' + i);
				putchar ('0' + j);
				putchar ('0' + k);

				if ((i == 7) && (j == 8) && (k == 9))
					;
				else
				{
					putchar (',');
					putchar (' ');
				}

				k++;
			}

			j++;
		}

		i++;
	}

	putchar ('\n');

	return (0);

}
