#include "main.h"

/**
 * printm - helper function, print integer using _putchar
 * @n: number to print
 */
void printm(long n)
{
	// If number is smaller than 0, put a - sign
	// and change number to positive
	if (n < 0) {
		_putchar('-');
		n = -n;
	}

	// Remove the last digit and recur
	if (n/10)
		printm(n/10);

	// Print the last digit
	_putchar(n%10 + '0');
}

/**
 * times_table - prints the n times table, starting with 0.
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
			// if (p / 10)
			// {
			// 	_putchar(p / 10 + '0');
			// }
			// else if (k != 0)
			// {
			// 	_putchar(' ');
			// }
			// _putchar(p % 10 + '0');
			// if (k == 9)
			// {
			// 	continue;
			// }
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar('\n');
	}
}