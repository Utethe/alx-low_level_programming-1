#include "main.h"

/**
 * printm - helper function, print integer using _putchar
 * @n: number to print
 */
void printm(long n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
		printm(n / 10);
	_putchar(n % 10 + '0');
}

/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: times table stop
 * Return: void
 */
void print_times_table(int n)
{
	int i, k, p;

	for (i = 0; i <= n; i++)
	{
		for (k = 0; k <= n; k++)
		{
			p = i * k;
			printm(p);
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
