#include <stdio.h>

/**
 * main - this is entry point
 * Return: (0) means success
 */

int main(void)
{
	int c1;

	for (c1 = 0; c1 <= 9; c1++)
	{
		int c2;

		for (c2 = c1; c2 <= 9; c2++)
		{
			int c3;

			for (c3 = 0; c3 <= 9; c3++)
			{
				int c4;

				for (c4 = c3 + 1; c4 <= 9; c4++)
				{
					putchar ('0' + c1);
					putchar ('0' + c2);
					putchar (' ');
					putchar ('0' + c3);
					putchar ('0' + c4);

					if ((c1 != 9) && (c2 != 8) && (c3 != 9) && (c4 != 9))
					{
						putchar (',');
						putchar (' ');

					}
				}
			}
		}
	}

	putchar ('\n');

	return (0);
}
