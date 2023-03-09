#include "main.h"

/**
 * real_prime_calculator - checks if number is prime recursively
 * @n: input number
 * @i: iteration checker
 * Return: 1 if n is prime, 0 if otherwise
 */

int real_prime_calculator(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (real_prime_calculator(n, i - 1));
}

/**
 * is_prime_number -  function checks if input is prime number
 * @n: input number
 * Return: 1 for prime and 0 for nonprime
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (real_prime_calculator(n, n - 1));
}
