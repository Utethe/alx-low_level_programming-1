#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: 0
 */
int main(void)
{
	unsigned long int n, m, nx, sum;

	n = 1;
	m = 2;
	nx = 2;
	sum = 2;
	while (nx <= 4000000)
	{
		nx = n + m;
		n = m;
		m = nx;
		if (nx % 2 == 0)
		{
			sum += nx;
		}
	}
	printf("%lu", sum);
	printf("\n");
	return (0);
}
