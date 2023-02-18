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

	x = 'A';
	while (x <= 'Z')
	{
		putchar (x);
		x++;
	}

	putchar ('\n');

	return (0);
}
