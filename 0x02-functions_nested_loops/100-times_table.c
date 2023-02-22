#include "main.h"
/**
 * print_times_table- times table of input n
 * @n: input to generate times table fo
 */
void print_times_table(int n)
{
	int i = 0;
	while (i <= n && n <= 15)
	{
		int j = 0;
		while (j <= n)
		{
			int k = i * j;

			if (j == 0)
			{
				_putchar(k + '0');
			}
			else if (k < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			}
			else if (k < 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
			else if (k >= 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((k / 100) + '0');
				_putchar(((k / 10) % 10) + '0');
				_putchar((k % 10) + '0');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
