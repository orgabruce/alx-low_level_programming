#include <stdio.h>

/**
 * main - program to mirror lower case letters
 * Return: (0) means success
 */

int main(void)
{
	char lc = 'z';

	while (lc >= 'a')
	{
		putchar (lc);
		lc--;
	}

	putchar ('\n');

	return (0);
}
