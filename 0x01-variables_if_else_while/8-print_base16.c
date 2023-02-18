#include <stdio.h>

/**
 * main - is entry point
 * return - main output
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

	return (0);
}
