#include <stdlib.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line.
 * @n: start of numbers
 * Return: void
 */
void print_to_98(int n)
{
	if (n == 98)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
		_putchar('\n');
	}
	else if (n < 98)
	{
		int i, f, k;

		for (i = n; i <= 98; i++)
		{
			k = i;
			if (i < 0)
			{
				_putchar('-');
				k = abs(i);
			}
			f = k / 10;
			if (f / 10)
			{
				_putchar(f / 10 + '0');
			}
			if (k / 10)
			{
				_putchar(f % 10 + '0');
				_putchar(k % 10 + '0');
			}
			else
			{
				_putchar(k + '0');
			}
			if (i > 0 && k == 98)
			{
				continue;
			}
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
	else
	{
		int d, e;

		for (d = n; d >= 98; d--)
		{
			e = d / 10;
			if (e / 10)
			{
				_putchar(e / 10 + '0');
			}
			_putchar(e % 10 + '0');
			_putchar(d % 10 + '0');
			if (d == 98)
			{
				continue;
			}
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
