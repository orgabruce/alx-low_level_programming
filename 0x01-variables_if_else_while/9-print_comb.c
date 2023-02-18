#include <stdio.h>

/**
 * main - a program that prints combinations of single-digit numbers
 * Return: (0) means success
 */

int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar ('0' + n);
		putchar (',');
		putchar (' ');
		n++;
	}

	putchar ('\n');

	return (0);
}
