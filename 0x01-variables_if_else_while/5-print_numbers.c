#include <stdio.h>

/**
 * main - print decimal digits
 * Return: (0) means success
 */

int main(void)
{
	char d = '0';

	while (d <= '9')
	{
		putchar (d);
		d++;
	}
	putchar ('\n');
	return (0);
}
