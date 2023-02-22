#include <stdio.h>

/**
 * main - sum if multiiples of 3 and 5
 * Return: 0 means success
 */

int main(void)
{
	int i = 0;
	int sum = 0;

	while (i < 1024)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			sum += i;
		}
		i++;
	}
	printf("%d\n", sum);

	return (0);
}
