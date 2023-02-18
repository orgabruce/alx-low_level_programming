#include <stdio.h>

/**
 * main - program to print all possible different combinations of two digits
 * Return: (0) means success
 */

int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		int j = i + 1;

		while (j <= 9)
		{
			putchar ('0' + i);
			putchar ('0' + j);
			if ((i < 8) && (j < 9))
			{
			putchar (',');
			putchar (' ');
			}

			j++;
		}

		i++;
	}

	putchar ('\n');

	return (0);

}
