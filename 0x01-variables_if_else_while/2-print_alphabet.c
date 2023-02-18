#include <stdio.h>

/**
 * main - program to print lower case alphabets
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

	putchar ('\n');

	return (0);
}
