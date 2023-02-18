#include <stdio.h>

/**
 * main - prints lower and upper alphabet
 * Return: (0) means success
 */

int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		putchar (x);
		x++;
	}

	char X = 'A';

	while (X <= 'Z')
	{
		putchar (X);
		X++;
	}

	putchar ('\n');

	return (0);
}
