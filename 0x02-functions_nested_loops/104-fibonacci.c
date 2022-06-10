#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 * Return: 0
 */
int main(void)
{
	unsigned long int n, m, i, nx;

	n = 1;
	m = 2;
	printf("%lu, %lu, ", n, m);
	for (i = 3; i <= 98; i++)
	{
		nx = n + m;
		if (i == 50)
		{
			printf("%lu", nx);
		}
		else
		{
			printf("%lu, ", nx);
		}
		n = m;
		m = nx;
	}
	printf("\n");
	return (0);
}
