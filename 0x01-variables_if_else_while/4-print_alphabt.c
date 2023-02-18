#include <stdio.h>

/**
* main - prints lower cases except q and e
* Return: (0) means success
*/

int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		if (x != 'e' && x != 'q')
		{
			putchar(x);
		}
	x++;
	}
	putchar('\n');
	return (0);
}
