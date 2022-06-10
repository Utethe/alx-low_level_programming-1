#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: 0
 */
int main(void)
{
	int n, m, i, nx;

	n = 1;
	m = 2;
	printf("%d, %d, ", n, m);
	for (i = 3; i <= 50; i++)
	{
		nx = n + m;
		printf("%d, ", nx);
		n = m;
		m = nx;
	}
	printf("\n");
	return (0);
}
