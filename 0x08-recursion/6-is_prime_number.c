#include <stdio.h>

/**
 * is_prime_number - checks if a number is a prime number
 * @n: number
 * Return: 1 if n is a prime number, else 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	if (n == 2)
	{
		return (1);
	}
	
	return (my_recursion(n, 0));
}
