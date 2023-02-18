#include <stdio.h>

/**
 * main - prints digits
 * Return: (0) sucess
 */

int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar ('0' + i);
		i++;
	}

	putchar ('\n');
	
	return (0);
}
