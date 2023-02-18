#include <stdio.h>

/**
 * main - is entry point
 * Return: (0) - mains output
 */

int main(void)
{
	int n = 0;
	char x = 'a';

	while (n <= 9)
	{
		putchar ('0' + n);
		n++;
	}

	while (x <= 'f')
	{
		putchar (x);
		x++;
	}

	putchar ('\n');

	return (0);
}
