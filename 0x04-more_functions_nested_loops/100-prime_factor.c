#include <stdio.h>

/**
 * is_prime - checks is a number is a prime number
 * @n: number to check
 * Return: 1 for prime, 0 for not prime
 */
int is_prime(int n)
{
	int i;

	if (n <= 1)
	{
		return (0);
	}

	for (i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}


/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * Return: 0
 */
int main(void)
{
	int k;

	long double lpf;

	long int num = 612852475143;

	lpf = 2;
	for (k = 2; k < num / 2; k++)
	{
		if (num % k == 0 && is_prime(k) == 1)
		{
			lpf = (k > lpf) ? (double)k : lpf;
		}
	}
	printf("%Lf", lpf);
	printf("\n");
}
